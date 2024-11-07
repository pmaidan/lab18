// Polina Maidanova
// Programming Fundamentals
// CS 1436
// 005
// Due Date: 11/04/2024
// Date Completed: 11/04/2024
// Date Submitted: 11/04/2024


// This program calculates the profit from the sale of a stock.

#include <iostream> // Header file allowing to use input/output objects.
#include <iomanip>  // Header file allowing to manipulate the output.
using namespace std;    // Use standard namespace.

// Function prototypes.
void getInput(int&, double&, double&, double&, double&);
void calculateProfit(int, double, double, double, double, double&);
void displayProfit(double);

int main()  // Main function is the starting point of the program execution.
{
    int NS; // Declare the variable for the number of shares.
    // Declare the variables for the sale price, sale commission, purchase price, purchase commission, and final profit.
    double SP, SC, PP, PC, fProfit;

    getInput(NS, SP, SC, PP, PC);   // Get the user's input.

    calculateProfit(NS, SP, SC, PP, PC, fProfit);   // Calculate the profit.

    displayProfit(fProfit); // Display the results.

    return 0;   // Return 0 to indicate successful completion of the program.
}

// The function to get the user's input.
void getInput(int& NS, double& SP, double& SC, double& PP, double& PC)  // Use reference type arguments to pass the input to the main function.
{
    cout << "Enter the number of shares: "; // Get the number of shares.
    cin >> NS;

    while (NS < 0)  // Validate the input. Don't accept negative values.
    {
        cout << "Invalid number of shares. Please enter a positive integer: ";
        cin >> NS;
    }

    cout << "Enter the sale price per share: "; // Get the price per share.
    cin >> SP;

    while (SP < 0.0)    // Validate the input. Don't accept negative values.
    {
        cout << "Invalid sale price. Please enter a positive number: ";
        cin >> SP;
    }

    cout << "Enter the sale commission paid: "; // Get the sale commission.
    cin >> SC;

    while (SC < 0.0)    // Validate the input. Don't accept negative values.
    {
        cout << "Invalid sale commission. Please enter a positive number: ";
        cin >> SC;
    }

    cout << "Enter the purchase price per share: "; // Get the purchase price per share.
    cin >> PP;

    while (PP < 0.0)    // Validate the input. Don't accept negative values.
    {
        cout << "Invalid purchase price. Please enter a positive number: ";
        cin >> PP;
    }

    cout << "Enter the purchase commission paid: "; // Get the purchase commission.
    cin >> PC;

    while (PC < 0.0)    // Validate the input. Don't accept negative values.
    {
        cout << "Invalid purchase commission. Please enter a positive number: ";
        cin >> PC;
    }

}

// The function to calculate the profit. 
// Uses pass by values for calculations and a reference type to pass the profit value to the main function.
void calculateProfit(int NS, double SP, double SC, double PP, double PC, double& fProfit)
{
    fProfit = ((NS * SP) - SC) - ((NS * PP) + PC);
}

// The function to display the profit.
void displayProfit(double fProfit)
{
    cout << setprecision(2) << fixed;   // Display the profit to 2 decimal places.
    if (fProfit >= 0)   // If the profit is a positive value, display the profit.
    {
        cout << "The profit is $" << fProfit << endl;
    }
    else    // Otherwise, display the loss.
    {
        cout << "The loss is $" << -fProfit << endl;
    }
}
