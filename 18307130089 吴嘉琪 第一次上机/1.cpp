#include <stdio.h>
#include <stdlib.h>
#include <string>
#include<iostream>
#include <vector>
using namespace std;



vector<char> find2 (vector<char> w)

  { 
      
      
      char a='x',b; 
      cin.get(b);
      w.push_back(b);
      a=b;

      while(a!='\n')
      {cin.get(a);
   
       int x=w.size();
       int y=0,i;
       for(i=0;i<x;i++)   /*检验是否重复*/
       {if(a==w[i])
         y=1;
       
       }
         if(y==0)
          {b=a;
           w.push_back(b); 
          
          }
       
       }
      
return w;

  }



int output(vector<char> w)  /*输出不重复的字母和字母数量*/
{int x=w.size();
 int i;
 int count=0;
 for(i=0;i<x-1;i++)
  {cout<<w[i];
   count++;}
   return count;

}





int main()
{  vector<char> words;
  

   words=find2 (words);


   int size=output(words);
   cout<<"\n";
 
   cout<< size<<endl;

}