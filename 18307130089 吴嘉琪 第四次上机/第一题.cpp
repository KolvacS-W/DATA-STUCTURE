//
//  main.cpp
//  第四周上机
//
//  Created by 吴嘉琪 on 2019/10/14.
//  Copyright © 2019 吴嘉琪. All rights reserved.
//

#include <iostream>
#include<string>

using namespace std;


bool judge(string x)
{  int a=0,i;
    for(i=0;i<x.size();i++)
    { a=10*a+int(x[i]-'0');
        
    }
    
   if(a<=255)
       return 1;
    
    else
        return 0;
    
}


void findip(string input)
{    string a,b,c,d;
     int i,j,k,m,n=1;
     //int count=0;

     a="";
     b="";
     c="";
     d="";
   
    
    for(i=0;i<3;i++)   //第一组
    {    a+=input[i];
        b="";
        c="";
        d="";
        
        
        for(j=1;j<=3;j++)   //第二组
        {   b+=input[i+j];
        
            
        
         }
        // cout<<"b"<<b<<endl;
        
        for(k=0;k<3;k++)      //第三组
            {
                c=c+input[i+j+k];
               
                
                d="";
                
                for(m=i+j+k+1;m<11;m++)  //第四组
                  {
                      d=d+input[m];
                                          
                  }
                
            //cout<<"a"<<a<<"b"<<b<<"c"<<c<<"d"<<d<<endl;   //输出现在的分组情况
                
                
                if(judge(a)&&judge(b)&&judge(c)&&judge(d))   //找出符合条件的ip地址
                                {
                                   cout<<a+"."+b+"."+c+"."+d<<endl;
                                         
                                }
                
            }
    
                   
        
            
    }
    
}
    
    
int main()
    { string input;
        cin>>input;
        findip(input);
        
      
        
    }
