#include "Menu.h"
#include "../Application.h"

void Menu::setup()
{
	// Texture Loading
	backgroundTexture_.loadFromFile("assets/background.jpg");
	buttonTexture_.loadFromFile("assets/button.png");
	arialFont_.loadFromFile("assets/arial.ttf");

	// set start button properties
	start_.setFont(arialFont_);
	start_.setTexture(buttonTexture_);
	start_.setPosition({ Application::view.getSize().x / 2 - start_.getGlobalBounds().width / 2 ,
		Application::view.getSize().y / 2 - start_.getGlobalBounds().height / 2 });
	start_.setString("Start Simulation");
	start_.setFillColor(sf::Color::Blue);

	// set background properties
	background_.setTexture(backgroundTexture_);
}

void Menu::handleEvents(const sf::Event& event)
{
	cursor_ = Application::window.mapPixelToCoords(
		sf::Mouse::getPosition(Application::window));

	start_.handleEvents(event, cursor_ );
}

void Menu::update()
{

}

void Menu::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(background_);
	target.draw(start_);
}
