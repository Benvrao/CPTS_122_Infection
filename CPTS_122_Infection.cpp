#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
int main()
{
    sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "My window");

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
          
            if (event->is<sf::Event::Closed>())
                window.close();
        }
    }
}
