//
//  main.cpp
//  第五周上机2
//
//  Created by 吴嘉琪 on 2019/10/22.
//  Copyright © 2019 吴嘉琪. All rights reserved.
//

#include <iostream>
#include<string>
#include <vector>
using namespace std;

int find(string a)       //找到最长回文子串长度的函数
{   int i,j;
    int len=a.size();
    i=0;
    j=len-1;
    int match=0;
 
  
        while(i<=j)
        {
            if(a[i]==a[j])
            {
                if(i!=j)                       //记录回文子串长度
                match+=2;
                else if(i==j)
                    match+=1;
                
               //cout<<"match"<<match<<endl;
                if(a[i+1]==a[j-1])              //首位对称移动
                {i++;j--;continue;}
                
            }
            
                else
                    match=0;
            
            
            if(a[i+1]==a[j])               //不对称移动：i++
            
                {   i++;
                    if(a[j+1]==a[i])       //判断另一端是否需要回去
                        j++;
                    match=0;
                    //cout<<"i++"<<endl;
                }
            
              else
                {   if(a[i]==a[j-1])         //不对称移动:j--
                    {
                        j--;
                        if(a[i-1]==a[j])       //判断另一端是否需要回去
                            i--;
                        match=0;
                        //cout<<"j--"<<endl;
                    }
                        else
                        {       i++;                 //如果什么都没匹配到，首位缩减
                                j--;
                           // cout<<"i++j--"<<endl;
               
                        }
                }
        }
        

            return match;
    
    
}



int main()
{  string in1,in2,in3;
    int n;
    cin>>n;
    cin>>in1;
    cin>>in2;
    cin>>in3;
    
    

    
    cout<<find(in1)<<endl;
    cout<<find(in2)<<endl;
    cout<<find(in3)<<endl;
    
    
    
    
}
