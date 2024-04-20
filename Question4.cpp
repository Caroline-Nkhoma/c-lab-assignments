#include <iostream>
#include <string>
using namespace std;
int main()
{
        int number;
        while (true)
        {
                cout << "Enter an integer value between 5 and 10" << endl;
                cin >> number;

                if (cin.fail())
                {
                        cout << "Sorry, you entered an invalid number, please try again" << endl;
                        break;
                }
                else if (number >= 5 && number <= 10)
                {
                        cout << "Your input (" << number << ") has been accepted." << endl;
                        break;
                }

                else
                {
                        cout << "You Entered " << number << ". Please enter a number between 5 and 10. " << endl;

                        break;
                }
        }
        return 0;
}