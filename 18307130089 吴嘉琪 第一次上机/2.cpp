#include <stdio.h>
#include <stdlib.h>
#include <string>
#include<iostream>
#include <vector>
using namespace std;


int max(vector<int> w) /*寻找一组书数中的最大数*/
{ int i,temp;
  temp=w[0];
  for(i=1;i<w.size();i++)
  { if(w[i]>temp)
    { temp=w[i];
    }

  }

  return temp;

}



vector<int> find (int n,int k,vector<int> w)/*得到筛选后的数组*/
{ int x,i,count=0;
  vector<int> out;
  while(count<=k)
  {   x=max(w);
      for(i=0;i<w.size();i++)
      {  if(w[i]==x)
        break;
      }
    w.erase(w.begin()+i);
   out.push_back(x);
   count++;
   
  }

return out;
}


void output(vector<int> w)
{int x=w.size();
 int i;
 int count=0;
 for(i=0;i<x-1;i++)
  {cout<<w[i];
   cout<<" ";
  }
 

}


int main()
{   int n,k,i,x;
    vector<int> in,out;

    cin>>n;
    cin>>k;

   for(i=0;i<n;i++)
   { cin>>x;
       in.push_back(x);
   }

  out=find(n,k,in);

  output(out);


}

