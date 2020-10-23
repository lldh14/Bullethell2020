#pragma once
#include "GameState.h"
#include "Platform.h"
#include "GameStateManager.h"
namespace Pong
{
	using namespace GameEngine;
	class Game : public GameState
	{
	public:
		virtual void Init(Platform*, GameStateManager*) override;
		virtual void Draw() override;
		virtual void Update() override;
		virtual void Close() override;
		virtual bool Input(int) override;
		virtual bool InputMouse(int x, int y, int button, int state) override;
	};

}