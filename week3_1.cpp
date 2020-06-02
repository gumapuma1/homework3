#include <iostream>
#include <stdlib.h>

using namespace std;

const int n = 10;

int main() {
    int arr[n];
    srand(10);

    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 11;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    
    return 0;
}