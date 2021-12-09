#include <iostream>
#include <SFML/Graphics.hpp>

#include "Window.h"

Window* Window::instance = 0;

int main()
{
    Window* window = window->getInstance();

    while (window->GetWindow()->isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window->GetWindow()->pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window->GetWindow()->close();
        }

        // clear the window with black color
        window->GetWindow()->clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);

        // end the current frame
        window->GetWindow()->display();
    }


	return 0;
}