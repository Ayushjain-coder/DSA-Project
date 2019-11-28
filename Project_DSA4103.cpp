#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<math.h>
#define n 10
int Arr[n];
using namespace std;

typedef struct node
{
   int info;
   struct node *left,*right;	
}NODE;

NODE *root=NULL,*temp=NULL,*cur=NULL;

NODE* make_node()
{
	cur=(NODE*)malloc(sizeof(NODE));
	cur->info=0;
	cur->left=NULL;
	cur->right=NULL;
	return cur;
}

int main()
{
	for(i=0;i<10;i++)
	{
	  printf("Enter the element\n");
	  scanf("%d",&Arr[i]);
	}
	int h=[log(n)]+1;
	complete_binarytree(h);	
}

