#include <SFML/Graphics.hpp>
#include "spaceslib.cpp"

int main(void) {	
	init(800, 600, "pepe");
	setFPS(60);
	
    while (windowOpen()) {
       WINDOW_LIFELOOP();
       
       clear();
       drawText("Hola, SpacesLib!" , 100, 100, 30, default_font);
       display();
    }
    close();
}