#include <iostream>
#include<thread>
#include<mutex>
#include<algorithm>
using namespace std;

mutex m;
 int number = 0;
 void fun1(int num)
{
    lock_guard <mutex> lg (m);
    if(num == 0)
    {
        for(int i=1;i<=20;i++)
        {
           if(i%2 == 0)
            cout<< i << " ";
        }
        cout<<"\n";
    }
    if(num == 1)
     lock_guard <mutex> lg(m);
        for(int i=1;i<=20;i++)
        {
           if(i%2 != 0)
            cout<< i << " ";
        }

}


int main()
{
   thread th1(fun1,0);
    thread th2(fun1,1);
    th1.join();
    th2.join();
    return 0;
}
