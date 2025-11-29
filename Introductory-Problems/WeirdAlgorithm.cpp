#include <iostream>

using namespace std;

/**
 * Idea: Simulation
 * Link: https://cses.fi/problemset/task/1068
 */



int main(){
    int n;
    cin >> n;
    while(n > 1){
        cout << n << " ";
        n = (n%2 ? n*3 + 1 : n/2);
    }
    cout << 1;

    return 0;
}