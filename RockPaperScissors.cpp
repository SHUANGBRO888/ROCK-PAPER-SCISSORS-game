#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);
int computerScore = 0;
int playerScore = 0;

int main(){
    char player;
    char computer;
    char flag;

    while (flag!='q')
    {
        std::cout<< "This is the Rock Paper Scissors Game.";
        player = getUserChoice();
        std::cout<< "You choice: ";
        showChoice(player);
        std::cout<< "Computer choice: "; 
        computer = getComputerChoice();
        showChoice(computer);
        chooseWinner(player,computer);
        std::cout<< "Do you wanna still play the game or quit?(Enter 'q' to quit, continue please enter any bottom.)"; 
        std::cin >> flag; 
    }
    std::cout<< "Your scores is "<< playerScore << std::endl;
    std::cout<< "Computer scores is "<< computerScore << std::endl;
    if(playerScore == computerScore){
        std::cout << "It's a tie.\n";
    }
    else if (playerScore < computerScore){
        std::cout << "You Loss.\n";} 
    else{
        std::cout << "You Win!\n";} 
    return 0; 
    }  
    
    
    
char getUserChoice(){
    char player;

    do{
        std::cout << "Input your choice.\n";
        std::cout << "------------------\n";
        std::cout << "'r' for rock.\n";
        std::cout << "'p' for paper.\n";
        std::cout << "'s' for scissors.\n";
        std::cin >> player;  
    } while (player != 'r' && player != 'p' && player != 's');
    
    
    return player;
}


char getComputerChoice(){
    srand(time(0));
    int num = rand()%3 +1;

    switch (num)
    {
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
    }
}

void showChoice(char choice){
    switch (choice)
    {
    case 's': std::cout <<"Scissors\n";
        break;
    case 'p': std::cout <<"Paper\n";
        break;
    case 'r': std::cout <<"Rock\n";
        break;
    }
}
void chooseWinner(char player, char computer){
    switch (player)
    {
    case 'r': if(computer=='r'){
                std::cout << "It's a tie.\n";
                }
                else if(computer=='p'){
                std::cout << "You loss.\n";
                computerScore ++;
                } else{
                std::cout << "You win!\n";
                playerScore ++;     
                }
                break;
    case 'p': if(computer=='p'){
                std::cout << "It's a tie.\n";
                }
                else if(computer=='s'){
                std::cout << "You loss.\n";
                computerScore ++;
                } else{
                std::cout << "You win!\n";
                playerScore ++;    
                }
                break;
    case 's': if(computer=='s'){
                std::cout << "It's a tie.\n";
                }
                else if(computer=='r'){
                std::cout << "You loss.\n";
                computerScore ++;
                } else{
                std::cout << "You win!\n"; 
                playerScore ++;       
                }
                break;    
    }
}


