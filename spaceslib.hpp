#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

extern sf::RenderWindow* window;
extern sf::Event event;

void init(int x, int y, std::string title);
void close();
void setFPS(int n);
bool windowOpen();
void WINDOW_LIFELOOP();
void clear();
void display();
void drawRect(int x, int y, int w, int h);
void drawText(std::string txt, int x, int y, int csize, sf::Font font);

struct Rect {
	int x, y, w, h;
	
	void draw();
};
