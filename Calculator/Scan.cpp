#include<iostream>
#include<string>
#include<queue>
#include "Scan.h"
using namespace std;

queue<string> Scan::ToStringQueue(string input)
{
    int n=input.size(),i;			//�������ַ����ĳ��� 
    string Input;					// �ݴ��ַ��� 
    queue<string> getinput; 		//�ַ�������Ķ��� 
    for(i=0;i<n;i++)                            //����ַ�ɨ��������ʽ
            {
                if(input[i]=='-' || input[i]=='+' || input[i]=='*' || input[i]=='/' || input[i]=='(' || input[i]==')')       //����Ϊ���� 
                {
                    if(Input!="")								//����ݴ��ַ����ǿ�
                    getinput.push(Input);                      //�������� 
                    Input.clear();                                 //����ݴ��ַ� 
                    Input = input[i];                           
                    if(Input!="")
                    getinput.push(Input);
                    Input.clear();
                }
                else                 								//��Ϊ����
                {
                    Input = Input + input[i];                        //���ָ����ݴ��ַ�ĩ�� 
                    continue;
                }
            }
    if(Input!="")
    {
       getinput.push(Input);                                        //������ɺ��ݴ��ַ����ǿ������
    }

    return getinput;                                                //���ش˶���
}

