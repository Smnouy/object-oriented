#include<iostream>
#include<string>
#include<queue>
#include "Scan.h"
using namespace std;

queue<string> Scan::ToStringQueue(string input)
{
    int n=input.size(),i;			//求输入字符串的长度 
    string Input;					// 暂存字符串 
    queue<string> getinput; 		//字符所存入的队列 
    for(i=0;i<n;i++)                            //逐个字符扫描这个表达式
            {
                if(input[i]=='-' || input[i]=='+' || input[i]=='*' || input[i]=='/' || input[i]=='(' || input[i]==')')       //若不为数字 
                {
                    if(Input!="")								//如果暂存字符串非空
                    getinput.push(Input);                      //则存入队列 
                    Input.clear();                                 //清除暂存字符 
                    Input = input[i];                           
                    if(Input!="")
                    getinput.push(Input);
                    Input.clear();
                }
                else                 								//若为数字
                {
                    Input = Input + input[i];                        //数字跟在暂存字符末端 
                    continue;
                }
            }
    if(Input!="")
    {
       getinput.push(Input);                                        //遍历完成后暂存字符串非空则入队
    }

    return getinput;                                                //返回此队列
}

