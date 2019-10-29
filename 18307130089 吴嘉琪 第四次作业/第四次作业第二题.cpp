//
//  main.cpp
//  第四次作业22
//
//  Created by 吴嘉琪 on 2019/10/19.
//  Copyright © 2019 吴嘉琪. All rights reserved.
//

#include <iostream>
#include <string.h>
#include<string>

using namespace std;

char firstfindsingle(char *str)
{   string a;
    a=str;
    int count=0;
    char answer;
    int lenth=0;
    
   
for(int i=0;i<a.size();i++)
    {   for(int j=i+1;j<a.size();j++)    //找到第一个不同的字符的函数
        {if(str[i]==str[j])
            count=1;
           
            
        }
        if(!count)
            {
                answer=str[i];
                
                break;
            }
        count =0;
       
    }


return answer;

    
    
    
}


int main()
{ string input;
    cin>>input;               //输入初始字符串
    
    char * head=&input[0];
    
    char answer;
    
    answer=firstfindsingle(&input[0]);
    
    cout<<answer<<endl;
    
    
}

