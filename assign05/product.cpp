/***************************************************************
 * File: product.cpp
 * Author: Gabriel Ikpaetuk
 * Purpose: Contains the method implementations for the Product 
 *          class.
 ***************************************************************/

#include "product.h"
// put your method bodies here
/***************************************************************
 * ADDRESS CLASS DEFAULT CONSTRUCTOR
 ***************************************************************/
Product ::Product()
{
    setName("none");
    setDescription("");
    setWeight(0);
    setBasePrice(0);
}
/***************************************************************
 * ADDRESS CLASS NON-DEFAULT CONSTRUCTOR
 ***************************************************************/
Product ::Product(string nameInput, string descriptionInput, double basePriceInput, double weightInput)
{
    setName(nameInput);
    setDescription(descriptionInput);
    setWeight(weightInput);
    setBasePrice(basePriceInput);
}

/***************************************************************
 * PROMPT
 * Purpose: Prompt in order to receive the product features from
 * the user
 ***************************************************************/
void Product ::prompt()
{

    // Gets the name of the product
    cout << "Enter name: ";
    getline(cin, name);

    // Gets the description
    cout << "Enter description: ";
    getline(cin, description);

    // Get the weigth
    cout << "Enter weight: ";
    cin >> weight;

    // Loops until user enters a valid price
    while (true)
    {
        cout << "Enter price: ";
        cin >> basePrice;

        // Checks if price is a number or if it is negative
        if (cin.fail() || basePrice < 0)
        {

            // Clears the error flag
            cin.clear();

            // Ignores the  character up until the newline
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        else
        {
            break;
        }
    }
}

/***************************************************************
 * GETSALESTAX
 * Purpose: calculates the sales tax
 ***************************************************************/
double Product ::getSalesTax()
{
    double salesTax;

    // Calculates sales tax, 6.00% of price
    salesTax = ((float)basePrice * 6) / 100;
    return salesTax;
}

/***************************************************************
 * GETSHIPPINGCOST
 * Purpose: calculates the shipping cost
 ***************************************************************/
double Product ::getShippingCost()
{

    // Sets shipping cost to $2.00 if the product weight
    // is less than 5
    if (weight < 5)
    {
        return 2.00;
    }
    double shippingCost;
    double perPound;

    // Calculates the cost per pound after 5 lbs
    perPound = (weight - 5) * 0.10;

    // Calculates shipping cost
    shippingCost = 2.00 + perPound;

    return shippingCost;
}

/***************************************************************
 * GETTOTALPRICE
 * Purpose: calculates the total price
 ***************************************************************/
double Product ::getTotalPrice()
{
    double totalPrice;
    double salesTax = getSalesTax();
    double shippingCost = getShippingCost();

    // Calculates the total price
    totalPrice = basePrice + salesTax + shippingCost;

    return totalPrice;
}

/***************************************************************
 * DISPLAYADVERTISING
 * Purpose: Displays the product features in an adverstising style
 ***************************************************************/
void Product ::displayAdvertising()
{

    // For number output manipulation
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << name
         << " - "
         << "$"
         << basePrice
         << endl;

    cout << "("
         << description
         << ")"
         << endl;
}

/***************************************************************
 * DISPLAYINVENTORY
 * Purpose: Displays the product features in an inventory style
 ***************************************************************/
void Product ::displayInventory()
{

    // For number output manipulation
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "$"
         << basePrice
         << " - "
         << name
         << " - "
         << setprecision(1) << weight
         << " lbs"
         << endl;
}

/***************************************************************
 * DISPLAYRECEIPT
 * Purpose: Displays the product several costs as a receipt
 ***************************************************************/
void Product ::displayReceipt()
{

    // For number output manipulation
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    // Calls the needed calculation methods
    double salesTax = getSalesTax();
    double shippingCost = getShippingCost();
    double total = getTotalPrice();

    cout << name << endl;

    // Displays the content as a receipt
    cout << "  Price:         $" << setw(8)
         << basePrice << endl;

    cout << "  Sales tax:     $" << setw(8)
         << salesTax << endl;

    cout << "  Shipping cost: $" << setw(8)
         << shippingCost << endl;

    cout << "  Total:         $" << setw(8)
         << total << endl;
}

/***************************************************************
 * GETNAME
 * Purpose: Gets the value of name, the private member variable 
 ***************************************************************/
string Product::getName() const
{
    return name;
}
/***************************************************************
 * SETNAME
 * Purpose: Sets, name, the private member variable 
 ***************************************************************/
void Product::setName(string nameInput)
{
    name = nameInput;
}

/***************************************************************
 * GETDESCRIPTION
 * Purpose: Gets the value of description, the private member 
 *          variable 
 ***************************************************************/
string Product::getDescription() const
{
    return description;
}

/***************************************************************
 * SETDESCRIPTION
 * Purpose: Sets, description, the private member variable 
 ***************************************************************/
void Product::setDescription(string descriptionInput)
{
    description = descriptionInput;
}

/***************************************************************
 * GETBASEPRICE
 * Purpose: Gets the value of basePrice, the private member
 *          variable 
 ***************************************************************/
double Product::getBasePrice() const
{
    return basePrice;
}

/***************************************************************
 * SETBASEPRICE
 * Purpose: Sets, basePrice, the private member variable 
 ***************************************************************/
void Product::setBasePrice(double basePriceInput)
{
    basePrice = basePriceInput;
}

/***************************************************************
 * GETWEIGHT
 * Purpose: Gets the value of weight, the private member variable 
 ***************************************************************/
double Product::getWeight() const
{
    return weight;
}

/***************************************************************
 * SETWEIGHT
 * Purpose: Sets, weight, the private member variable 
 ***************************************************************/
void Product::setWeight(double weightInput)
{
    weight = weightInput;
}