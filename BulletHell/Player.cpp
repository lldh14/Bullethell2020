#include "Player.h"

namespace Pong
{
	Player::Player(Platform* platform, std::string pathImage, int x, int y, float rot)
	{
		this->x = x;
		this->y = y;
		this->rot = rot;
		this->pathImage = pathImage;
		this->platform = platform;
	}
	void Player::init()
	{
		image = new Image();
		image->LoadImage(pathImage);
		image->GetTexture();
		w = image->GetWidth();
		h = image->GetHeight();
	}

	void Player::draw()
	{
		platform->RenderImage(image, x, y, rot);
	}

	void Player::getSizePostion(int& w, int& h, int& x, int& y)
	{
		w = this->w;
		h = this->h;
		x = this->x;
		y = this->y;
	}

	void Player::input(int key, int up, int down)
	{
		if (key == up || key == up - 32)
		{
			y -= 3;
		}
		else if (key == down || key == down - 32)
		{
			y += 3;
		}
	}
}