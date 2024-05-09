#include <iostream>
void swapNumbers(int *a, int *b);
using namespace std;
int main()
{

    int varA = 25;
    int varB = 100;

    cout << "varA before swap:" << varA << endl; // varA is 25
    cout << "varB before swap:" << varB << endl; // varB is 100

    swapNumbers(&varA, &varB);

    cout << "varA after swap:" << varA << endl;  // varA is 100
    cout << "varB before swap:" << varB << endl; // varB is 25

    return 0;
}
void swapNumbers(int *a, int *b)
{
    int refers = *a;
    *a = *b;
    *b = refers;
}
