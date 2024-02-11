#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class TicTacToe
{
	private:
		char sheet[3][3]={ {' ',' ',' '},{' ',' ',' '},{' ',' ',' '} };
		char player='X';
	public:
		void displaySheet()
		{
			cout<<"--------------"<<endl;
			for(int i=0;i<3;++i){
			cout<<"| ";
			for(int j=0;j<3;++j){
			cout<<sheet[i][j]<<" | ";
		}
			cout<<endl;
			cout<<"--------------"<<endl;
		}
		}
	bool checkAcquire()
	{
		for (int i = 0; i < 3; ++i) {
            if ((sheet[i][0] == player && sheet[i][1] == player && sheet[i][2] == player) ||
                (sheet[0][i] == player && sheet[1][i] == player && sheet[2][i] == player)) {
                return true;
            }
        }

        if ((sheet[0][0] == player && sheet[1][1] == player && sheet[2][2] == player) ||
            (sheet[0][2] == player && sheet[1][1] == player && sheet[2][0] == player)) {
            return true;
        }

        return false;
	}
     bool isSheetFull() 
	 {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (sheet[i][j] == ' ')
                    return false;
            }
        }
        return true;
    }
    void makeMove()
    {
    	int row,col;
    	switch(player)
    	{
    		case 'X':
    			cout<<"Player X please enter your move(row/col):";
    			cin>>row>>col;
    			break;
    		case 'O':
    			cout<<"Player O making a random move:"<<endl;
    			row=rand()%3;
    			col=rand()%3;
    			break;
    		default:
    			if (row < 0 || row >= 3 || col < 0 || col >= 3 || sheet[row][col] != ' ')
				 {
                   cout << "Invalid move. Try again." << endl;
                   makeMove();
                   return;
                }
		}
		sheet[row][col] = player;
	}
	void Start() {
        srand(static_cast<unsigned>(time(0)));

        cout << "Welcome to Tic Tac Toe!" << endl;

        while (true) {
            displaySheet();
            makeMove();

            if (checkAcquire()) {
                displaySheet();
                cout << "Player " << player << " wins!" << endl;
                break;
            }

            if (isSheetFull()) {
                displaySheet();
                cout << "It's a tie!" << endl;
                break;
            }

            player = (player == 'X') ? 'O' : 'X';
        }
    }
};

int main() {
    TicTacToe game;
    game.Start();

    return 0;
}

