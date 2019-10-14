//
//  main.cpp
//  2-19
//
//  Created by 吴嘉琪 on 2019/10/14.
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
    ListNode<int> *create_circlelist(List<int>a,int n)//2-19要求的函数
    {ListNode<int> *newhead,*p;
        p=a.head;
        newhead->link=p;
        while(p->link!=NULL)
            p=p->link;
        p->link=a.head;
        
        newhead->data=n;
        
        return newhead;
        
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
{ List<int> in1;
    ListNode<int>*h1,*head;
    int n1,a;
    cin>>n1;
    h1=in1.Create_List(n1);
    in1.head=h1;
    output(h1);
    cout<<"\n";


    head=in1.create_circlelist(in1, n1);
     
   // output(head);
    //cout<<"\n";
    
}

