#ifndef A4F34B3E_8FFA_4DD1_B143_025A45DF45D9
#define A4F34B3E_8FFA_4DD1_B143_025A45DF45D9
#include <SFML/OpenGL.hpp>
#include <SFML/Graphics.hpp>
#include <Entity.h>

class Panel : public Entity
{
    public:
        Panel(sf::Vector2f position, sf::Vector2f size);
        Panel(sf::Vector2f position, sf::Vector2f size, sf::Texture texture);

    private:
        sf::Vector2f _size;
};


#endif /* A4F34B3E_8FFA_4DD1_B143_025A45DF45D9 */
