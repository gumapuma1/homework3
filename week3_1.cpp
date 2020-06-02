//Сгенерировать массив со случайными числами в диапазоне: [0,10]

#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

const int n = 10;

void fileWrite(int *x);

int main() {
    int arr[n];
    srand(time(nullptr));

    //clear the text file
    ofstream fout;
    fout.open("data.txt");
    fout.close();

    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 11;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    fileWrite(&arr[0]);
    
    return 0;
}

void fileWrite(int *x) {
    ofstream fout;
    fout.open("data.txt", ofstream::out | ofstream::app);

    if(!fout.is_open()) {
        cout << "Error. File isn't open.";
    }
    else {
        for(int i = 0; i < n; i++) fout << x[i] << " ";
    }
}
