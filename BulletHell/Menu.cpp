#include "Menu.h"
#include<iostream>
namespace Pong
{

	void Menu::Init(Platform* platform, GameStateManager* gameStateManager) {
		back = new Image;
		back->LoadImage("back.png");
		this->platform = platform;
		player1 = new Player(platform, "player1.png", 0, 200, 0);
		player1->init();

		player2 = new Player(platform, "player1.png", 610, 200, 0);
		player2->init();

		ball = new Ball(platform, "ball.png", 300, 200, 0);
		ball->init();
	}

	void Menu::Draw() {
		platform->RenderClear();
		platform->RenderImage(back, 0, 0, 0);
		player1->draw();
		player2->draw();
		ball->draw();

		if (ballPractica != nullptr) {
			ballPractica->draw();
		}
		platform->RenderPresent();

	}

	void Menu::Update() {
		ball->update(player1, player2);
		if (ballPractica != nullptr) {
			ballPractica->update(player1, player2);
		}
	}

	void Menu::Close() {
	}

	bool Menu::Input(int key) {
		player1->input(key, 'q', 'a');
		player2->input(key, 'p', 'l');
		return false;
	}

	bool Menu::InputMouse(int x, int y, int button, int state)
	{
		if (mouseButtonLeftState == false && button == 1 && state == 1)
		{
			mouseButtonLeftState = true;
		}
		else if (mouseButtonLeftState == true && button == 1 && state == 2)
		{
			if (ballPractica == nullptr) {
				ballPractica = new Ball(platform, "ball.png", 300, 200, 0);
				ballPractica->init();
			}
			mouseButtonLeftState = false;
		}

		return false;
	}
}