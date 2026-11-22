#ifndef BA86A98B_B41D_42C5_AE8C_A1F1D92699B4
#define BA86A98B_B41D_42C5_AE8C_A1F1D92699B4
#include <SFML/OpenGL.hpp>
#include <SFML/Graphics.hpp>


class Transformable : public sf::Transformable
{
    public:
        Transformable(sf::Vector2f position);
        Transformable(sf::Transform transform);

        void Update(){};
        void Draw(sf::RenderWindow* window);

        void SetParent(Transformable* parent);
        void AddChild(Transformable* child);
    protected:
        Transformable*              _parent;
        std::vector<Transformable*> _children;
};


#endif /* BA86A98B_B41D_42C5_AE8C_A1F1D92699B4 */
