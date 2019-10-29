//
//  main.cpp
//  第四周上机2
//
//  Created by 吴嘉琪 on 2019/10/20.
//  Copyright © 2019 吴嘉琪. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int findmin(int a, int b)
{ int min=a;
    if(b<min)
        min=b;
   
    return min;
    
}


int finddistance(string a, string b)
{ int number[100][100];
    int x,y;
    x=a.size();
    y=b.size();
    int i,j;
    
    for(i=1;i<y;i++)
        number[i][0]=i;
    
    for(j=1;j<x;j++)
           number[0][j]=j;
    
    for(i=1;i<y;i++)
    {   for(j=1;j<x;j++)
        {   number[i][j]=findmin(findmin(number[i-1][j]+1,number[i][j-1]+1),(a[j-1]==b[i-1]?number[i-1][j-1]:number[i-1][j-1]+1));

        }
        
      
        
        
    }
    
    
    
    
    return number[y-1][x-1];
}


int main()

{   string a,b;
    cin>>a;
    cin>>b;
    int s=finddistance(a, b);
    cout<<s;
    
    
    
    
    
}
