//
//  main.cpp
//  3-2
//
//  Created by 吴嘉琪 on 2019/10/13.
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
    
    void deleteNode(ListNode<int>* node)  //删除某节点的函数
    {
            
            ListNode<int>* cur=node->link;
            node->data=cur->data;
            node->link=cur->link;
    };
   
    
    
    
    void  deleteformer(List<int> a,int n) //删除某个值的前一个节点
    { ListNode<int> *h, *pre,*last;
        int i;
        h=a.head;
        while(h!=NULL)
        {   if((h->link)->data!=n)
            h=h->link;
              else
              {deleteNode(h);
                  break;
              }
        }
        
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
    ListNode<int>*h1;
    int n1,a;
    cin>>n1;
    h1=in1.Create_List(n1);
    in1.head=h1;
    output(h1);
    cout<<"\n";

    cin>>a;
    in1.deleteformer(in1,a);
    
     
    output(h1);
    cout<<"\n";
    
}

