
#include <stdio.h>


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
ListNode<int> * reserve (List<int> a)  //把链表逆转的函数
    { ListNode<int> *x,*y,*z;
        x=a.head;
        y=x->link;
        x->link=NULL;
        while(x!=NULL&&y!=NULL&&z!=NULL)
        {
            z=y->link;
            y->link=x;
          
            x=y;
            y=z;
        }
        
        return x;
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
{ List<int> in,out,key;
    ListNode<int>*h1,*h2,*h,*head;
    int n;
    cin>>n;
    h1=in.Create_List(n);
    in.head=h1;
    h2=in.reserve(in);
    
    output(h2);
    
    
    
}
