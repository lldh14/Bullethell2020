#include "Ball.h"
#include <time.h>

namespace Pong
{
	Ball::Ball(Platform* platform, std::string pathImage, int x, int y, float rot)
	{
		this->x = x;
		this->y = y;
		this->rot = rot;
		this->pathImage = pathImage;
		this->platform = platform;
	}
	void Ball::init()
	{
		image = new Image();
		image->LoadImage(pathImage);
		image->GetTexture();
	}

	void Ball::draw()
	{
		platform->RenderImage(image, x, y, rot);
	}

	void Ball::update(Player* p1, Player* p2)
	{
		int xP1, yP1, wP1, hP1;
		p1->getSizePostion(wP1, hP1, xP1, yP1);

		int xP2, yP2, wP2, hP2;
		p2->getSizePostion(wP2, hP2, xP2, yP2);

		srand(time(NULL));
		if (x >= xP1 && x <= xP1 + wP1 && y <= yP1 + hP1 && y >= yP1)
		{
			dirX *= -1;
			dirY = (rand() % 10) > 5 ? -1 : 1;
		}

		if (x >= xP2 && x < xP2 + wP2 && y <= yP2 + hP2 && y >= yP2)
		{
			dirX *= -1;
			dirY = (rand() % 10) > 5 ? -1 : 1;
		}

		if (y <= 0)
		{
			dirY = 1;
		}
		if (y >= 480)
		{
			dirY = -1;
		}
		x += dirX * 4;
		y += dirY * 4;
		rot += 0.4;
	}
}