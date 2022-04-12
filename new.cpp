#include <iostream>
#include<string>
using namespace std;

class Animal
{
       
 public:   Animal(int a):age(a){};
    public:void show()
    {
        cout<<age<<endl;
    }
    int age;
};

class tem
{
    public: tem(char cc):c(cc){};
    void show()
    {
        cout<<c<<endl;
    }

    char c;
};

class Dog:public Animal{
    string color;
    tem t;
public:Dog(string c,int a):Animal(a),t('r')
    {    
         color = c;
    }
    void show()
    {
        cout<<color<<" "<<age;
    }
};

int main()
{
    Animal a(5);
    a.show();
     Dog d("red",19);
    d.show();
    return 0;
}