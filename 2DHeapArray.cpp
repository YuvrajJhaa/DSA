#include<iostream>
using namespace std;

int main() {
  // Created an 2D Array using heap memory
    int row = 5;
    int col = 5; 
    int** arr = new int*[row];

    for(int i=0;i<row;i++) {
      arr[i] = new int[col];
    }

    // print;

    for(int i=0;i<row;i++) {
      for(int j=0;j<col;j++) {
        cout << arr[i][j] << " ";
      }
      cout << endl;
    }

    // for deallocation
    for(int i=0;i<row;i++) {
        delete[]arr[i];
    }
    delete []arr;

    
    long ch;
    cout << sizeof(ch);
    
}