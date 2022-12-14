#include <iostream>
#include <conio.h>
using namespace std;
class dummy
{
private:
    int a, b;
    int *p;

public:
    dummy()
    {
        p = new int;
    }
    void setData(int x, int y, int z)
    {
        a = x;
        b = y;
        *p = z;
    }
    void showData()
    {
        cout << "A =" << a << " ,B =" << b <<endl;
    }
    // shallow copy--start--
    //  dummy(dummy &d )
    //  {
    //      a=d.a ,b=d.a;
    //  }
    // shallow copy--end--

    // deep copy--start--
    dummy(dummy &d)
    {
        a = d.a, b = d.a;
        p = new int;
        *p = *(d.p);//Z value is also coped 
    }
    // deep copy--end--
~dummy()
{
delete p ;
}
};

int main()
{
    /* code */

    dummy d1;
    d1.setData(3, 4, 5);
    // Copy Constructor --start--
    dummy d2 = d1;
    // Copy Constructor --End--

    // Implicit copy assignment operator --start--
    dummy d3;
    d3 = d2;
    // Implicit copy assignment operator --End--

    d3.showData(); // Makes Data visible
    getch();

    // 1.when copy construtor is called when we intailize object with another object of same class.

    return 0;
}
