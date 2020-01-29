#pragma once
#include "Level.h"

class Presentation : public Level {
public:
	enum RESPONSES {
		RESPONSES_MENU
	};

	// gets called once in the beginning
	virtual void setup();
	// gets called only if there is an ongoing event
	virtual void handleEvents(const sf::Event& event);
	// gets called every frame but is not constant
	virtual void update();
	// gets called every frame but should only draw on window
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

private:
	sf::Texture currentTexture_;
	sf::Sprite currentSprite_;

	const float fps = 24.0F; // frames per second for video
	float elapsedTime = 0.0F;
};