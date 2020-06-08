//Посчитать количество положительных/отрицательных элементов массива

#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

const int n = 10;
 
void fileWrite(int pos, int neg);

int main() {
    int arr[n], p=0, neg=0;
    srand(time(nullptr));
    
    //clear the text file
    ofstream fout;
    fout.open("data.txt");
    fout.close();

    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 101 + (-50);
        if(arr[i] >= 0) p++;
        else neg++;
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Posiive: " << p << endl;
    cout << "Negative: " << neg << endl;

    fileWrite(p, neg);

    return 0;
}

void fileWrite(int pos, int neg) {
    ofstream fout;
    fout.open("data.txt", ofstream::out | ofstream::app);

    if(!fout.is_open()) {
        cout << "Error. File isn't open.";
    }
    else {
        fout << "Posiive: " << pos << endl;
        fout << "Negative: " << neg << endl;
    }
}