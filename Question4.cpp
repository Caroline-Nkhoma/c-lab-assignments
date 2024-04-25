#include <iostream>
#include <string>
using namespace std;
int main()
{
        int number;
        while (true)
        { /*prompts the user to enter values between 5 and 10 */
                cout << "Enter an integer value between 5 and 10" << endl;
                cin >> number;
                /*Denies, if the input is a string*/
                if (cin.fail())
                {
                        cout << "Sorry, you entered an invalid number, please try again" << endl;
                                }
                /*accepts the values between 5 and 10*/
                else if (number >= 5 && number <= 10)
                {
                        cout << "Your input " << number << " has been accepted." << endl;
                        break;
                }
                /*rejets the numbers outside 5 and 10*/
                else
                {
                        cout << "You Entered " << number << ". Please enter a number between 5 and 10. " << endl;
                }
        }
        return 0;
}