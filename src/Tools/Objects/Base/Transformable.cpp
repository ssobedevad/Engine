#include "Transformable.h"

Transformable::Transformable(sf::Vector2f position)
{
    setPosition(position);
}

void Transformable::Draw(sf::RenderWindow* window)
{
    sf::Drawable* drawPtr = dynamic_cast<sf::Drawable*>(this);
    if(drawPtr != nullptr)
    {
        window->draw(*drawPtr);
    }
    for(size_t i = 0; i < _children.size(); i++)
    {
        if(_children[i] == nullptr){continue;}
        _children[i]->Draw(window);
    }
}

void Transformable::SetParent(Transformable* parent)
{
    if(_parent != nullptr){return;}
    _parent = parent;
}

void Transformable::AddChild(Transformable* child)
{
    _children.push_back(child);
    child->SetParent(this);
}