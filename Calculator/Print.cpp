#include<iostream>
#include<string> 
#include<queue>
#include "Print.h"
using namespace std;

void Print::ToPrintQueue( queue<string> ToStringQueue)	//����õ��Ķ��� 
{
    
    int  n = ToStringQueue.size(),j;          //���еĳ��� 
    for(j=0;j<n;j++)             	
    {
        cout << ToStringQueue.front() <<endl;	//������е��׸�Ԫ�� 
         ToStringQueue.pop();   //�������еĵ�һ��Ԫ�� 
    }
}
