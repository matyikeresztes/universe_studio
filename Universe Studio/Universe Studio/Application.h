#pragma once
#include "SFML/Graphics.hpp"

// Levels
#include "Levels/Level.h"
#include "Levels/Menu.h"

class Application {
public:
	int run();

	static sf::RenderWindow window;
	static sf::View view;
private:
	Level* currentLevel_;
};