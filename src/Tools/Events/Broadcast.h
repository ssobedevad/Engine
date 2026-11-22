#ifndef F187A2A4_2B65_4546_AAD3_E880EC4D21E9
#define F187A2A4_2B65_4546_AAD3_E880EC4D21E9
#include <vector>
#include <functional>

template<typename T>
class Broadcast
{
    public:
        void Call(T data)
        {
            for(size_t i = 0; i < _subscribers.size(); i++)
            {
                if (_subscribers[i] != nullptr)
                {
                    _subscribers[i](data);
                }
                else
                {
                    _subscribers.erase(_subscribers.begin() + i);
                    i--;
                }
            }
        };

        void Subscribe(void* subscriber(T)) 
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

        void Unsubscribe(void* subscriber(T)) 
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
        std::vector<void*(T)> _subscribers;
};


#endif /* F187A2A4_2B65_4546_AAD3_E880EC4D21E9 */
