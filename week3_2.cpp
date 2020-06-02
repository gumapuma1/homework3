//Вычислить сумму элементов массива, больших 5

#include <iostream>
#include <stdlib.h>

using namespace std;

const int n = 10;

int main() {
    int arr[n], sum = 0;
    srand(6527);

    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 20;
    }

    cout << "Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        if(arr[i] > 5) sum+=arr[i];
    }
    cout << endl << "Sum (>5) = " << sum << endl;

    return 0;
}