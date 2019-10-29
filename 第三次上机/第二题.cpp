//
//  main.cpp
//  第三周上机
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
    
    /*template <class Type> bool add(int i,Type x)
    { //将新元素x插入到第i结点之前
        //其中i是结点编号，从0开始计数
        ListNode<Type> *p, *q;
        int j=0;
        p=head;
        q=new ListNode <Type> (x, NULL);
        
    
    while (p!=NULL && j<i-1)
    { //循链找第i-1个结点
    p=p->link;
        j++;
    }
    if (p==NULL && head!=NULL)
    { //非空表且链短，找不到第i-1个结点
       cout<<"Invalid position for Insertion!\n";
       return 0; //插入失败，返回0
    }
    if (head==NULL||i==0)
    { //将新结点插入至空表或非空表第一个结点之前
       q->link=head; //原表首结点成为新结点的后继结点
        if (head==NULL)
        tail=q;
        
        head=q; //新结点q成为表首结点 }
        else
        { //将新结点插入至链表中间或者表尾 q->link=p->link;
             if (p->link==NULL)
            tail=q; //如果插入新结点至表尾
        }
            p->link=q;//则修改表尾指针指向新结点
            return 1; //插入成功，返回1
        
    }
 };*/
    
    bool add(Type x)
    {  ListNode<Type> *p,*q;
        p=new ListNode<Type>();
        p->link=head->link;
        head->link=p;
         p->data=x;
        
        q=head;
        
        int i=0;
        while(q!=NULL)
            { q=q->link;
                i++;
            }
        if(i<=100)
        return 1;
           else
               return 0;
      
    
    };
    
    
   bool remove(Type x)
    {   ListNode<Type> *p,*q;
        p=head;
        int a=0;
        while(p->link!=NULL)
         { if((p->link)->data==x)
            {p->link=p->link->link;
               a=1;
         }
             else
                 p=p->link;
             
         }
        if(a)
            return true;
        else
            
            return false;
        
    };
    
    bool find(Type x)
    {   ListNode<Type> *p,*q;
        int a=0;
        while(p->link!=NULL)
         { if((p->link)->data==x)
            {
               a=1;
            }
             else
                 p=p->link;
             
         }
        if(a)
            return 1;
        else
            
            return 0;
    };
    
    void printList(List<Type> a)
    {    ListNode<Type> *p;
         p=a.head;
        while(p!=NULL)
        {  cout<<p->data;
            p=p->link;
            
        }
        
        
        
    };
    
        
    private:
     ListNode <Type> *head, *tail;
};






int main()
{ List<int> in;
    ListNode<int>*head;
    int n;
    cin>>n;
    
    head=in.Create_List(n);
    in.head=head;
    
    in.add(2);
    
    in.remove(3);
    in.find(2);

    in.printList(in);
    
    
   
    
    
}

