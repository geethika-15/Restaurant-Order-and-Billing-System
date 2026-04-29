#include <iostream>
using namespace std;

// BASE CLASS
class RestaurantMenu
{
protected:
    float total = 0;

public:
    void displayMenu()
    {
        cout << "\n=====================================================\n";
        cout << "              RESTAURANT MENU                        \n";
        cout << "=====================================================\n";

        cout << "1. Burger               - Rs.120\n";
        cout << "2. Pizza                - Rs.250\n";
        cout << "3. Sandwich             - Rs.100\n";
        cout << "4. French Fries         - Rs.80\n";
        cout << "5. Coffee               - Rs.60\n";
        cout << "6. Pasta                - Rs.180\n";
        cout << "7. Ice Cream            - Rs.90\n";
        cout << "8. Soft Drink           - Rs.50\n";
        cout << "9. Exit\n";

        cout << "=====================================================\n";
    }
};