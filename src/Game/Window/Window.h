#ifndef C214C07F_80D8_4DAE_987B_ACEB70EFB0BE
#define C214C07F_80D8_4DAE_987B_ACEB70EFB0BE
#include <SFML/OpenGL.hpp>
#include <SFML/Graphics.hpp>
#include <vector>
#include <Transformable.h>
#include <Entity.h>

class Window 
{
    public:
        bool CreateWindow(sf::Vector2u size);

        bool IsOpen();
        void Update(Transformable* gameTransform);
    private:
        void Draw(Transformable* gameTransform);
        sf::RenderWindow*           _window;
};


#endif /* C214C07F_80D8_4DAE_987B_ACEB70EFB0BE */
