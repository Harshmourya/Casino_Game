#include<iostream>
#include<ctime>
#include<string>
using namespace std;

void drawline(int n,char symbol){
    for (int i = 0; i < n; i++)
    {
        cout<<symbol;
    }cout<<"\n";    
}

void rules(){
    //system("cls");
    cout<<"\n\n\n\n";
    drawline(136,'~');
    cout<<"\n\n\t\t\tRULES\n\n\n";
    drawline(136,'~');
    cout<<"\t 1) Choose any number b/w 1 to 10 \n\t 2) If you win you will get 10 times of amount \n\t 3) If you bet on wrong number you will \"LOST \" your amount \n";
    drawline(136,'~');
}

int main(){
    //system("cls");
    int amount,playeramount,guess,dice;
    string name;
    char choice;
    drawline(68,'-');
    cout<<"\n\n\n\t\tWELCOMR TO \n\t\t\tCASINO \n\n\n";
    drawline(68,'-');
    cout<<"\n What is your name ";getline(cin,name);
    cout<<"\n How much amount you deposite to play $ ";cin>>amount;

    rules();
    do{
        cout<<"\n\n\t"<<name<<" , ow you have $"<<amount<<" to play \n";

    do
    {
        cout<<"\n\n\t"<<name<<" , Enter money to bet: $ ";cin>>playeramount;
        if(playeramount>amount){
            cout<<name<<", You don't have enough money \n try again ";
        }
    } while (playeramount>amount);
    
    do{
        cout<<"\tChoose any number b/w 1 to 10 ";cin>>guess;
        if(guess>10 || guess <0){
            cout<<"\n Only ,You can choose b/w 1 to 10 \n try again";
        }
    }while(guess<0 || guess> 10);

    dice=rand()%10+1;

    if (dice==guess)
    {
        cout<<"\n\n\t\t !!! Congratulations !!!\n\tYou Win $"<<playeramount*10<<"\n\tDon't be happy that's your luck\n";
        amount += playeramount*10;
    }else{
        cout<<"\n\n\t Better Luck Next Time \n \t\tYou Lost $"<<playeramount<<"\n";
        amount -= playeramount;
    }
    
    cout<<"\n\tThe winning number is "<<dice;
    cout<<" \n\t"<<name<<", now you have $ "<<amount<<"\n";

    if (amount==0){
        cout<<"\n\n\tyou have lost your all amount on cacino bet\n\n";break;
    }
    cout<<"\n\n\n\t\tDo you wanna play again (y/n) ";cin>>choice;
    }while(choice=='y' || choice=='Y');

    cout<<"\n\n\n";
    drawline(136,'=');
    cout<<" \n\n\tThanks to play \n\tThanks to give your many naver come again \n\n";
    drawline(136,'=');

    return 0;
}