#include <iostream>
using namespace std;

int main() 
{
    float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
    float USDtoPHP, PoundstoPHP, TotalPHP;
    float sugarinPHP, riceinPHP, sardinesinPHP, coffeeinPHP, milkinPHP;
    int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;

    // Input prices
    cout << "Enter the price of sugar (in USD): ";
    cin >> sugarPriceUSD;

    cout << "Enter the price of rice (per pound): ";
    cin >> ricePricePound;

    cout << "Enter the price of sardines (per pound): ";
    cin >> sardinesPricePound;

    cout << "Enter the price of coffee (in USD): ";
    cin >> coffeePriceUSD;

    cout << "Enter the price of milk (in USD): ";
    cin >> milkPriceUSD;

    // Input quantities
    cout << "Enter the quantity of sugar: ";
    cin >> sugarQty;

    cout << "Enter the quantity of rice: ";
    cin >> riceQty;

    cout << "Enter the quantity of sardines: ";
    cin >> sardinesQty;

    cout << "Enter the quantity of coffee: ";
    cin >> coffeeQty;

    cout << "Enter the quantity of milk: ";
    cin >> milkQty;

    // Assume USD to PHP and Pounds to PHP conversion rates
    cout << "Enter USD to PHP conversion rate: ";
    cin >> USDtoPHP;

    cout << "Enter Pounds to PHP conversion rate: ";
    cin >> PoundstoPHP;

    // Convert prices to PHP
    sugarinPHP = sugarPriceUSD * USDtoPHP * sugarQty;
    riceinPHP = ricePricePound * PoundstoPHP * riceQty;
    sardinesinPHP = sardinesPricePound * PoundstoPHP * sardinesQty;
    coffeeinPHP = coffeePriceUSD * USDtoPHP * coffeeQty;
    milkinPHP = milkPriceUSD * USDtoPHP * milkQty;

    // Calculate total in PHP
    TotalPHP = sugarinPHP + riceinPHP + sardinesinPHP + coffeeinPHP + milkinPHP;

    // Output total
    cout << "Total price in PHP: " << TotalPHP << endl;

    return 0;
}