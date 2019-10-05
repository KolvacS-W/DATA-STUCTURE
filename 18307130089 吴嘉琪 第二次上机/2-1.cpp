//
//  main.cpp
//  exam
//
//  Created by 吴嘉琪 on 2019/10/3.
//  Copyright © 2019 吴嘉琪. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include<iostream>
#include <vector>
//#include "Header.h"
using namespace std;



template <class Type> class List;
template <class Type> class ListNode {
    friend class List <Type>;
    public:
         ListNode() { link=NULL; }
    ListNode(const Type &item){link=NULL;}
        friend void out(List<int> a);
        friend void output(ListNode <Type> *head);

    private:
        Type data;
        ListNode <Type> *link;
};


template <class Type> class List {

    public:
    List(){head=tail=NULL;}
     List(const Type &value) { tail=head=new ListNode <Type> (value); }
    // ~List();                    不知道为什么出错，先去掉
    friend void out(List<int> a);
    //int Length( ) const;
    friend int main();
     ListNode <Type> * Create_List(int n)            //链表生成函数
    {
    ListNode<Type> *p, *q,*head;

    if (n==0)
    return NULL;
    head=new ListNode <Type> (NULL);
     p=head;
    for (int i=1; i<n; i++)
    {    cin>>p->data;
         q=new ListNode <Type> (NULL);
         p->link=q;
         p=q;
    }
    cin>>p->data;
     p->link=NULL;
     return head;

    };
 ////////////////////
    ListNode<Type>  *transfer( ListNode<int> *head )      //start  两两交换的函数
        
    {
        ListNode<int>  *pre, *n1,*n2,*end,*h;
        h=new ListNode<int> (NULL);
        h->link=head;
        pre=h;
        while((pre->link!=NULL)&&(pre->link!=NULL))
        { n1=pre->link;
            n2=n1->link;
            end=n2->link;
            pre->link=n2;
            n2->link=n1;
            n1->link=end;
            pre=n1;
            
        }
        ListNode<int> *h2;
        h2=h->link;
        delete h;
        return h2;
       
    };
    
////////////////////////////////////
    private:
     ListNode <Type> *head, *tail;
};





void output(ListNode<int> *head)            //链表输出函数
{
    while(head->link!=NULL)
     {cout<<(head->data);
      head=head->link;
     }
    cout<<head->data;
}



int main()
{  int n;
   ListNode<int> *h1,*h2;
   List<int> in,key;
   cin>>n;
  h2=in.Create_List(n);
    
    
  h1=in.transfer(h2);
   
    output(h1);
   

 
cout<<"\n";

return 0;
}



