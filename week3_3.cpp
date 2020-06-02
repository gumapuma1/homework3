//Вычислить сумму элементов массива, больших 20

#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

const int n = 10;

void fileWrite(int x);

int main() {
    int arr[n], sum = 0;
    srand(time(nullptr));
    
    //clear the text file
    ofstream fout;
    fout.open("data.txt");
    fout.close();

    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 50;
    }

    cout << "Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        if(arr[i] > 20) sum+=arr[i];
    }
    cout << endl << "Sum (>20) = " << sum << endl;

    fileWrite(sum);

    return 0;
}

void fileWrite(int x) {
    ofstream fout;
    fout.open("data.txt", ofstream::out | ofstream::app);

    if(!fout.is_open()) {
        cout << "Error. File isn't open.";
    }
    else {
        fout << x;
    }
}