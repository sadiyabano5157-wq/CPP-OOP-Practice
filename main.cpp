#include<iostream>
#include<string>

using namespace std;

class mobile
{
public:
    string brand;
    float price;
};

int main()
{
    mobile m1;
    m1.brand = "iphone";
    m1.price = 10000.00;

    mobile m2;
    m2.brand = "Samsung";
    m2.price = 50000;

    cout << "The brand is: " << m1.brand << endl;
    cout << "The price is: " << m1.price << endl;

    cout << "The brand is: " << m2.brand << endl;
    cout << "The price is: " << m2.price << endl;

    return 0;
}
