#include "Game.h"

Game::Game()
{
    _window = new Window();
    _inputHandler = new InputHandler();
    _gameTransform = new Transformable(sf::Vector2f(0,0));
}

Game::~Game()
{
    delete _window;
    delete _inputHandler;
    delete _gameTransform;
}

void Game::Begin(sf::Vector2u size)
{
    running = true;
    _window->CreateWindow(size);
}

void Game::Update()
{
    if(!_window->IsOpen()){running = false; return;}
    _window->Update(_gameTransform);
    _inputHandler->Update();
}
