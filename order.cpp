#include <iostream>
using namespace std;

class OrderSystem : public RestaurantMenu
{
protected:
    int choice, quantity;

    int burgerQty = 0;
    int pizzaQty = 0;
    int sandwichQty = 0;
    int friesQty = 0;

public:
    void takeOrder()
    {
        do
        {
            displayMenu();

            cout << "\nEnter Your Choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Enter Burger Quantity: ";
                cin >> quantity;
                burgerQty += quantity;
                total += quantity * 120;
                break;

            case 2:
                cout << "Enter Pizza Quantity: ";
                cin >> quantity;
                pizzaQty += quantity;
                total += quantity * 250;
                break;

            case 3:
                cout << "Enter Sandwich Quantity: ";
                cin >> quantity;
                sandwichQty += quantity;
                total += quantity * 100;
                break;

            case 4:
                cout << "Enter French Fries Quantity: ";
                cin >> quantity;
                friesQty += quantity;
                total += quantity * 80;
                break;

            case 9:
                cout << "Order Completed!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
            }

        } while (choice != 9);
    }
};
