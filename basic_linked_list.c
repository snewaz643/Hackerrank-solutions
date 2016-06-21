#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*BASIC LINKED LIST IMPLEMENTATION!*/

struct Node{

  int data;
  
  struct Node* link;

} Node_n;


int main(){

  Node_n* A;
  
  A = NULL;
  
  Node_n *tmp = (Node*)malloc(sizeof(Node));
  
  tmp->data = 2;
  
  tmp->link= NULL;
  
  A = tmp;

  Node_n* tmp = (Node*)malloc(sizeof(Node));
  
  tmp->data =4;
  
  tmp->link=NULL;
  
  Node_n* tmp1 = A;
  
  int i=0;
  
  While(tmp1->link != NULL){
  
       tmp1 = tmp1->link;
       
       i++;
  
  }
  i++;
  
  tmp1 -> link = tmp;
  
  Node_n* final_tmp = A;
  
  while(final_tmp->link!= NULL){
   
  	 final_tmp = final_tmp->link; 
  	  
     printf("[%d\n]",tmp1->data);
  
  }
  
 return 0;
 
}