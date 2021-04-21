#include <SFML/Graphics.hpp>
#include "Engine.h"


int main(int argc, char* args[])
{
	// Declare and get instance of singleton
	Engine& gameEngine = Engine::GetInstance();

	sf::RenderWindow window(sf::VideoMode(800, 600), "Game - by Gabe");

	// Pass window reference to engine to start
	gameEngine.Start(&window);

	return 0;
}