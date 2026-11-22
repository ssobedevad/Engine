#ifndef CB95A1BC_62A2_40AB_A49C_5F522826A33D
#define CB95A1BC_62A2_40AB_A49C_5F522826A33D
#include <vector>
#include <functional>


class Event
{
    public:
        void Call()
        {
            for(size_t i = 0; i < _subscribers.size(); i++)
            {
                if (_subscribers[i] != nullptr)
                {
                    _subscribers[i]();
                }
                else
                {
                    _subscribers.erase(_subscribers.begin() + i);
                    i--;
                }
            }
        };

        void Subscribe(void* subscriber())
        {
            for(size_t i = 0; i < _subscribers.size(); i++)
            {
                if (_subscribers[i] != nullptr)
                {
                    if (_subscribers[i] == subscriber)
                    {
                        return;
                    }
                }
                else
                {
                    _subscribers.erase(_subscribers.begin() + i);
                    i--;
                }
            }
            _subscribers.push_back(*subscriber);
        };

        void Unsubscribe(void* subscriber())
        {
            for(size_t i = 0; i < _subscribers.size(); i++)
            {
                if (_subscribers[i] != nullptr)
                {
                    if (_subscribers[i] == subscriber)
                    {
                        _subscribers.erase(_subscribers.begin() + i);
                        i--;
                    }
                }
                else
                {
                    _subscribers.erase(_subscribers.begin() + i);
                    i--;
                }
            }
        };

    private:
        std::vector<void*()> _subscribers;
};


#endif /* CB95A1BC_62A2_40AB_A49C_5F522826A33D */
