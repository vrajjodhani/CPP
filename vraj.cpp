#include<iostream>
using namespace std;

class employee
{
    private:
    int c,d
    void detaisshow(int c1,int d1);

    public:
    int a,b;
    void printf()
    {
        cout <<"value a is"<<a<<endl;
        cout <<"value b is"<<a<<endl;
    }
};
void employee::detailshow(int c1,int d1)
{
    c=c1;
    c=d1;
}
 int main()
{
    employee detail;
    detail.detailshow(10,20);
    detail.a=10;
    detail.b=20;
    detail.print();

    return 0;
} 