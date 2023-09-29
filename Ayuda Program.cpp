#include <iostream>
using namespace std;

void ayudaQualify(float income, char status, int members, string& qualify);
float calcAyuda(float income, int members, string qualify, float& ayuda);
void getInfo(float& income, int& members, char& status);
void displayAyuda(string qualify, float ayuda);

int main()
{
    float income;
    char status;
    int members;
    string qualify;
    float ayuda;
    char more;

    do{
    getInfo(income, members, status);
    ayudaQualify(income, status, members, qualify);
    ayuda = calcAyuda(income, members, qualify, ayuda);
    displayAyuda(qualify, ayuda);
    cout << "\nMore Entry [Y/N] ? ";
    cin >> more;
    }while (more == 'Y' || more == 'y');


    return 0;
}

void ayudaQualify(float income, char status, int members, string& qualify)
{
    if (income < 10000 && members > 4 || status == 'Y' || status == 'y')
    {
        qualify = "Approved";
    }
    else if (income > 10000 && status != 'Y' || status != 'y')
    {
        qualify = "Not Qualified for 8000";
    }
    else if (income < 10000 && status != 'Y' || status != 'y')
    {
        qualify = "Sorry not Qualified";
    }
}

float calcAyuda(float income, int members, string qualify, float& ayuda)
{
    if (qualify == "Approved")
    {
        ayuda = 8000.00;
    }
    else if (qualify == "Not Qualified for 8000" && income > 10000)
    {
        for (int i = 0; i < members; i++)
        {
            ayuda += 1000.00;
        }
        if (ayuda > 4000.00)
        {
            ayuda = 4000.00;
        }
    }
    else if (qualify == "Sorry not Qualified")
    {
        ayuda = 0.00;
    }

    return ayuda;
}

void getInfo(float& income, int& members, char& status)
{
    cout << "Family Monthly Income: ";
    cin >> income;
    cout << "How many members of the family: ";
    cin >> members;
    cout << "Is there a PWD or senior citizen in the family (Y / N)? ";
    cin >> status;
}

void displayAyuda(string qualify, float ayuda)
{
    cout << "Ayuda PHP" << ayuda << ": " << qualify;
}