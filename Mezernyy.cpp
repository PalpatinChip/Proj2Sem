
#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>


using namespace std;

void print(const short mass[] = {})
{
    cout << "{";
    for (int i = 0; i < 12; ++i)
    {
        if (mass[i] != 0) {
            cout << mass[i];
            if (i + 1 < 12)
            {
                cout << ", ";
            }
        }
    }
    cout << "}" << endl;
}

void func1() {


    srand(time(NULL));
    int abc = 0;
    int cba = 0;
    const int a = 12;
    short massi[a] = {};
    short finalM[a] = {};
    for (int i = 0; i < 12; i++) {
        massi[i] = rand();

        if (massi[i] % 2 != 0) {
            finalM[cba] = massi[i];
            cba++;
        }
        else {
            finalM[11 - abc] = massi[i];
            abc++;

        }
    }
    print(massi);
    print(finalM);

}

void func2(){
    srand(time(NULL));
    const int a = 12;
    int abc = 0;
    int cba = 0;
    short A[a] = {};
    short B[a] = {};
    short C[a] = {};
    for (int i = 0; i < 12; i++) {
        A[i] = rand() * rand();
    
        if (A[i] >= 0) {
            B[cba] = A[i];
            cba++;
        }
        else {
            C[abc] = A[i];
            abc++;

        }
    }
    print(A);
    print(B);
    print(C);
}

void func3() {
    srand(time(NULL));
    const int a = 12;
    short A[a] = {};
    short B[a] = {};
    for (int i = 0; i < 12; i++) {
        A[i] = rand() * rand();
    }
    print(A);
    for (int i = 0; i < 12; i++) {
        if (i < 11) {
            B[i + 1] = A[i];
        }
        else {
            B[0] = A[11];
        }
    }
    print(B);
}

int main()
{
    func1();
    cout << endl << endl;
    func2();
    cout << endl << endl;
    func3();
}

