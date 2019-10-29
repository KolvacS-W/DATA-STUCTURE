//
//  main.cpp
//  上机3
//
//  Created by 吴嘉琪 on 2019/10/14.
//  Copyright © 2019 吴嘉琪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{   vector<int> a;
    vector<int> temp;
    vector<int> b;
    int k,i,n;
    cin>>n;
    a.push_back(n);                     //输入向量
    while(cin.get()!='\n')
    {   cin>>n;
       a.push_back(n);
        
    }
    
    cin>>k;
    
    
         
    int j;
    
      if(k%2)
      {   for(i=0;i<=a.size()-k;i++)           //k为奇数
          {for( j=i;j<k+i;j++)
              {temp.push_back(a[j]);}
              sort(temp.begin(),temp.end());
              b.push_back(temp[k/2]);
              
                  temp.clear();
          }
      }
      else{                                    //k为偶数
            for(i=0;i<=a.size()-k;i++)
              {for( j=i;j<k+i;j++)
                  {temp.push_back(a[j]);}
                 sort(temp.begin(),temp.end());
                 b.push_back((temp[k/2-1]+temp[k/2])/2);
              
                  temp.clear();
              }
              
          }
    
    for(i=0;i<b.size();i++)                //输出结果
         cout<<b[i];
    cout<<"\n";
}
