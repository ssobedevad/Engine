#include "Panel.h"
#include <iostream>

Panel::Panel(sf::Vector2f position, sf::Vector2f size): Entity(position)
{
    _size = size;
    sf::Texture defaultTexture;
    if(defaultTexture.loadFromFile("/home/dave-sharam/Git/Pirates/Engine/src/Tools/Objects/GUI/UI9x.png"))
    {
        SetTexture(defaultTexture);
        _vertices = sf::VertexArray(sf::PrimitiveType::TriangleStrip, 4);

        _vertices[0].position = {0, 0};
        _vertices[1].position = {0, size.y};
        _vertices[2].position = {size.x, 0};
        _vertices[3].position = size;

        sf::Vector2u textureSize = defaultTexture.getSize();
        _vertices[0].texCoords = {0, 0};
        _vertices[1].texCoords = {0, textureSize.y};
        _vertices[2].texCoords = {textureSize.x, 0};
        _vertices[3].texCoords = {textureSize.x, textureSize.y};
    }
}

Panel::Panel(sf::Vector2f position, sf::Vector2f size, sf::Texture texture): Entity(position, texture)
{
    _size = size;
    SetTexture(texture);
}