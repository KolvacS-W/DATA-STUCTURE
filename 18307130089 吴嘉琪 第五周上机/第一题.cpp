//
//  main.cpp
//  第五周上机
//
//  Created by 吴嘉琪 on 2019/10/21.
//  Copyright © 2019 吴嘉琪. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    
    ListNode(int x)
    { val=x;
      next=NULL;
        
    }

};


bool judge(int a,vector<int> b)   //判断元素是否重复的函数
{   int count=0;
    for(int i=0;i<b.size();i++)
    {  if(b[i]==a)
        {count =1; break;}
    }
    
    return (!count);

}



ListNode * process(ListNode * head)         //查重+排序的函数
{   ListNode *p,*q;
    ListNode *h2 =new ListNode (0);
    ListNode *head2 =new ListNode (0);
    ListNode *end=new ListNode(1000) ;
    end->next=NULL;
    h2->next=end;
    head2=h2;
    q=head;
    p=q->next;
    vector<int> del;
    int i,j,k,count=0;
    while(q->next!=NULL)
        
    {
        while(p!=NULL)
        {   if(q->val==p->val)
            {   del.push_back(p->val);               //重复元素记录在vector里
              
             break;
            }
        
         p=p->next;
        }
        
  
        
        q=q->next;
        
        p=q->next;
    
    }
    
    
 
    q=head;

    
    while(q!=NULL)                            //找出不重复的元素并排序
    {
        if(judge(q->val,del))
        {

        
            ListNode *r=new ListNode (q->val);            //注意：这里如果写r=q；则会让q和r同步变化！！！！！
               head2=h2;
                while(!(((h2->val<r->val))&&(h2->next->val>r->val)))
                {   h2=h2->next;
                
                
                }
            
                     if((((h2->val<r->val)&&((h2->next)->val>r->val))))
                     {    r->next=h2->next;
                            h2->next=r;
                            h2=head2;
                          
                     }
        }
        
        q=q->next;
        //cout<<"q"<<q->val<<endl;
    }
    
    
    return head2;
}



ListNode * input()   //输入函数
{  int count =0;
    char ch;
    ListNode *head=NULL;
    ListNode *p=NULL;
    while(1)
    { int a;
        cin>>a;
        if(count==0)
        {   head=new ListNode(a);
            p=head;
            count++;
            
            
        }
        
        else
        {   p->next=new ListNode(a);
            p=p->next;
            
            
            
        }
        
        if((ch=getchar())=='\n')
            break;
        
        
    }
    
    return head;
    
}




int main() {
      ListNode *head2,*head1;
    ListNode *head =new ListNode (0);
    ListNode *tail =new ListNode (0);
    
    head=input();                    //生成原始链表

    head2=process(head);             //处理
    head2=head2->next;
  
    
    while(head2->next!=NULL)         //输出结果
    {   cout<<head2->val;
        head2=head2->next;
        
        
    }
    
    cout<<"\n";
   
}
