#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
 int data;
 node*next;
};

int main()
{
int c=1,j;
   node* root=(node*)malloc(sizeof(node));
   cin>>root->data;
   cout<<"Enter the Elements";
   node *p=root;
   for(int i=2;i<10;i++)
   {
      node *p1=(node*)malloc(sizeof(node));
      cin>>p1->data;
      p->next=p1;
      p=p1;
      c++;
   }
   p=root;
   for(j=1;j<c-3;j++)
   {
       p=p->next;

   }
   cout<<"Last la irundhu third Element"<<j;
}
