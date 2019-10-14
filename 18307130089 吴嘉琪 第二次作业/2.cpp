#include <stdio.h>
#include <stdlib.h>
#include <string>
#include<iostream>
#include <vector>

using namespace std;
void find(vector<int>a)
{ int max,mini,i,j;
   max=mini=a[0];
   cout<<max<<endl;
  for(i=1;i<a.size();i++)
     { if(max<a[i])
            {max=a[i]; /*a.erase(a.begin()+i);*/}

            else if(mini>a[i])
             {mini=a[i];/*a.erase(a.begin()+i);*/}

     }
cout<<"max:"<<max<<"mini:"<<mini<<endl;


}


int main()
{ vector<int>list;
 int  a;
  
  cin>>a;
    list.push_back(a);
  while(cin.get()!='\n')
  { cin>>a;
    list.push_back(a);
    
  }
 
find (list);
return 0;

}


