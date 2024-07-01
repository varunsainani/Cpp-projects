/* Number Guessing Game*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
    int hostUserNum, guestUserNum;
    cout << "Host: ";
    cin >> hostUserNum;
    system("clear");
    cout<<"you have 3 attempts "<<endl;
    

    int i=1;
    do
    {
        cout << "Guest: ";
        cin >> guestUserNum;
        i++;
        
    }while (hostUserNum != guestUserNum && i <= 3);

    if (hostUserNum == guestUserNum)
    {
        cout<<"correct !"<<endl;
    }
    else{
        cout<<"failed!"<<endl;
    }
    
    return 0;
}