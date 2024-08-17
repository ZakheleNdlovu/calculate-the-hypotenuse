#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a;
    double b;
    double c;

    cout << "Enter side a:";
    cin>>a;

    cout << "Enter side b:";
    cin>>b;

    c = sqrt(pow(a,2) + pow(b,2));

    cout << "Side C is :" << c;

    return 0;
}

