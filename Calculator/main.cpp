#include<iostream>
#include<stdlib.h>
#include<string>
#include<queue>
#include"Scan.h"
#include"Print.h"
using namespace std;
int judge(string input) 			//判断数字是否超过10位 
{
    int m=0,n= input.size(),k;                    
    for(k=0;k<n;k++)
    {
        if(input[k]!='-' && input[k]!='+' && input[k]!='*' && input[k]!='/' && input[k]!='(' && input[k]!=')')   //如果位数字m递增 
        {
            m++;
        }
    }
    return m;
}             

int main()
{
	int judge(string input);
    string input;
    cin >> input;					//输入字符串 
    if(judge(input)>10)				//数字超过10位，报错 
    {
        cout << "error"<< endl;
        return 0;                  
    }
    else                            //数字不超过10位
    {
        Scan sc;                      //实例化Scan的对象 
        Print pr;                    //实例化Print的对象 
        queue<string> getqueue= sc.ToStringQueue(input);        //调用ToStringQueue()函数
        pr.ToPrintQueue(getqueue);                                //调用ToPrintQueue()函数 
        return 0;
    }
}



