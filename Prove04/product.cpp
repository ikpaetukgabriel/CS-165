#include "product.h"

void Product :: prompt(){
    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter description: ";
    getline(cin, description);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    

    cout << "Enter weight: ";
    cin >> weight;
    cout << "Enter price: ";
    cin >> basePrice;
}

double Product :: getSalesTax(){
    double salesTax;
    salesTax = ((float)basePrice * 6) / 100;
    return salesTax;
}

double Product :: getShippingCost(){
    if (weight < 5){
        return 2.00;
    }
    double shippingCost;
    double perPound;

    perPound = (weight - 5) * 0.10;
    shippingCost = 2.00 + perPound;

    return shippingCost;
}

double Product :: getTotalPrice(){
    double totalPrice;
    double salesTax = getSalesTax();
    double shippingCost =  getShippingCost();

    totalPrice = basePrice + salesTax + shippingCost;

    return totalPrice;
}

void Product :: displayAdvertising(){
    cout << name
         << " - "
         << "$"
         << basePrice
         << endl;

    cout << "("
         << description
         << " ) "
         << endl;

}

void Product :: displayInventory(){
    cout << "$"
         << basePrice
         << " - "
         << name
         << " - "
         << weight
         << " lbs"
         << endl;
}

void Product :: displayReceipt(){

    double salesTax = getSalesTax();
    double shippingCost =  getShippingCost();
    double total = getTotalPrice();
    
    cout << name << endl;
   
    cout << "Price:         $" << setw(8) 
         << basePrice << endl;

    cout << "Sales tax:     $" << setw(8) 
         << salesTax << endl;

    cout << "Shipping cost: $" << setw(8) 
         << shippingCost << endl;

    cout << "Total:         $" << setw(8) 
         << total << endl;

}