#include <iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout<<"How are you doing ?"<<endl;
   /** for(int i=0;i<10;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    int n=20;
    int j=0;
    for(int i=0;i<n/2;i++)
    {   j++;
        for(int k=0;k<n;k++)
        {   if(k<=(n/2)-j||k>=(n/2)+j)
                cout<<" ";
            else if(k>(n/2)-j&&k<(n/2)+j){
                cout<<"*";

            }

        } cout<<endl;
    }

    string name;
    //cout<<"enter your name:";
   // cin>>name;
   // cout<<"Hello "<<name<<" Welcome to Cpp Programming"<<endl;
    cout<<"size of int is "<<sizeof (int)<<"bytes"<<endl;
    for(int i=0;i<10;i++){
        cout<<"Hello Milan Davis "<<i<<endl;
    }

    srand(time(0));

    int guess,Number;

    guess=rand()%10+1;

    do{
        cout<<"Enter Number:";
        cin>>Number;
        if(guess>Number)
            cout<<"Too low!\n";
        else if(guess<Number)
            cout<<"too high\n";
        else
            cout<<"You guessed it right!\n";
    }while(guess!=Number);


**/

    return 0;

}
