#include <iostream>
#include <vector>
using namespace std;


template <typename T>

class Mystack{
public:
vector<int> Mydata;


void push(const T &value)
{
    Mydata.push_back(value);
}

void pop()
{

    if(!Mydata.empty())
    {
        Mydata.pop_back();
    }
}

T &top()
{

    if(! Mydata.empty())
    {
       return  Mydata.back();
    }
    else{
        cout<<"stack is empty";
    }
}

size_t size()
{
    return Mydata.size();
}


};


int main()
{
    Mystack <int> stack1 ;
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    stack1.push(40);
    stack1.push(50);
    stack1.push(60);
    stack1.push(70);



    cout<< "size of customized stack : " << stack1.size() << endl;

    cout << "top element of the stack : " << stack1.top() << endl;

     stack1.pop();

    cout<< "size of customized stack : " << stack1.size() << endl;

    cout << "top element of the stack : " << stack1.top() << endl;

     stack1.pop();

    cout<< "size of customized stack : " << stack1.size() << endl;

    cout << "top element of the stack : " << stack1.top() << endl;

    return 0;
}
