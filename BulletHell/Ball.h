#pragma once
#include"Image.h"
#include <string>
#include"Player.h"
#include"Platform.h"
namespace Pong
{
	class Ball
	{
	private:
		Image* image;
		int x{ 0 };
		int y{ 0 };
		int dirX{ -1 };
		int dirY{ 0 };
		float rot{ 0 };
		std::string pathImage;
		Platform* platform;
	public:
		Ball(Platform* platform, std::string pathImage, int x, int y, float rot);
		void init();
		void draw();
		void update(Player* p1, Player* p2);
	};

}