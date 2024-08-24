#include <iostream>
#include <iomanip>
using namespace std;

class base{
    int arr[10];
};

class b1 : public base{};
class b2 : public base{};
class derived : public b1, public b2{};

class Test{
    public:
        int x;
};

class C01{
    int a;
    public:
        C01() : a(rand()){}
        int &foo(){return a;}
};

int main()
{
    string arr = "Hello";
    for(int i=0; i<5; i++){
        cout << arr.at(i-1);
    }
}