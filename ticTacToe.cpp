#include <iostream>
using namespace std;


void displayGrid();
void playerTurn();
bool gamedraw();
void verify();
char gridNumbers[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice, turn = 0,row,column;
string name1,name2;

int main() {

    cout<<"Enter First Player Name :: ";
    getline(cin,name1);

    cout<<"Enter Second Player Name :: ";
    getline(cin,name2);

    while(gamedraw()) {
        
        displayGrid();
        playerTurn();
    
    }
    cout<<endl;
    system("pause");

    return 0;
}

void displayGrid() {

    system("CLS");

    cout<<endl<<"\t\tWELCOME TO TIC TAC TOE BY SAFI\n\n";
    cout<<"\t\t"<<name1<<"[X]\n\t\t"<<name2<<"[O]\n\n";
    cout<<"\t\t     |     |     "<<endl;
    cout<<"\t\t "<<gridNumbers[0][0]<<"   |  "<<gridNumbers[0][1]<<"  |  "<<gridNumbers[0][2]<<"  "<<endl;
    cout<<"\t\t_____|_____|_____"<<endl;
    cout<<"\t\t     |     |     "<<endl;
    cout<<"\t\t "<<gridNumbers[1][0]<<"   |  "<<gridNumbers[1][1]<<"  |  "<<gridNumbers[1][2]<<"  "<<endl;
    cout<<"\t\t_____|_____|_____"<<endl;
    cout<<"\t\t     |     |     "<<endl;
    cout<<"\t\t "<<gridNumbers[2][0]<<"   |  "<<gridNumbers[2][1]<<"  |  "<<gridNumbers[2][2]<<"  "<<endl;
    cout<<"\t\t     |     |     "<<endl;
    cout<<endl;
}

void playerTurn() {
    choice = 0;
    if(turn % 2 == 0) {
        cout<<name1<<"[X] Choice :: ";
        cin>>choice;
    }
    else{
        cout<<name2<<"[O] Choice :: ";
        cin>>choice;
    }


    switch (choice) {
        case 1:
            row = 0; column = 0; break;
        case 2:
            row = 0; column = 1; break;
        case 3:
            row = 0; column = 2; break;
        case 4:
            row = 1; column = 0; break;
        case 5:
            row = 1; column = 1; break;
        case 6:
            row = 1; column = 2; break;
        case 7:
            row = 2; column = 0; break;
        case 8:
            row = 2; column = 1; break;
        case 9:
            row = 2; column = 2; break;
        default:
            cout<<"Invalid Choice"<<endl;
    }

    if(turn % 2 == 0 && gridNumbers[row][column] != 'X' && gridNumbers[row][column] != 'O') {
        gridNumbers[row][column] = 'X';
        turn++;
    }
    else if(turn % 2 !=0 && gridNumbers[row][column] != 'X' && gridNumbers[row][column] != 'O') {
        gridNumbers[row][column] = 'O';
        turn++;
    }
    else {
        cout<<"Try again :: "<<endl;
        playerTurn();
    }
    displayGrid();
}

bool gamedraw() {

    for(int i = 0; i < 3; i++) {
        if (gridNumbers[i][0] == gridNumbers[i][1] && gridNumbers[i][0] == gridNumbers[i][2]) {
            if (turn % 2 == 0) {
                cout<<name2<<" wins.....";
            }
            else {
                cout<<name1<<" wins.....";
            }
            return false;
        }
    }

    for(int j = 0; j < 3; j++) {
        if (gridNumbers[0][j] == gridNumbers[1][j] && gridNumbers[0][j] == gridNumbers[2][j]) {
            verify();
            return false;
        }
    }

    
    if (gridNumbers[0][0] == gridNumbers[1][1] && gridNumbers[0][0] == gridNumbers[2][2]) {
        verify();
        return false;
    }
    if (gridNumbers[0][2] == gridNumbers[1][1] && gridNumbers[0][2] == gridNumbers[2][0]) {
        verify();
        return false;
    }

    if(turn == 9) {
        cout << "Game is DRAWN";
        return false;
    }
    return true;
}

void verify() {
    if (turn % 2 == 0) {
        cout<<name2<<" Wins."<<endl;
        cout<<"Hope You Enjoyed!"<<endl;
        cout<<"Game Developed By Safi.";
        
    }
    else {
        cout<<name1<<" Wins."<<endl;
        cout<<"Hope You Enjoyed!"<<endl;
        cout<<"Game Developed By Safi.";
        
    }
}