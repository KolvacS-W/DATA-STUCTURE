//
//  2-2.cpp
//  exam
//
//  Created by 吴嘉琪 on 2019/10/4.
//  Copyright © 2019 吴嘉琪. All rights reserved.
//

#include "2-2.hpp"
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
    ListNode<Type>  *transferk( ListNode<int> *head,int k)      //start  两两交换的函数
        
    { ListNode<int> *h,*pre,*n1,*n2,*n3,*last,*end;
        h=new ListNode<int> (NULL);
        h->link=head;
        pre=h;
        int count=k/2,i=0;
        while(i<count+1)
        { n1=pre->link;
          n2=n1->link;
            n3=n1+k-2;
            last=n3->link;
            end=last->link;
            
            pre->link=last;
            n1->link=end;
            last->link=n2;
            n3->link=n1;
            pre=last;
            i++;
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
{ List<int> in,key;
    ListNode<int>*h1,*h2;
    int n,k;
    cin>>n;
    cin>>k;
    h1=in.Create_List(n);
    h2=in.transferk(h1, k);
    
    output(h2);
    
    
    
}
