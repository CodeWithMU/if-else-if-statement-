#include <iostream>
using namespace std;
int main()
{
    double phy, chem, math, avg;
    cout << "enter physics marks:";
    cin >> phy;
    cout << "enter chemistry marks:";
    cin >> chem;
    cout << "enter math marks:";
    cin >> math;
    avg = (phy + chem + math) / 3;
    cout << "the average is :" << avg << endl;
    if (avg < 40)
    {
        cout << "very bad";
    }
    else if (avg < 80)
        cout << "good work";
    else
      cout << "bye";
      //task#1
      // get the number from user and recognize (print) it is even or odd// number%2==0

    return 0;
}