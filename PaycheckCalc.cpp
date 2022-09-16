// PaycheckCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::pow;
using std::round;

int main()
{
    //calc name
    cout << "Paycheck Calculator" << endl << endl;
    cout << "Paycheck Converter: ";
    

    double hoursWorked;
    cout << "Hours Worked: ";
    cin >> hoursWorked;

    double hourlyPayRate;
    cout << "Hourly Pay Rate: ";
    cin >> hourlyPayRate;

    double grossPay = hoursWorked * hourlyPayRate;
   
    cout << "Gross Pay: " << grossPay << endl << endl;

    double taxRate;
    cout << "Tax Rate: ";
    cin >> taxRate;

    double taxAmount = grossPay * (taxRate / 100);
    cout << "Tax Amount: " << taxAmount << endl << endl;

    double takeHomePay = grossPay - taxAmount;
    cout << "Take Home Pay: "  << takeHomePay << endl << endl;

   // double taxAmount;

       
    

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
