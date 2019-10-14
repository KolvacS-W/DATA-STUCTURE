//
//  main.cpp
//  2-2
//
//  Created by 吴嘉琪 on 2019/10/4.
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
    friend int main();
    friend ListNode <int> * merge(List<int> a,List<int> b ,int n1,int n2);
    private:
        Type data;
        ListNode <Type> *link;
};


template <class Type> class List {

    public:
    List(){head=tail=NULL;}
     List(const Type &value) { tail=head=new ListNode <Type> (value); }
    ~List(){head=tail=NULL;}
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
    ListNode<int> * Get(int i,List<int> x) //得到指定节点的函数
    {    int j;
        
        ListNode<int> *p;
        p=x.head;
        for(j=1;p&&j<i;j++)
        {p=p->link;
            
        }
        
        return p;
        
            
    };
    
    ListNode <int> * merge(List<int> a,List<int> b ,int n1,int n2) //完成两个链表合并的函数
    {   int i=0,j=0;
        ListNode<int> *h,*x,*y,*head;
        h=new ListNode<int>(NULL);
        head=h;
        while(n1>0&&n2>0)
        {
            x=a.Get(n1,a);
            y=b.Get(n2,b);
            
            if((x->data)>=(y->data))
            { h->link=x;
                h=x;
                n1-=1;
            }
            else
            {h->link=y;
                h=y;
                n2-=1;
            
            }
        }
        
        if(n1>0)
            while(n1>0)
        {x=a.Get(n1,a);
            h->link=x;
            h=x;
            n1-=1;
            
        }
          else if(n2>0)
              while(n2>0)
              {y=b.Get(n2,b);
                  h->link=y;
                  h=y;
                  n2-=1;
              }
        h->link=NULL;
        delete h;
        return head;
    };
    
    
    
    
    
    
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
{ List<int> in1,in2,key;
    ListNode<int>*h1,*h2,*h,*head;
    int n1,n2;
    cin>>n1;
    h1=in1.Create_List(n1);     //输入第一个链表
    output(h1);
    cout<<"\n";
    cin>>n2;
    h2=in2.Create_List(n2);     //输入第二个链表
    output(h2);
    cout<<"\n";
    in1.head=h1;
    in2.head=h2;
    head=in1.merge(in1,in2,n1,n2);   //组合
    h=head->link;
    
    output(h);
    
    
    
}

