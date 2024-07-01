/* Rock Paper Scissor game*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char getComputerMove(){
    int move;

    srand(time(NULL));
    move = rand() % 3;

    if (move == 0)
    {
        return 'r';
    }
    else if(move == 1){
        return 'p';
    }
    else{
        return 's';
    }
    
}

int getResult(char player, char computer)
{
    if (player == computer)
    {
        return 0;
    }

    if (player == 'r' && computer == 'p')
    {
        return -1;
    }

    if (player == 'r' && computer == 's')
    {
        return 1;
    }

    if (player == 'p' && computer == 'r')
    {
        return 1;
    }

    if (player == 'p' && computer == 's')
    {
        return -1;
    }
    
    if (player == 's' && computer == 'r')
    {
        return -1;
    }

    if (player == 's' && computer == 'p')
    {
        return 1;
    }

    return 0;

}

int main()
{
    cout<<"choose any of one (r for Rock, p for Paper, s for Scissor)"<<endl;
    cout<<"choose: ";

    char player;
    cin>>player;

    char computer = getComputerMove();

    int result = getResult(player, computer);

    
    if (result == 0)
    {
        cout<<"player choose: "<<player<<endl;
        cout<<"computer choose: "<<computer<<endl;
        cout<<"Draw"<<endl;
    }
    else if (result == 1)
    {
        cout<<"player choose: "<<player<<endl;
        cout<<"computer choose: "<<computer<<endl;
        cout<<"player won"<<endl;
    }
    else if (result == -1){
        cout<<"player choose: "<<player<<endl;
        cout<<"computer choose: "<<computer<<endl;
        cout<<"computer won"<<endl;
    }
    
    return 0;
}