//
//  main.cpp
//  test01
//
//  Created by 吴嘉琪 on 2019/9/2.
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
    
    ListNode <int> * circle(List<int> a,int n) //判断是否有环的函数
    { ListNode<int> *x,*y,*answer,*u;
        int judge=0; int j;
        x=a.head;
        y=x;
        for(int i=0;i<n-1;i++)
        { while(j<n-1&&y!=NULL)
            {  if((y->link!=x))
                 { y=y->link;}
                     else
                     { judge=1;
                       answer=x;
                     }
                j++;
            
            }
            x=x->link;
        }
        
        if(judge)
            return answer;
        else
            
            cout<<"not found"<<endl;
        
             return 0;
        
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
    ListNode<int>*h1,*h2,*h,*p;
    int n1,n2;
    cin>>n1;
    h1=in1.Create_List(n1);     //输入第一个链表
    output(h1);
    cout<<"\n";
    
    
    in1.head=h1;
    in2.head=h2;
    p=in1.circle(in1,n1);   //组合
   

    
    
    
}

