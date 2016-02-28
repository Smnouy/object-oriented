#include<iostream>
#include<string> 
#include<queue>
#include "Print.h"
using namespace std;

void Print::ToPrintQueue( queue<string> ToStringQueue)	//输出得到的队列 
{
    
    int  n = ToStringQueue.size(),j;          //队列的长度 
    for(j=0;j<n;j++)             	
    {
        cout << ToStringQueue.front() <<endl;	//输出队列的首个元素 
         ToStringQueue.pop();   //弹出队列的第一个元素 
    }
}
