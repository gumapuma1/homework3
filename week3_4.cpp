//Вычислить сумму нечётных/чётных элементов массива

#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

const int n = 10;

void fileWrite(int even, int odd);

int main() {
    int arr[n], sum_even = 0, sum_odd=0;
    srand(time(nullptr));
    
    //clear the text file
    ofstream fout;
    fout.open("data.txt");
    fout.close();

    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 50;
        if(arr[i]%2) sum_odd+=arr[i];
        else sum_even+=arr[i];
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Even sum: " << sum_even << endl;
    cout << "Odd sum: " << sum_odd << endl;

    fileWrite(sum_even, sum_odd);

    return 0;
}

void fileWrite(int even,int odd) {
    ofstream fout;
    fout.open("data.txt", ofstream::out | ofstream::app);

    if(!fout.is_open()) {
        cout << "Error. File isn't open.";
    }
    else {
        fout << "Even sum: " << even << endl;
        fout << "Odd sum: " << odd;
    }
}