#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char elements[][8] = {"B123", "C234", "A345", "c15", "B177", "G3003", "C235", "B179"};
    for (int i = 0; i < sizeof(elements)/sizeof(elements[0]); i++)
    {
        if (elements[i][0] == 'B') {
            cout<<elements[i]<<endl;
        }
        }

            return 0;
        }