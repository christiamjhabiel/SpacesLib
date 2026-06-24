Una libreria de c++ para el Desarrollo orientado a Objetos.

![c++](https://img.shields.io/badge/c++-17-blue)
![sfml](https://img.shields.io/badge/sfml-2.5.0-green)
![very](https://img.shields.io/badge/very-easy-lightgreen)

# Examples

# Hello!, SpacesLib!

```c++
#include <SFML/Graphics.hpp>
#include "spaceslib.cpp"

int main(void) {
  //inciamos ventana
	init(800, 600, "pepe");

  //establecemos framerate
  setFPS(60);

    //ciclo de vida
    while (windowOpen()) {
       //bloque de codigo de vida de ventana

       WINDOW_LIFELOOP();

       //limpiamos ventana
       clear();
       //dibujamos texto
       drawText("Hola!, SpacesLib" , 100, 100, 30, default_font);

       //mostramos
       display();
    }
    //cerramos ventana
    close();
}
```

Resultado Esperado:
