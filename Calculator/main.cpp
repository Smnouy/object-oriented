#include<iostream>
#include<stdlib.h>
#include<string>
#include<queue>
#include"Scan.h"
#include"Print.h"
using namespace std;
int judge(string input) 			//�ж������Ƿ񳬹�10λ 
{
    int m=0,n= input.size(),k;                    
    for(k=0;k<n;k++)
    {
        if(input[k]!='-' && input[k]!='+' && input[k]!='*' && input[k]!='/' && input[k]!='(' && input[k]!=')')   //���λ����m���� 
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
    cin >> input;					//�����ַ��� 
    if(judge(input)>10)				//���ֳ���10λ������ 
    {
        cout << "error"<< endl;
        return 0;                  
    }
    else                            //���ֲ�����10λ
    {
        Scan sc;                      //ʵ����Scan�Ķ��� 
        Print pr;                    //ʵ����Print�Ķ��� 
        queue<string> getqueue= sc.ToStringQueue(input);        //����ToStringQueue()����
        pr.ToPrintQueue(getqueue);                                //����ToPrintQueue()���� 
        return 0;
    }
}



