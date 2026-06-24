#include <SFML/Graphics.hpp>
#include <iostream>

#include "./spaceslib.hpp"

sf::RenderWindow* window = nullptr;
sf::Event event;

sf::Font default_font;

void init(int x, int y, std::string title){
	window = new sf::RenderWindow(sf::VideoMode(x, y), title);
	default_font.loadFromFile("default_font.ttf");
}

void close(){
	delete window;
}

void setFPS(int n){
	window->setFramerateLimit(n);
}

bool windowOpen(){
	return window->isOpen();
}

void WINDOW_LIFELOOP(){
	while (window->pollEvent(event)) {
           if (event.type == sf::Event::Closed)
                window->close();
        }
}

void clear(){
	window->clear();
}

void display(){
	window->display();
}

void drawRect(int x, int y, int w, int h){
	sf::RectangleShape rect(sf::Vector2f(w, h));
	rect.setPosition(sf::Vector2f(x, y));
	rect.setFillColor(sf::Color::Red);
	
	window->draw(rect);
}

void drawText(std::string txt, int x, int y, int csize, sf::Font font){
	sf::Text text;
	text.setString(txt);
	text.setFont(font);
	text.setPosition(sf::Vector2f(x, y));
	text.setCharacterSize(csize);
	text.setFillColor(sf::Color::White);
	
	window->draw(text);
}

void Rect::draw(){
		drawRect(x, y, w, h);
}
