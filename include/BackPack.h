#ifndef BACKPACK_H
#define BACKPACK_H

using namespace std;

class BackPack
{
    public:
        BackPack();
        BackPack(char a);

        virtual ~BackPack();
        BackPack(const BackPack& other);

        char letter;

    protected:

    private:
};

#endif // BACKPACK_H
