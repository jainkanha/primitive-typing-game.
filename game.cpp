#include<bits/stdc++.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

using namespace std;
int random(char *q)
{
    int max=25;
    int size;
    char letter[]="abcdefghijklmnopqrstuvwxyz";
    int n,i;
    srand(time(0));
    size=3+(rand()%5);
    for(i=0;i<size;i++)
    {
        
        q[i]=letter[rand()%max];
    }
    q[i]='\0';
    return size;
} 
void Color(int color)
{
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
        
        
int main()
{
    char q[10],a[10];
    int size;
    int score=0;
    char letter[]="abcdefghijklmnopqrstuvwxyz";
    system("cls");
    int i,count,j=1;
    cout<<"                         Welcome to the primitive typing game.\n";
    cout<<"Rules:\n->a random array of letters is generated.\n->You have to type the same as fast as you can.\n->you get 10 points for each correctly typed word.\n";
    cout<<"\n                                PRESS ANY KEY TO PLAY";
    getch();
    system("cls");
    while (1)
    {
        size=random(q);
        Color(4);
        cout<<q<<"\n";
        clock_t start=clock();
        cin>>a;
        clock_t end=clock();
        if(((end-start)/CLOCKS_PER_SEC)>=size)
        {
            Color(7);
            cout<<"Time's Out\nBetter luck next time.";
            cout<<"\n Your total score is "<<score<<":)";
            cout<<"\n PRESS ANY KEY TO EXIT.";
            break;    
        }
        else
        {
            if (strcmp(a,q)!=0)
            {
                Color(7);
                cout<<"Oops.. You commited a mistake.\n";
                cout<<"\n Your total score is "<<score<<" :)";
                cout<<"\n PRESS ANY KEY TO EXIT.";
                break;
            }
            else
            {
                system("cls");
                score+=10;
                Color(2);
                cout<<q;
                for(i=0;i<20;i++)
                    cout<<" ";
                Color(7);
                cout<<"SCORE = "<<score;

            }
            
        }
        Sleep(200);
        system("cls");
        
        
        

    }
    getch();
    Color(7);
    return 0;
}   
