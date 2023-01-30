#include <iostream>

using namespace std;

class area_call
{
   public:
   int find_square(int a)
   {
      return a*a;
   }
};

class std_call:public area_call
{
   public:
      int add(int a, int b)
      {
         return a + b;
      }
      int sub(int a, int b)
      {
         return a - b;
      }
      int muli(int a, int b)
      {
         return a * b;
      }
      int div(int a, int b)
      {
         return a / b;
      }
};

      int main()
      {
             std_call dem;

            printf("Addition is %d\n", dem.add(7,9));
            printf("Subtration is %d\n", dem.sub(7,9));
            printf("muliplication is %d\n", dem.muli(7,9));
            printf("division is %d\n", dem.div(7,9));
            printf("Area of square is %d\n", dem.find_square(9));

      }