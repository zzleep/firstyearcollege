#include <iostream>
using namespace std;

int counter;

void printCall(){
    ++counter;
}

int main(){

    while (counter != 10){
        printCall();
    }

    cout << "This function has been called " << counter << " times." << endl;
    
    return 0;
}