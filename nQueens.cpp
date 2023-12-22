#include <iostream>
#include <vector>
using namespace std;

void printSolution(vector<vector<char >> &board, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool isSafe(int n, int row, int col, vector<vector<char >> &board){
    int i = row;
    int j = col;

    // row check
    while(j>=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
    }

    // upperLeftDiagonal Check

    i = row;
    j = col;

    while(i>=0 && j>=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i--;
        j--;
    }

    // lowerLeftDiagonal Check
    i = row;
    j = col;

    while(i < n && j>=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i++;
        j--;
    }

    // Koi return nahi kar paaya
    // Yaani ke Queen waha rakkh sakte hai
    return true;

}

void solve(int n, int col, vector<vector<char >> &board){

    // base case
    if(col >= n){
        printSolution(board,n);
        return;
    }

    // Ek case solve karo baaki recursion karega
    for(int row=0; row<n;row++){
        if(isSafe(n,row,col,board)){
            // rakh do
            board[row][col] = 'Q';
            // next col ke liye solve karo agar ye col me Queen baith jaaye tab
            solve(n,col+1, board);
            // nahi baith paa rahi toh jagah change karo by backtracking
            board[row][col] = '-';
 
        }
       
    }
}
 
int main(){
    int n = 4;
    vector<vector<char >> board(n, vector<char> (n,'-'));
    int col = 0;
    // solve 0th row and 
    solve(n,col,board);
}