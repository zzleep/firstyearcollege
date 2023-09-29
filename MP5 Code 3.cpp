#include <iostream>
using namespace std;

// Declare Functions
double growthRate(double rateOfBirth, double rateOfDeath);
double estimatedPopulation(double populationNumber, double rateOfBirth, double rateOfDeath, double years);

int main(){

    int Pop, BD, DD, n; 

    /*
    Pop = Population (Cannot be less than 2)
    BD = Birth Rate (Cannot be a negative number)
    DD = Death Rate (Cannot be a negative number)
    n = number of years
    */

    cout << "Enter the starting population: ";
    cin >> Pop;
    if (Pop < 2){
        cout << "Population cannot be less than 2.";
        return 0;
    }

    cout << "\nEnter the birth rate: ";
    cin >> BD;
    if (BD < 0){
        cout << "Birth Rate cannot be a negative number.";
        return 0;
    }

    cout << "\nEnter the death rate: ";
    cin >> DD;
    if (DD < 0){
        cout << "Death Rate cannot be a negative number.";
        return 0;
    }

    cout << "\nEnter the number of years: ";
    cin >> n;

    // Print the Growth Rate
    double gr = growthRate(BD, DD);
    cout << "\nThe growth rate is " << gr << endl;

    // Print the Estimated Population by the end of the year
    double estimation = estimatedPopulation(Pop, BD, DD, n);
    cout << "\nThe estimated population by " << n << " years is " << estimation << endl;
    
    return 0;
}

// Growth Rate = Birth Rate - Death Rate
double growthRate(double rateOfBirth, double rateOfDeath){
    return rateOfBirth - rateOfDeath;
}

// Popn + (BD*Popn) / 100 – (DD*Popn) / 100 where n = number of years
double estimatedPopulation(double populationNumber, double rateOfBirth, double rateOfDeath, double years){
    return ((populationNumber + (rateOfBirth * populationNumber) / 100) - ((rateOfDeath * populationNumber) / 100)) * years;
}
