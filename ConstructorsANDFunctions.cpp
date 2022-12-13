#include <iostream>
using namespace std;
// Inline Fuctions
inline int check(int a, int b)
{
    return a * b;
};
class StudentDetails
{
    // if number is greater  6 divide
    // if number less than 6 multiple by 2
public: // Import ti mention public on default its private
    // there was no need to mention inline function because every function within the class is inline by default
    inline int cal(int a)
    {
        int result;
        if (a > 6)
        {
            result = a / 2;
        }
        else
        {
            result = a * 2;
        }
        return result;
    }
};
int main()
{
    // To show Result of Inline Function
    cout << "Inline Fuction Check Results" << check(2, 3) << endl;
    // Enter Variable to Access Function Cal in StudentDetails
    int a;
    cout << "Enter A Value";
    cin >> a;
    StudentDetails stu; // Object Of class

    cout << "Results of your entered value" << stu.cal(a);

    return 0;
}