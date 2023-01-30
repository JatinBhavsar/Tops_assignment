#include <iostream>

using namespace std;

class person
{               
    public: 
        char name[15] = "default name";

    private:
        long long int mobile = 789456123;

    protected:
        int pin = 9487;

    public:
       void get_details()
       {
         cout << "public details: " << name << endl;

          cout << "private details: " << mobile << endl;

          cout << "protect details: " << pin;
       }

};

int main()
{
    // object of person

    person p;

    p.get_details();

    return 0;
}