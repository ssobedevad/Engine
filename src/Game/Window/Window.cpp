#include "Window.h"

bool Window::CreateWindow(sf::Vector2u size)
{
    _window = new sf::RenderWindow(sf::VideoMode(size), "My window");

    return true;
}

bool Window::IsOpen()
{
    if (_window == nullptr){return false;}
    return _window->isOpen();
}


void Window::Update(Transformable* gameTransform)
{
    if (!IsOpen()){return;}
    while (const std::optional event = _window->pollEvent())
    {
        if (event->is<sf::Event::Closed>())
            _window->close();
    }
    gameTransform->Update();
    Draw(gameTransform);
}

void Window::Draw(Transformable* gameTransform)
{
    _window->clear();
    gameTransform->Draw(_window);
    _window->display();
}