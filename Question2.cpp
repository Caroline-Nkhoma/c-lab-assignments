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
    switch (daysUntilExpiration){
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
            case 1:
                cout << "Your subscription expires within a day!" << endl;
                cout << "Renew now and save 20%! " << endl;
                break;
                case 2: case 3: case 4: case5:
                    cout << "Your subscription expires in 5 days" << endl;
                    cout << "Renew now and save 10%!" << endl;
                    break;
                    case 6: case 7: case 8: case 9: case 10:
                        cout << "Your subsription will expire soon. Renew now!";
                        break;
                        default:
                            cout << "You have an active subscription." << endl;
    }
    return 0;

}