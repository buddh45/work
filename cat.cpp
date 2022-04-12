#include<iostream>
using namespace std;


int sum = 0;
double sumkg = 0;

class cat{
public:    double kg;
   
    void set(double k)
    {
        kg = k;
        
    }
    
    void show()
    {
        cout<<"重量:"<<kg<<"千克"<<endl;
    }
    
    
};



int main()
{
    int n;
    double sumkg;
    cout<<"请输入现有小猫的总数和总重量"<<endl;
    cin>>n>>sumkg;
    sum = n;
    sumkg = sumkg;
    
    n = 0;
    cout<<"新增加了多少只猫？"<<endl;
    cin>>n;
    if(n == 0){
        cout<<"无新增小猫."<<endl;
        cout<<endl;
        cout<<"现有小猫的信息如下:"<<endl;
        cout<<sum<<"只小猫的总重量是:"<<sumkg<<"千克";
        return 0;
    }
    cout<<"新增小猫的信息如下:"<<endl;
    cat *c = new cat[n];
    double kg;
    for(int i = 0;i < n;i++)
    {
        cin>>kg;
        sum ++;
        sumkg += kg;
        c[i].set(kg);
        c[i].show();
    }
    cout<<endl;
    cout<<"现有小猫的信息如下:"<<endl;
    cout<<sum<<"只小猫的总重量是:"<<sumkg<<"千克";
}