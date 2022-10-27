/*GUESSING GAME...........................
........................................GUESS THE SECRET NUMBER............................
#include <iostream>
using namespace std;
int main()
{
    int secretNum=8;
    int guessNum;
    int guessCount=0;
    int guessLimit=4;
    bool outOfChances=false;
    do{   if(guessCount<guessLimit)
        {
        cout<<"Enter your guess"<<endl;
        cin>>guessNum;
        guessCount++;
        }
        else{
            outOfChances=true;
        }
    }while(secretNum!=guessNum&&!outOfChances);
    if(outOfChances)
    {
        cout<<"You lost"<<endl;
    } else
    {cout<<"You Won"<<endl;}
    return 0;
}*/

 /* ..........................................................................MENUE FOR THE GAME............................
 #include <iostream>
using namespace std;
int main()
{
    int choice;
    do{
            cout<<"0.End Game\n1.Play Game"<<endl;
            cout<<"enter you choice"<<endl;
            cin>>choice;
            switch(choice)
    {
    case 0:
        cout<<"Hope you play next time"<<endl;
        break;
    case 1:
        cout<<"let's continue the game"<<endl;
        }while(choice!=0);
    return 0;
}
}
*/

// ............................................................complete guess game setup.......................................

#include <iostream>
using namespace std;
int main()
{

    int choice;

    do{
            cout<<"0.End Game\n1.Play Game"<<endl;
            cout<<"enter you choice"<<endl;
            cin>>choice;
            switch(choice)
    {
    case 0:
        cout<<"Hope you play next time"<<endl;
        break;
    case 1:
        cout<<"let's continue the game"<<endl;

    int secretNum=9;
    int guessNum;
    int guessCount=0;
    int guessLimit=2;
    bool outOfChances=false;

    do{   if(guessCount<guessLimit)
        {
        cout<<"Enter your guess"<<endl;
        cin>>guessNum;
        guessCount++;
        }
        else{
            outOfChances=true;
        }

    }while(secretNum!=guessNum&&!outOfChances);
    if(outOfChances)
    {
        cout<<"You lost"<<endl;
    } else
    {cout<<"You Won"<<endl;}
        break;
    }

    }while(choice!=0);

    return 0;
}
