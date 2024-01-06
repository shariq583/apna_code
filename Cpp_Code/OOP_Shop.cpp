#include <iostream>
using namespace std;
class Shop
{
    int itemId[100];
    int item_Pr[100];

public:
    int counter;
    void initCounter() { counter = 1; }
    void setPrice();
    void dispPrice();
};
void Shop::setPrice()
{

    cout << "\nEnter Id of item :";
    cin >> itemId[counter];
    cout << "\nEnter it's price of item";
    cin >> item_Pr[counter];
    counter++;
}

int main()
{
    Shop dukaan;
    dukaan.setPrice();

    return 0;
}