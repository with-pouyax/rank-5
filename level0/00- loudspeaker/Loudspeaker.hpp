#ifndef LOUDSPEAKER_HPP
#define LOUDSPEAKER_HPP


#include <string>


class Loudspeaker {
    public:
        Loudspeaker(std::string phrase);
        ~Loudspeaker();


        void shout() const;
        static int getInstanceCount();
    
    private:
        static int      instanceCount;
        std::string     phrase;
    
};



#endif