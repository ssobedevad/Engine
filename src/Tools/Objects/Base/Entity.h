#ifndef EE7F5A1B_5AD1_4263_A18E_DD23B6D2C2AB
#define EE7F5A1B_5AD1_4263_A18E_DD23B6D2C2AB
#include <SFML/OpenGL.hpp>
#include <SFML/Graphics.hpp>
#include "Transformable.h"

class Entity : public sf::Drawable, public Transformable
{
    public:
        Entity(sf::Vector2f position);
        Entity(sf::Vector2f position, sf::Texture texture);
        void Update() {};
        void SetTexture(sf::Texture texture);
    private:
        void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
        sf::Texture     _texture;
    protected:
        sf::VertexArray _vertices;
};


#endif /* EE7F5A1B_5AD1_4263_A18E_DD23B6D2C2AB */
