#include <iostream>
using namespace std;
class invent2;

class invent1
{
    int code;
    int items;
    float price;

public:
    invent1(int a, int b, float c)
    {
        code = a;
        items = b;
        price = c;
    }
    void putdata()
    {
        cout << "Code: " << code << endl;
        cout << "items: " << items << endl;
        cout << "price: " << price << endl;
    }
    int getcode()
    {
        return code;
    }
    int getitems()
    {
        return items;
    }
    int getprice()
    {
        return price;
    }
    operator float()
    {
        return float(items * price);
    }
};

class invent2
{
    int code;
    float value;
    public:
        invent2()
        {
            code = 0;
            value = 0;
        }
        invent2(int x, float y)
        {
            code = x;
            value = y;
        }
        void putdata()
        {
            cout<<"code: "<<code<<endl;
            cout<<"value: "<<value<<endl;
        }
        invent2(invent1 p)
        {
            code = p.getcode();
            value = p.getitems() * p.getprice();
        }
};



int main()
{
    invent1 s1(100, 5, 140.0);
    invent2 d1;
    float total_value;

    total_value = s1;
    d1 = s1;

    cout<<"product deatails -- invent1 type: "<<endl;
    s1.putdata();
    cout<<"\nstock value: "<<endl;
    cout<<"Value: "<<total_value<<endl;
    cout<<"\nproduct deatails -- invent2 type: "<<endl;
    d1.putdata();
}
