#include <stdio.h>
#include <stdlib.h>
#include <string>
#include<iostream>
#include <vector>
#include <ctype.h>

using namespace std;

int checkchar(string a,vector<char>b) //判断单个单词
{  char x,y;
   int i,j,check1=0,check2=0;
   for(i=0;i<a.size();i++)
   {  x=a[i];
       for(j=0;j<b.size();j++)
        { y=b[j];
         if(x==y)
         {check1=1; b.erase(b.begin()+j);}
         
        }    
      
          if(!check1)
           check2=1;

           check1=0;
    }
     if(check2==0)
     return 1; 

     else return 0;
}

int checkwords(vector<string >a,vector<char> b)//判断全部单词，输出数量
{   vector<char>b2=b;

   int i,j,count=0;
  for(i=0;i<a.size();i++)
   { if((checkchar(a[i],b)))
       {count+=(a[i].size());}
     b=b2;
   }


return count;
}


int main()
{ string word;
  vector<string> words;
  vector<char> chars;
  char a=' ';
 
while(a!='\n')
{  cin>>word;
   words.push_back(word);
   cin.get(a);
}


cin.get(a);

while(a!='\n')
   { chars.push_back(a);
     cin.get(a);
   }

   cout<<checkwords(words,chars)<<endl;

}



