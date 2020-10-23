#pragma once
#include "Ball.h"
class Reductor
{
private:
		int size;
		int posx;
		int posy;
		float Dtime;
public:
	Reductor(int size, int posx, int posy, float Dtime);
	~Reductor();
	void Update();
	void Draw();
	void Reducir(Pong::Ball* ball);


};

