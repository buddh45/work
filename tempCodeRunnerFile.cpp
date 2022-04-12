#include <iostream>
#include <string>
using namespace std;
class client;
class address
{
     string shen,shi,dizhi,youzheng;
 public:    address(string a,string b,string c,string d):shen(a),shi(b),dizhi(c),youzheng(d){};
    friend void show(address a,client c);
};
class client
{
     static int i;
     string name,shenfen;
     public:address ad;
    client(string a,string b,string c,string d,string e,string f):ad(c,d,e,f)
    {
       if(b.length() == 18 && b.substr(6,4) < "2025" && b.substr(6,4) > "1900" && b.substr(10,2) <= "12" && b.substr(10,2) >= "01" && b.substr(12,2) >= "01" && b.substr(12,2) <= "31"){
           name = a;
           shenfen = b;
            i = 1;
       }
        
    }
     friend void show(address a,client c);
    
};

int client::i = 0;

void show(address a,client c)
{
    if(client::i == 1){
   cout<<"****************************************************"<<endl;
    cout<<"客户姓名:"<<c.name<<endl;
    cout<<"身份证号码:"<<c.shenfen<<endl;
    cout<<"出生日期:"<<c.shenfen.substr(6,4)<<"年"<<c.shenfen.substr(10,2)<<"月"<<c.shenfen.substr(12,2)<<"日"<<endl;
    cout<<"客户地址:"<<a.shen<<"省"<<a.shi<<"市"<<a.dizhi<<" 邮编:"<<a.youzheng<<endl;
    cout<<"****************************************************";}
    else{
        cout<<"非法身份证号码.";
    }
}

int main()
{
    string a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    client cc(a,b,c,d,e,f);
    show(cc.ad,cc);
    return 0;
}
