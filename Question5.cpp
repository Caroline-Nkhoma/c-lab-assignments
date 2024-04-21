#include <iostream>
using namespace std;
int main(){
              while(true){
             int select;
                 cout<< "Please select the area of shape to calculate" << endl;
                 cout << "1. Square" << endl;
                 cout << "2. Rectangle" << endl;
                 cout << "3. Triangle" << endl;
                 cout << "4. Quit program" << endl<<endl;
                 cout<<"Enter selection: ";
                 cin>>select;
    
                  switch(select){
                      case 1:
                     {
                    double side;
                    cout << "Enter the side of the square" << endl;
                    cin >> side;
                    cout << "The area of the squire is: " << side * side << endl;
                         break;
                      }
                      case 2:
                     {
                    double length, width;
                    cout << "Enter the length and width of the rectangle" << endl;
                    cin >> length >> width;
                    cout << "The area of the rectangle is: " << length * width << endl;
                         break;
                      }
                       case 3:
                      {
                    double base, height;
                    cout << "Enter the base and the height" << endl;
                    cin >> base >> height; 
                    cout << "The area of the triangle is: " << 0.5 * (base * height) << endl;
                    break;
                    }
                  
                    default:
                    {
                        cout<<"quit program"<<endl;
                    }
                  return 0;
                    }
              } 
}



