#include <iostream>

using namespace std;

int main(){

    int i;
    const int size = 20;
    float fl[size];
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Enter 20 numbers: ";

    for (i = 0; i < size; i++){ // input 20 numbers
        cin >> fl[i];
    }

    for (i = 0; i < size; i++){

        if (fl[i] > 0){ // no. of values greater than 0
            a += 1;
        }

        if(fl[i] == 0){ // no. of values equal to 0
            b += 1;
        }

        if (fl[i] < 0){ // no. of values less than 0
            c += 1;
        }

    }

    // print the number of values per variable
    
    cout << "\n" << a << " number/s are greater than 0.\n" << endl;
    cout << "\n" << b << " number/s are equal to 0.\n" << endl;    
    cout << "\n" << c << " number/s are less than 0.\n" << endl;

    return 0;
}