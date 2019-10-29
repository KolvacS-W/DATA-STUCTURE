//
//  main.cpp
//  第四次作业11
//
//  Created by 吴嘉琪 on 2019/10/20.
//  Copyright © 2019 吴嘉琪. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

void Del(char* s,char ch)   //删除某个字符并输出结果字符串的函数

{   string x;
    string out;
    x=s;
    int i;
    for(i=0;i<x.size();i++)
    {if (x[i]!=ch)
        cout<<x[i];
        
        
        
    }
    cout<<"\n";
    
    
    
}


int main()
{   string in;
    
    char del;
    cin>>in;
    cin>>del;
    
    Del(&in[0],del);
    
    
    
    
    
    
}
