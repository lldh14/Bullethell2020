#pragma once
#include "Enemy.h"
#include "Image.h"


	class Ship : public Enemy
	{
	private:
		GameEngine::Image* image;
		int Tmov;
	};


