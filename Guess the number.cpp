#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, numrand;
    string name;
    char yn;
    srand(time(NULL));

    cout << "What's your name ";
    cin >> name;

    while (true)
    {
        cout << "Hello " << name << ", Do u want to play a game (y/n): ";
        cin >> yn;
        if (yn == 'n' || yn == 'N')
            return 0;
        if (yn == 'y' || yn == 'Y')
        break;
    }

    while (true)
    {
        cout << "computer will imagine a number from 0 to 6 and you have to guess it: " << endl;

        cin >> num;
        int x = num;
       if(x>-2 && x<7){
        numrand = (rand() % 7);

        if (numrand == num)
        {
            cout << "you Win!"<< endl;
        }
        else if (num == -1)
        {
            break;
        }
        else
        {
            cout << " you loose! computer guessed "<< numrand << "." << endl;
        }
    }else 
    cout<<"you entered wrong number! please select between 0 to 10"<<endl;
    }
    system("pause");
    return 0;
}