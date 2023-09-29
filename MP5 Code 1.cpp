#include <iostream>
using namespace std;

// Functions
double calcSum(double a[], int b);
void calcAverage(double a[], int b, double &ave);

// Global Variables
int size;

int main(){
    
    // How many scores the user wants to input
    cout << "How many scores do you want to use? ";
    cin >> size;

    double scores[size];

    // Inputting the scores based on the array size
    cout << "\nEnter your scores (eg. 20 50 30); ";
    for (int i=0; i<size; i++){
        cin >> scores[i];
    }
    
    // Calls the calcSum function
    double sum = calcSum(scores, size);

    // Creates a local variable for calcAverage
    double ave;
    calcAverage(scores, size, ave);
    
    // Printing of all important variables
    cout << "The sum of all scores is: " << sum << endl;
    cout << "The average score is: " << ave << endl;

    return 0;
}

// Calculates the sum of the scores array
double calcSum(double a[], int b){
    int sum = 0;
    for(int i=0; i<b; i++){
        sum += a[i];
    }
    return sum;
}

// Calculates the average of the sum of all arrays iterating the ampersand ave as a container for the average
void calcAverage(double a[], int b, double &ave){
    ave = calcSum(a, b) / b;
}
