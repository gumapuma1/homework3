//Посчитать количество элементов массива, больших заданного числа

#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

const int n = 10;
 
void fileWrite(int c);

int main() {
    int arr[n], num, count;
    srand(time(nullptr));
    
    //clear the text file
    ofstream fout;
    fout.open("data.txt");
    fout.close();

    cout << "Enter a number: ";
    cin >> num;

    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 101 + (-50);
        if(arr[i] > num) count++;
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Elements larger than num: " << count << endl;
    fileWrite(count);

    return 0;
}

void fileWrite(int c) {
    ofstream fout;
    fout.open("data.txt", ofstream::out | ofstream::app);

    if(!fout.is_open()) {
        cout << "Error. File isn't open.";
    }
    else {
        fout << "Elements larger than num: " << c << endl;
    }
}