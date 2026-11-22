#include "Entity.h"
#include <iostream>

void Entity::SetTexture(sf::Texture texture)
{
    _texture = texture;
}

void Entity::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    states.transform *= getTransform();
    states.texture = &_texture;
    target.draw(_vertices, states);
}

Entity::Entity(sf::Vector2f position) : Transformable(position)
{
    
}

Entity::Entity(sf::Vector2f position, sf::Texture texture) : Transformable(position)
{
    SetTexture(texture);
}