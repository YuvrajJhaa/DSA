#include<iostream>
using namespace std;

void permutations(string &str, int i){
    // base case
    if(i >= str.length()){
        cout << str << " ";
        return;
    }

    // RE call
    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);
        permutations(str,i+1);
        swap(str[i],str[j]);
    }
}

int main(){
    string str = "abc";
    int i = 0;
    permutations(str, i);
}