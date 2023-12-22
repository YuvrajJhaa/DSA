#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int arr[][3], int row, int col, int i, int j, vector<vector<bool> > &visited){
    if(((i>=0 && i < row) && (j>=0 && j < col)) && (visited[i][j] == false) && (arr[i][j] == 1)){
        return true;
    }
    else{
        return false;
    }
}


void solveMaze(int arr[][3], int row, int col, int i, int j,vector<vector<bool> > &visited, vector <string> &path, string output ){
    // Base Case

    if(i == row-1 && j == col-1){
        path.push_back(output);
        return;
    }

    // Down-> i+1, j

    if(isSafe(arr, row, col, i+1, j, visited)){
        visited[i+1][j] = true;
        solveMaze(arr, row, col, i+1, j, visited, path, output + 'D');
        // backtrack
        visited[i+1][j] = false;
    }

    // Left-> i, j-1
    if(isSafe(arr, row, col, i, j-1, visited)){
        visited[i][j-1] = true;
        solveMaze(arr, row, col, i, j-1, visited, path, output + 'L');
        // backtrack
        visited[i][j-1] = false;
    }

    // Right-> i, j+1
    if(isSafe(arr, row, col, i, j+1, visited)){
        visited[i][j+1] = true;
        solveMaze(arr, row, col, i, j+1, visited, path, output + 'R');
        // backtrack
        visited[i][j+1] = false;
    }

    // Up-> i-1, j
    if(isSafe(arr, row, col, i-1, j, visited)){
        visited[i-1][j] = true;
        solveMaze(arr, row, col, i-1, j, visited, path, output + 'U');
        // backtrack
        visited[i-1][j] = false;
    }
}

int main(){
    int arr[3][3] = {
        {1,0,0},
        {1,1,1},
        {1,1,1}
    };

    if(arr[0][0] == 0){
        cout << "No Path Exists" << endl;
        return 0;
    }

    int row = 3;
    int col = 3;

    // Create an visited array 
    vector<vector<bool> > visited (row, vector<bool> (col,false));

    vector <string> path; // Contains all the possible solutions
    string output = " "; // Contains the different solutions to be added in the path vector
    
    solveMaze(arr,row,col,0,0,visited, path, output);

    // Finally Print the array of path

    if(path.size() == 0){
        cout << "No solution exists" << endl;
        return 0;
    }

    for(auto it: path){
        cout << it << " ";
    }


}