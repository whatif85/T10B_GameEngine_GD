#include "Engine.h"

void Engine::Start(sf::RenderWindow* win)
{
	bQuit = false;
	window = win;

	while (window->isOpen() == true)
	{
		Update();
	}
}

Engine::Engine(void) = default;

Engine::~Engine(void) = default;

void Engine::Update()
{
	sf::Event _event;

	while (window->pollEvent(_event) == true)
	{
		if (_event.type == sf::Event::Closed)
		{
			window->close();
		}
	}
}
