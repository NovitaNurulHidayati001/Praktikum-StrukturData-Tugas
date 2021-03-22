#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node {
	int koef;
	int exp;
	struct node *next;
};


struct node *GetNode(){
	struct node *p;
	p = (struct node *)malloc (sizeof(struct node));
	return p;
}

InsBeg (struct node **list, int c, int e){
	struct node *temp;
	temp = GetNode();
	temp -> koef = c;
	temp -> exp = e;
	temp -> next = *list;
	*list = temp;
}

InsEnd (struct node **list, int c, int e){
	struct node *temp, *p;
	temp = *list;
	if (*list == NULL)
		InsBeg (&(*list) ,c ,e);
	else{
		while (temp -> next!= NULL)
			temp = temp ->next;
			
			p=GetNode();
			p->koef = c;
			p -> exp = e;
			p -> next = NULL;
			temp -> next = p;
	}
}

Traverse (struct node *list){
	struct node *t;
	t = list;
	while(t!=NULL){
		printf ("\t %dx^%d +", t->koef, t ->exp);
		t=t -> next;	
	}	
}

struct node *AddPolinomial (struct node *poli1, struct node *poli2){
	struct node *poli3 = NULL;
	struct node *p, *q;
	p = poli1;
	q = poli2;
	
	while (p!=NULL&&q!=NULL){
		
		if (p->exp == q -> exp){
			InsEnd(&poli3, p->koef+q->koef, p->exp);
			p=p->next;
			q=q->next;
		}else{
			if (p->exp > q -> exp){
			InsEnd(&poli3, p->koef, p->exp);
			p=p->next;
			
		}else{
			InsEnd(&poli3, q->koef, q->exp);
			q=q->next;
			}
		}
	
	}
	while(p!=NULL){
		InsEnd(&poli3, p->koef,p->exp);
		p=p->next;
	}
	while(q!=NULL){
		InsEnd(&poli3, q->koef,q->exp);
		q=q->next;
	}
	return poli3;
}

int main (){
	struct node *start1, *start2, *start3;
	start1 = NULL;
	start2 = NULL;
	start3 = NULL;
	
	
	int x;
	
	InsEnd(&start1, 6, 8);
	InsEnd(&start1, 8, 7);
	InsEnd(&start1, 5, 5);
	InsEnd(&start1, 1, 3);
	cout << "\nPolinomial 1 / P1: ";
	Traverse (start1);
	cout << " 15";
	
	InsEnd(&start2, 3, 9);
	InsEnd(&start2, 4, 7);
	InsEnd(&start2, 3, 4);
	InsEnd(&start2, 2, 3);
	InsEnd(&start2, 2, 2);
	cout<<"\n \n";
	cout << "\nPolinomial 2 / P2 : ";
	Traverse (start2);
	cout << " 10";
	
	InsEnd(&start3, 1, 2);
	cout<<"\n \n";
	cout << "\nPolinomial 3 / P3 : ";
	Traverse (start3);
	cout << " 5";
	
}
