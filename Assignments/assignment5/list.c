/************************************************************
project:list.c
name: Wei Huang
date: 6/10/2018
describtion: test for linked list in c
input: number, head, a ,  n
output: the result of each function
************************************************************/
#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int length(struct node* head){
  struct node* temp = head;
  int length = 0;
  while(temp != NULL){
    length++;
    temp = temp->next;
  }
  return length;
}
void print (struct node* head, int a){
	while (head!=NULL){
		printf(" %d ", head->val);
		head = head->next;
	}

}

struct node* push(struct node * head, int n){
  struct node *temp = malloc(sizeof(struct node));
  temp ->val = n;
  temp->next = head;
  head = temp;
  return head;
}


struct node* append(struct node* head, int n){
  struct node* temp1 = malloc(sizeof(struct node));
  struct node* temp2 = head;
  temp1->val = n;
  temp1->next =NULL;
    if(temp2==NULL){

      temp2 = temp1;
      head = temp2;
      return head;
    }else{

      while(temp2->next != NULL){
        temp2=temp2->next;
      }
      temp2->next = temp1;
    }

  return head;
}

struct node* clear(struct node* head){
  struct node* temp;
  while(head != NULL){
    temp =head;
    head = head ->next;
    free(temp);
  }
  return head;
}

struct node* remove_node(struct node* head, int value){
  struct node* current =head;
  struct node* temp =NULL;
  while(current!=NULL){
    if(current->val == value){
      break;
    }
    temp = current;
    current = current->next;
  }
  if(temp==NULL){
    //
    head = head->next;
  }else{
    temp ->next = current->next;
  }
  free(current);
    return head;
  }

struct node* sort_ascending(struct node* head){
  struct node *temp1 = head, *i, *j, *next_i;
 for(i = temp1; i!=NULL && i->next!=NULL; i=i->next)
 {
     struct node *min;
     min = i;
     for(j = i->next; j!=NULL ; j=j->next)
     {
         if(j->val < min->val)
             min=j;
     }
     if(min!=i)
     {
         int temp;
         temp = min->val;
         min->val = i->val;
         i->val = temp;
     }
 }
 head = temp1;
 return head;
}

struct node* sort_descending(struct node* head){
  struct node* temp2 = head, *i, *j, *next_i;
   for(i = temp2; i!=NULL && i->next!=NULL; i=i->next)
   {
       struct node *max;
       max = i;
       for(j = i->next; j!=NULL ; j=j->next)
       {
           if(j->val > max->val)
               max=j;
       }
       if(max!=i)
       {
           int temp;
           temp = max->val;
           max->val = i->val;
           i->val = temp;
       }
   }
   head = temp2;
  return head;
}

struct node* insert_middle(struct node *head, int p ,int n ){
  if(p<=0){
    head=push (head, n);
    return head;

  }
  else if(p >=length(head)){
    head=append(head,n);
    return head;
  }
  struct node* A = (struct node*)malloc(sizeof(struct node));
  struct node* temp = head;
  A->val = n;
  A->next =NULL;
  if (temp==NULL && p==0) {
    A->next =temp;
    temp = A;
    return NULL;
  }
  int i;
  for(i=0; temp !=NULL&&i<= p; i++){
    if(i== p-1){
      A->next = temp ->next;
      temp->next =A;
    }else{
      temp =temp->next;
    }
  }

  return head;
}
