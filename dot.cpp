#include <iostream>
#include<math.h>
using namespace std;
class Line;
class Point
{
    public:
    Point(float  x1,float  y1):x(x1),y(y1){};
    friend float  dist(const Point&,const Line &);
    private:
    float x;
    float  y;
};
class Line
{
    public:
    Line(float  a1,float  b1,float  c1):a(a1),b(b1),c(c1){};
    friend float  dist(const Point&t,const Line &t1);
    private:
    float  a;
    float  b;
    float  c;
};

float  dist(const Point&t,const Line &t1)
{
   float ans=(t1.a*t.x+t1.b*t.y+t1.c)/sqrt(t1.a*t1.a+t1.b*t1.b);
    ans = abs(ans);
    return ans;
}
int main()
{
   float  s1,s2,s3;
    cin>>s1>>s2;
    Point a3(s1,s2);
    cin>>s1>>s2>>s3;
    Line a4(s1,s2,s3);
    printf("The distance is: %.2f",dist(a3,a4));
    return 0;
}