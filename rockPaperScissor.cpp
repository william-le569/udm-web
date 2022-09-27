#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

int main(){



    int user ; 
    int cpu ; 
    int rmk = 0 ;

    while(!rmk)
    {

    rmk = 1 ; 

    cout<<"\n     ROCK PAPAER AND SCISSOR SHOOT !"<<endl;
    cout<<"     The game begin !"<<endl ;
    cout<<"--------------------------------"<<endl;
    cout<<"Overall Guide"<<endl;
    cout<<"1>Rock"<<endl ;
    cout<<"2>Scissor"<<endl ;
    cout<<"3>Paper"<<endl ;

    cin>>user ;

    if(user==1){
        cout<<"You Shoot A Rock"<<endl ; 
    }
    else if(user==2){
        cout<<"You Shoot A Scissor"<<endl ;

    }
    else{
        cout<<"You Shoot A Paper"<<endl ;
    }
    
    srand(time(0));
    cpu = rand()%3+1 ; 

    if(cpu==1){
        cout<<"CPU Shoot A Rock"<<endl ; 
    }
    else if(cpu==2){
        cout<<"CPU Shoot A Scissor"<<endl ;

    }
    else{
        cout<<"CPU Shoot A Paper"<<endl ;
    }

    // Judgement

    if(user==cpu){
        cout<<"It's a Tie !"<<endl;
    }
    else{
        if(user == 1){
            if(cpu == 2){
                cout<<"You win !"<<endl;
            }
            else if(cpu == 3){
                cout<<"You lose !"<<endl;
            }
        }
        if(user == 2){
            if(cpu == 3){
                cout<<"You win !"<<endl;
            }
            else if(cpu == 1){
                cout<<"You lose !"<<endl;
            }
        }
        if(user == 3){
            if(cpu == 1){
                cout<<"You win !"<<endl;
            }
            else if(cpu == 2){
                cout<<"You lose !"<<endl;
            }
        }
    }

     // End Judgement

    // Remake Ask --

    cout<<"Do you wanna play a gain ?"<<endl;
    cout<<"0 > Play Again"<<endl ; 
    cout<<"1 > Stop Play"<<endl ; 
    cin>>rmk ; 
    }

}