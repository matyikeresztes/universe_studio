#include "Application.h"

sf::RenderWindow Application::window{ sf::VideoMode(1366, 768), "Universe Studio" };
sf::View Application::view{ sf::FloatRect{0, 0, 1920, 1080} };

int Application::run()
{
    // main level
    currentLevel_ = new Menu;
    currentLevel_->setup();

    window.setView(view);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            currentLevel_->handleEvents(event);

            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        
        currentLevel_->update();
        window.draw(*currentLevel_);

        window.display();
    }

    return 0;
}
