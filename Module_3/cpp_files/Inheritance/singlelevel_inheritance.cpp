// transmission of data member from one class to another class is called inheritance

#include <iostream>
using namespace std;

// base class
class person
{
    public:
        int id;
        char name[10];
};
// child class
class personone: public person
{
    public:
        int mobile = 4514586;
};

int main()
{
    // creating an object of child class
    personone p;
    p.id = 5;
    char name[10] = "parth";
    for (int i = 0; i < 10; i++)
    {
        p.name[i] = name[i];
    }

    printf("%d - %s\n", p.id, p.name);

    cout << p.mobile;
};
