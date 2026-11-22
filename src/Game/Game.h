#ifndef C4F72438_8AF4_4C9D_9843_461A07614258
#define C4F72438_8AF4_4C9D_9843_461A07614258
#include <SFML/OpenGL.hpp>
#include <SFML/Graphics.hpp>
#include <Window.h>
#include <InputHandler.h>
#include <Transformable.h>

class Game 
{
    public:
        Game();
        ~Game();

        void Begin(sf::Vector2u size);
        void Update();

        bool running;
    protected:
        Window*         _window;
        InputHandler*   _inputHandler;
        Transformable*  _gameTransform;
};


#endif /* C4F72438_8AF4_4C9D_9843_461A07614258 */
