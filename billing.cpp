#include <iostream>
#include <iomanip>
using namespace std;

class BillingSystem : public OrderSystem
{
private:
    string customerName;
    int tableNumber;

public:
    void customerDetails()
    {
        cin.ignore();

        cout << "Enter Customer Name: ";
        getline(cin, customerName);

        cout << "Enter Table Number: ";
        cin >> tableNumber;
    }

    void generateBill()
    {
        float gst = total * 0.05;
        float serviceCharge = total * 0.02;
        float grandTotal = total + gst + serviceCharge;

        cout << "\n============== FINAL BILL ==============\n";

        cout << "Customer Name : " << customerName << endl;
        cout << "Table Number  : " << tableNumber << endl;

        cout << "----------------------------------------\n";

        cout << "Subtotal       : Rs." << total << endl;
        cout << "GST (5%)       : Rs." << gst << endl;
        cout << "Service Charge : Rs." << serviceCharge << endl;

        cout << "----------------------------------------\n";

        cout << "Grand Total    : Rs." << grandTotal << endl;0

        cout << "========================================\n";
        cout << "THANK YOU! VISIT AGAIN.\n";
    }
};

int main()
{
    BillingSystem customer;

    cout << "WELCOME TO RESTAURANT ORDER & BILLING SYSTEM\n";

    customer.customerDetails();

    customer.takeOrder();

    customer.generateBill();

    return 0;
}