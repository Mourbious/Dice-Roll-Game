#include <bits/stdc++.h>
using namespace std;
void rules();
int main()
{
    string Name;
    long balance;
    long betting_Amount;
    int guess;
    int dice;
    char choice;
    cout << "\n\t\t************************************************\n\n";
    cout << "\n\t\t******* WELCOME TO THE GAME OF DICE ROLL *******\n\n";
    cout << "\n\t\t************************************************\n\n";
    cout << "\n\nWhat's your Name : ";
    cin>>Name;
    cout << "\n\nEnter the starting balance to play game : ";
    cin >> balance;
    do
    {
        system("cls");
        rules();
        cout << "\n\nYour current balance is  " << balance << "\n";
        do
        {
            cout << "Hey, " <<Name<<", enter amount to bet : ";
            cin >> betting_Amount;
            if(betting_Amount > balance)
                cout << "Betting balance can't be more than current balance!\n"
                       <<"\nRe-enter balance\n ";
        }while(betting_Amount > balance);
        do
        {
            cout << "Guess any betting number of dice between 1 & 6 :";
            cin >> guess;
            if(guess <= 0 || guess > 6)
                cout << "\nNumber should be between 1 to 6\n"
                    <<"Re-enter number:\n ";
        }while(guess <= 0 || guess > 6);
        dice = rand()%6 + 1;
        if(dice == guess)
        {
            cout << "\n\nYou are in luck!! You have won Rs." << betting_Amount * 2;
            balance = balance + betting_Amount * 2;
        }
        else
        {
            cout << "Oops, better luck next time !!!! You lost "<< betting_Amount <<"\n";
            balance = balance - betting_Amount;
        }
        cout << "\nThe Number rolled out was : " << dice <<"\n";
        cout << "\n"<<Name<<", You have balance of  " << balance << "\n";
        if(balance == 0)
        {
            cout << "You do not have enough money to play ";
            break;
        }
        cout << "\n\n-->Do you want to play again (Y/N)? ";
        cin >> choice;
    }while(choice =='Y'|| choice=='y');
    cout << "\n\n\n";
    cout << "\n\nThanks for playing the game. Your balance is " << balance << "\n\n";
    return 0;
}
void rules()
{
    system("cls");
    cout << "\n\t\t************************************************\n";
    cout << "\n\t\t********** GAME OF DICE RULES !!!! **********\n";
    cout << "\n\t\t************************************************\n\n\n";
    cout << "\t1. Choose a number between 1 to 6\n";
    cout << "\t2. Winner gets 2 times of the money bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
    
}
