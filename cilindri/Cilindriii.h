#pragma once
#include"Circular.h"
#include"Rectangle.h"
class Cilindriii : public Rectangle, public Circular 
{
public:
	Cilindriii();
	Cilindriii(int hight, int width, int radius);
};

