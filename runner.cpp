#include <iostream>
using namespace std;


class Runner{
 public:   
    
    void set(string n,double s)
    {
        name = n;
        score = s;
    }
    
    void show()
    {
        cout<<name<<" "<<score;
    }
    
    string name;double score;
};

void swap(Runner& r1,Runner& r2)
    {
        Runner tem = r1;
        r1 = r2;
        r2 = tem;
    }

int main(){
    int n;
    cout<<"请输入运动员人数";
    cin>>n;
    string name;
    double score;
    Runner *runner = new Runner[n];
    for(int i = 0;i < n;i++)
    {
        cout<<"请输入第"<<i + 1<<"名运动员的名字和成绩";
        cin>>name>>score;
        runner[i].set(name,score);
    }
    int max = 0;
    int min = 0;
    
     for(int i = 1;i < n;i++){
     if(runner[i].score > runner[min].score)
        {
            min = i;
        }
     }
    swap(runner[n-1],runner[min]);
    for(int i = 0;i < n-1;i++)
    {
        if(runner[i].score < runner[max].score)
        {
            max = i;
        }
    }
    swap(runner[max],runner[0]);
    cout<<"他们的名字和成绩经过排序后是";
    for(int i = 0;i < n-1;i++)
    {
        runner[i].show();
        cout<<endl;
    }
    runner[n-1].show();
    return 0;
}