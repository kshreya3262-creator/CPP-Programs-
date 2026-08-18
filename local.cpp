#include<iostream>
using namespace std;

void func(){
class Test{
public:
void method()
{
cout<<"Local Class method() called"<<endl;
}
};
Test t;
t.method();
}
int main(){
func();
return 0;
}