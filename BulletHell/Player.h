#pragma once
#include"Image.h"
#include <string>
#include"Platform.h"
namespace Pong
{
	using namespace GameEngine;
	class Player
	{
	private:
		Image* image;
		int x{ 0 };
		int y{ 0 };
		int w{ 0 };
		int h{ 0 };
		float rot{ 0 };
		std::string pathImage;
		Platform* platform;
	public:
		Player(Platform* platform, std::string pathImage, int x, int y, float rot);
		void init();
		void draw();
		void input(int key, int up, int down);
		void getSizePostion(int& w, int& h, int& x, int& y);
	};

}