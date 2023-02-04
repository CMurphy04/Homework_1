/**
 *      @file: Homework_1
 *    @author: Collin Haggerty-Murphy
 *      @date: 2/2/2023
 *     @brief: This program will display the invoice
 *              of monitors sold in a store, as well
 *              as applying sales tax to Ohio residents.
 *
 **/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
    //Integers
    const double samsungPrice = 190.00;
    const double viewsonicPrice = 170.00;
    int quantity;
    double total;
    double discount = 0.0;
    double tax;
    char type;
    string brand;
    string input;
    string resident;

        cout << "\nEnter a monitor type (s, v) followed by the quantity: ";
        cin >> type;
        cin >> quantity;

        if (type == 's')
        {
            total = (samsungPrice * quantity);
            brand = "Samsung";
        }
        if (type == 'v')
        {
            total = (viewsonicPrice * quantity);
            brand = "ViewSonic";
        }

        if (quantity >= 3)
        {
            discount += total * .05;
        }

        cout << "Do you live in Ohio (yes/no)? ";
        cin >> input;

        if (input == "yes")
        {
            tax = (total-discount) * .07;
            resident = "Yes";
        }
        else{
            resident = "No";
        }

        cout << setprecision(2) << fixed; //looked this up
        cout << "Monitors Invoice\n------------------------------\n  Monitor brand: " << brand << "\n       Quantity: " << quantity;

        if(brand == "Samsung"){
            cout << "\n          Price: $" << samsungPrice;
        }
        else{
            cout << "\n          Price: $" << viewsonicPrice;
        }
                 
        cout << "\n  Ohio Resident: " << resident << "\n    Total price: $" << total << "\n------------------------------\n       Discount: $" << discount << "\n       Subtotal: $" << total - discount << "\n          Taxes: $" << tax << "\n==============================\n          Total: $" << (total - discount + tax) << "\n==============================" << endl << endl;

        return 0;
}