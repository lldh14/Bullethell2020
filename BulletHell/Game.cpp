#include "Game.h"
#include<iostream>

namespace Pong
{
	void Game::Init(Platform* platform, GameStateManager* gameStateManager) {
	}

	void Game::Draw() {
		std::cout << "Estoy dibujando en game";

	}

	void Game::Update() {
		std::cout << "Estoy en game";
	}

	void Game::Close() {
	}

	bool Game::Input(int) {
		return false;
	}

	bool Game::InputMouse(int x, int y, int button, int state)
	{
		return false;
	}
}