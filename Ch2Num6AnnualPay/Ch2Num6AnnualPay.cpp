/************************************************
** Author: Andrea Hayes
** Date: Febuary 20th, 2020
** Purpose: Figure Annual Pay
** Input: Pay Amount and Pay Periods
** Processing: Multilply Pay Amount by Pay Periods to get Annual Pay
** Output: Display Annual Pay
*************************************************/

#include <iostream>
using namespace std;
int main() {
    
    int payAmount = 2200; // Amount earned per pay period

    int payPeriod = 26; // Number of pay periods per year

    int annualPay; // Total annual pay

    annualPay = payAmount * payPeriod;

    // howdy
    cout << "Annual Pay $" << annualPay << endl;

    return 0;
}