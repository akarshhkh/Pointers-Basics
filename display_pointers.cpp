//akarsh khot
//23070123012
//AIM - to store the values using pointers and printing the pointers address and value.

#include<iostream>
using namespace std;
int main(){
    int a = 100;
    int *aptr;
    aptr = &a;

    cout << *aptr << endl;

    cout << &a << endl;
    cout << aptr << endl;

    return 0;
}

/*
OUTPUT
100
0x61ff08
0x61ff08
*/
