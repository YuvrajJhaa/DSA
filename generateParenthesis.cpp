#include<iostream>
#include<vector>
using namespace std;

void solve(vector<string> &ans, int n, int open, int close, string output){
    // base case
    if(open == 0 && close == 0){
        ans.push_back(output);
        return;
    }
    // Recursive call
    // include open bracket
    if(open > 0) {
        output.push_back('(');
        solve(ans, n, open - 1,close,output);
        // backtrack
        output.pop_back();
    }
    // include close bracket
    if(open < close ) {
        output.push_back(')');
        solve(ans, n, open, close - 1, output);
        // backtrack
        output.pop_back();
    }

}

int main(){
    vector<string> ans;
    string output = "";
    int n = 10;
    int open = n;
    int close = n;

    solve(ans, n, open, close, output);
    int count = 0;
    for(auto i : ans){
        cout << i << " " << endl;
        count++;
    }
    cout << count << endl;

}