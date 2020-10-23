#pragma once
#include "Reductor.h"
#include "GameState.h"
#include "Platform.h"
#include "GameStateManager.h"
#include "Image.h"
#include "Player.h"
#include "Ball.h"

namespace Pong
{
	class Menu : public GameState
	{
	private:
		Reductor *reductor;
		Image* back;
		Platform* platform;
		Player* player1;
		Player* player2;
		Ball* ball;
		Ball* ballPractica;
		bool mouseButtonLeftState{ false };
	public:
		virtual void Init(Platform*, GameStateManager*) override;
		virtual void Draw() override;
		virtual void Update() override;
		virtual void Close() override;
		virtual bool Input(int) override;
		virtual bool InputMouse(int x, int y, int button, int state) override;
	};

}