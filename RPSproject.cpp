#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice (char choice);
void chooseWinner(char player,char computer);

int main(){
char player;
char computer;

    player = getUserChoice();
        std::cout << "Sua escolha: ";
        showChoice(player);

    computer = getComputerChoice();
        std::cout << "Computer's choice : ";
        showChoice(computer);

chooseWinner(player, computer);

return 0;
}

char getUserChoice(){
    char player;
        std::cout << "Pedra, papel ou tesoura!\n";

    do{
        std::cout << "Escolha uma das alternativas:\n";
        std::cout << "************************\n";
        std::cout << "'R' para pedra\n";
        std::cout << "'P' para papel\n";
        std::cout << "'T' para tesoura\n";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 't');

    return player;

    std::cout << player;
return 0;
}

char getComputerChoice(){
    srand(time(NULL));

    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 't';
    }

return 0;
}
void showChoice (char choice){
    switch(choice){
        case 'r': std::cout << "Pedra\n";
                    break;
        case 'p': std::cout << "Papel\n";
                    break;
        case 't': std::cout << "Tesoura\n";
                    break;                            
    }

}
void chooseWinner(char player,char computer){
    switch(player){
        case 'r':   if(computer == 'r'){
                    std::cout << "Empate\n";
                    }
                    else if(computer == 'p'){
                    std::cout << "Derrota\n";
                    }
                    else{
                    std::cout << "Vitoria!\n";
                    }
                    break;
        case 'p':   if(computer == 'r'){
                    std::cout << "Vitoria!\n";
                    }
                    else if(computer == 'p'){
                    std::cout << "Empate\n";
                    }
                    else{
                    std::cout << "Derrota!\n";
                    }
                    break;
        case 't':   if(computer == 'r'){
                    std::cout << "Derrota\n";
                    }
                    else if(computer == 'p'){
                    std::cout << "Vitoria!\n";
                    }
                    else{
                    std::cout << "Empate\n";
                    }
                    break;
                    
        }
    }
