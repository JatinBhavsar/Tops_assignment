#include <iostream>
using namespace std;

int main()
{
    char o;
    float num1, num2;
    
    again:
    cout << "Choice a operator : +, -, *, /: ";
    cin >> o;

    cout << "Enter a value: ";
    cin >> num1 >> num2;

   switch(o)
   {
    case '+':
      cout << num1 << "+" << num2 << "=" << num1 + num2;
      break;

    case '-':
     cout << num1 << "-" << num2 << "=" << num1 - num2;
     break;

    case '*':
     cout << num1 << "*" << num2 << "=" << num1 * num2;
     break;

    case '/':
     cout << num1 << "/" << num2 << "=" << num1 / num2;
     break;

     default:
			cout <<("INVILID INPUT!!");
   }

    cout << ("\n Do you want to performe another operation ? (y/n)");
		 fflush(stdin);
     cin >> ("%c",&o);
     
     if(o == 'y')
     {
      goto again;
     }

     cout <<("THANKYOU");
  
}