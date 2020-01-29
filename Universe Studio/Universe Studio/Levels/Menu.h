#pragma once
#include "Level.h"
#include "../UserInterface/Button.h"

class Menu : public Level {
public:
	// gets called once in the beginning
	virtual void setup();
	// gets called only if there is an ongoing event
	virtual void handleEvents(const sf::Event& event);
	// gets called every frame but is not constant
	virtual void update();
	// gets called every frame but should only draw on window
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
private:
	sf::Vector2f cursor_;

	sf::Texture backgroundTexture_;
	sf::Texture buttonTexture_;
	sf::Font arialFont_;

	Button start_;
	sf::Sprite background_;
};