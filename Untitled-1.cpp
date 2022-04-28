#include<iostream>
using namespace std;
class array
{
    int size ;int length;int *A;
    public:
    array(int arrsize)
    {
    size=arrsize;
    length=0;
    A=new int[arrsize];
    }
};


int main()
{
array A1(8);

cout<<array A1;
}