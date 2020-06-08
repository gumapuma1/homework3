//Создать новый массив из двух других массивов путём:
//перемножения


#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

const int n = 10;
 
void fileWrite(int arr[n]);
void arrayFill(int arr[n]);
void arrayShow(int arr[n]);

int main() {
    int arra[n], arrb[n], arrc[n];
    srand(time(nullptr));
    
    //clear the text file
    ofstream fout;
    fout.open("data.txt");
    fout.close();

    arrayFill(&arra[0]);
    arrayFill(&arrb[0]);

    arrayShow(&arra[0]);
    arrayShow(&arrb[0]);

    for(int i = 0; i < n; i++) {
        arrc[i] = arra[i] * arrb[i];
    }

    arrayShow(&arrc[0]);
    fileWrite(&arrc[0]);

    return 0;
}

void fileWrite(int arr[n]) {
    ofstream fout;
    fout.open("data.txt", ofstream::out | ofstream::app);

    if(!fout.is_open()) {
        cout << "Error. File isn't open.";
    }
    else {
        for(int i = 0; i < n; i++) {
            fout << arr[i] << " ";
        }
        fout << endl;
    }
}

void arrayFill(int arr[n]) {
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 101 + (-50);
    }
}

void arrayShow(int arr[n]) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}