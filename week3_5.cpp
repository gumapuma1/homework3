//Найти среднее арифметическое всех/положительных/отрицательных

#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

const int n = 10;
 
void fileWrite(double a, double p,double neg);

int main() {
    int arr[n], p=0, neg=0;
    double avg, avg_pos, avg_neg;
    srand(time(nullptr));
    
    //clear the text file
    ofstream fout;
    fout.open("data.txt");
    fout.close();

    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 101 + (-50);
        avg+=arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            avg_pos+=arr[i];
            p++;
        }  
        else{
            avg_neg+=arr[i];
            neg++;
        }
    }
    
    avg=avg/n;
    avg_pos=avg_pos/p;
    avg_neg=avg_neg/neg;

    cout << "Average of all: " << avg << endl;
    cout << "Average of positive: " << avg_pos << endl;
    cout << "Average of negative: " << avg_neg << endl;

    fileWrite(avg, avg_pos, avg_neg);

    return 0;
}

void fileWrite(double a, double p,double neg) {
    ofstream fout;
    fout.open("data.txt", ofstream::out | ofstream::app);

    if(!fout.is_open()) {
        cout << "Error. File isn't open.";
    }
    else {
        fout << "Average of all: " << a << endl;
        fout << "Average of positive: " << p << endl;
        fout << "Average of negative: " << n << endl;
    }
}