//
//  main.cpp
//  3.7
//
//  Created by 吴嘉琪 on 2019/10/20.
//  Copyright © 2019 吴嘉琪. All rights reserved.
//



//总结：像这次题目中的c与answer字符串，size（）默认为0，哪怕赋值后，直接使用size（）会出错！！！

#include <iostream>
#include<string>

using namespace std;

void findlongest(string a, string b)   //找两个字符串最大公共子串的函数
{   string c;
    string answer;
    int i=0,j=0,k=0,l=0;
    int count=0;
    int lastcount=0;
    for(i=0;i<a.size();i++)
    {
        for(j=0;j<b.size();j++)
        {
            if(a[i]==b[j])
            {
                while((b[j+k]==a[i+k])&&(j+k)<b.size()&&(i+k)<a.size()) //开始遍历两个字符串
                {
                    count++;
                    c[l]=a[i+k];
                    
                    k++;
                    l++;
                
                }
  
                l=0;
                k=0;


            
            if(count<lastcount)               //讨论这次的子串是不是比上次更大，如果是，更新子串
               
                count=0;
                
                else
                {   for(int y=0;y<count;y++)
                    {
                        answer[y]=c[y];
                    }
                    
                    lastcount=count;
                    count=0;
                    
                    
                }

            }
        }
            
    
    }
    for(i=0;i<lastcount;i++)                 //输出找到的最大子串
        cout<<answer[i];
    cout<<"\n";
}


int main()
{   string in1;
    string in2;
    cin>>in1;
    cin>>in2;
   
  findlongest(in1,in2);
    

}
