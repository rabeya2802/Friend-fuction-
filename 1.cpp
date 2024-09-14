#include <iostream>
using namespace std;
class A;
class B;
class A{
private:
    int x;
public:
    A():x(20){}
    friend void sum(A &a, B& b);

};
class B{
private:
    int y;
public:
    B():y(20){}
    friend void sum(A &a, B& b);

};
void sum(A &a, B& b)
{
    cout<<a.x+b.y<<endl;
}
int main()
{
    A a;
    B b;
    sum(a,b);

}
