#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
 int daysUntilExpiration = time(0);
    srand(time(0));
    daysUntilExpiration = 0 + rand() % 11;
    cout << daysUntilExpiration << endl;
if (daysUntilExpiration == 0){
    cout << "Your subscription has expired. " << endl;
   
    }
    else if (daysUntilExpiration == 1)
    {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%! " << endl;
    }
    else if (daysUntilExpiration <= 5)
    {
        cout<<"Your subscription expires in 5 days"<<endl;
        cout<<"Renew now and save 10%!"<<endl;
    }

    else if (daysUntilExpiration <= 10)
    {
    cout << "Your subsription will expire soon. Renew now!";
    }
else
    {
        cout << "You have an active subscription." << endl;
    }
 return 0;
}

