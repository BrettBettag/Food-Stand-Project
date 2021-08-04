#include <iostream>

using namespace std;

const double Milkyway = 1.25;
const double snickers = 1.50;
const double peanut_butter_cups = 1.00;
const double hersheys = 2.00;

const double gatorade = 1.50;
const double pop = 1.25;
const double bottled_water = 1.00;
const double coffee = 1.75;

const double pizza = 4.75;
const double hot_dogs = 2.50;
const double hamburgers = 3.50;

char order_candy;
char order_drink;
char order_food;

double orderdrinktotal;
double ordercandytotal;
double orderfoodtotal;

char OrderCandyMenu()
{
    cout << "Would you like to purchase some  candy?" << endl;
    cin >> order_candy;
    return order_candy;
}

double OrderCandy(){

    int candy_type;
    cout << "What candy type does your customer want to purchase? 1 Milkyway, 2 Snickers, 3  Peanut Butter Cups, or 4 Hershey's " << endl;
    cin >> candy_type;
    if (candy_type == 1)
        ordercandytotal += Milkyway;
    else if (candy_type == 2)
        ordercandytotal += snickers;
    else if (candy_type == 3)
        ordercandytotal += peanut_butter_cups;
    else if (candy_type == 4)
        ordercandytotal += hersheys;
    else
        cout << "Your candy order type is invalid" << endl;
    return ordercandytotal;
}

double OrderDrink(){

    int drink_type;
    cout << "Beverage type. 1  Gatorade, 2 for Soda, 3 Water, 4 Coffee " << endl;
    cin >> drink_type;
    switch (drink_type)
    {
    case 1:
        orderdrinktotal += gatorade;
        break;
    case 2:
        orderdrinktotal += pop;
        break;
    case 3:
        orderdrinktotal += bottled_water;
        break;
    case 4:
        orderdrinktotal += coffee;
        break;
    default:
        cout << "You placed an invalid drink entry type" << endl;

    }
    return orderdrinktotal;
}

double OrderFood(){

    int food_type;
    cout << "What type of food would you like to order? 1  Pizza, 2  Hot Dogs, 3  Hamburgers " << endl;
    cin >> food_type;
    switch (food_type)
    {
    case 1:
        orderfoodtotal += pizza;
        break;
    case 2:
        orderfoodtotal += hot_dogs;
        break;
    case 3:
        orderfoodtotal += hamburgers;
        break;
    default:
        cout << "Invalid food type entry" << endl;

    }
    return orderfoodtotal;

}
int main()
{
    order_candy = OrderCandyMenu();
Would you like to order a beverage?
    while ((order_candy == 'y') || (order_candy == 'Y')){

    ordercandytotal = OrderCandy();

    order_candy = OrderCandyMenu();

    }
    cout << "Your total for candy is: $" << ordercandytotal << endl;

    cout << "Would you like to order a beverage? " << endl;
    cin >> order_drink;

    while ((order_drink == 'y') || (order_drink == 'Y')){

    orderdrinktotal = OrderDrink();

    cout << "Would you like to order a beverage? " << endl;
    cin >> order_drink;
    }
    cout << "Your total for beverages is: $" << orderdrinktotal << endl;

    cout << "Would you like to place an order? " << endl;
    cin >> order_food;

    while ((order_food == 'y') || (order_food == 'Y')){

    orderfoodtotal = OrderFood();

    cout << "Would you like to place an order? " << endl;
    cin >> order_food;
    }
    cout << "Your order total is: $" << orderfoodtotal << endl;

    return 0;
}
