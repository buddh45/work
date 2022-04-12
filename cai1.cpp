#include<iostream>
#include<string>
using namespace std;
class cai{
    public :
        void setcai(string n,double m,int k){
        name = n;
        money = m;
        key = k;
    }
    string name;
    double money;
    int key;
};


int main()
{
   int n;
   cout<<"一共有几道菜";
   cin>>n;
   cai *c = new cai[n];
    string name;
    double money;
    cout<<"请输入各个菜的名字和价格";
    for(int i = 0;i < n;i++)
    {
         cin>>name>>money;
         c[i].setcai(name,money,i);
    }
    double mprice;
    cout<<"请输入您能接受的最高价格";
    cin>>mprice;
    int max = n-1; 
    cout<<"您能够选择的菜有以下"<<endl;
   for(int i = 0;i < n;i++)
   {
       if(c[i].money < mprice)
       {
           cout<<c[i].name<<" "<<c[i].money<<endl;
           max = c[max].money >= c[i].money && c[max].key < c[i].key ? max :i;
       }
   }
   cout<<"为您推荐"<<endl;
    cout<<"max:"<<c[max].name<<" "<<c[max].money;
    return 0;
}