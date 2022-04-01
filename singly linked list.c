/*TASK
TO PERFORM THE LIST ADT OPERATIONS USING SINGLY LINKED LIST*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int element;
  struct node *Next;
};
typedef struct node Node;

int isempty(Node* List)
{
  if (List->Next==NULL)
    return 1;
  else
    return 0;
}

void Traverse (Node* List)
{
  if (!isempty (List))
    {
      Node *position;
      position = List;
      while (position->Next != NULL)
	    {
	       position = position->Next;
	       printf ("%d ", position->element);
	    }
    }
  else
     {
       printf ("Empty List \n");
     }
}

Node *Find (Node* List, int e)
{
  Node *position;
  position = List->Next;
  while (position->element != e && position != NULL)
    position = position->Next;
  return position;
}

void insertbegin (Node * List, int e)
{
  Node *NewNode = malloc(sizeof(Node));
  NewNode->element = e;
  if (isempty (List))
    {
      List->Next = NewNode;
      NewNode->Next = NULL;
    }
  else
    {
      NewNode->Next = List->Next;
      List->Next = NewNode;
    }
}

 void insertlast (Node* List, int e)
 {
    Node *NewNode = malloc (sizeof (Node));
    NewNode->element = e;
    if (isempty (List))
    {
	     List->Next = NewNode;
	     NewNode->Next = NULL;
    }
    else
    {
	     Node *position;
	     position = List;
	     while (position->Next != NULL)
	        position = position->Next;
	     position->Next = NewNode;
	     NewNode->Next = NULL;
     }
  }

 void insertmid (Node * List, int e, int p)
 {
    Node *NewNode = malloc (sizeof (Node));
    NewNode->element = e;
    if (isempty (List))
    {
	     List->Next = NewNode;
	     NewNode->Next = NULL;
    }
    else
    {
       Node *position;
       position = Find (List, p);
       NewNode->Next = position->Next;
       position->Next = NewNode;
    }
  }

  void deletebegin (Node * List)
  {
    if (isempty (List))
      printf ("Deletion cannot be performed\n");
    else
    {
	     Node *TempNode;
	     TempNode = List->Next;
	     List->Next = TempNode->Next;
	     printf ("Element deleted is %d \n", TempNode->element);
	     free (TempNode);
    }

 }

 void deletelast (Node * List)
 {
    if (isempty (List))
      printf ("Deletion cannot be performed\n");
    else
    {
	     Node *TempNode, *position;
	     position = List;
	     while (position->Next->Next != NULL)
	        position = position->Next;
	     TempNode = position->Next;
	     position->Next = NULL;
	     printf ("Element deleted is %d \n", TempNode->element);
	     free (TempNode);
    }
 }

Node *FindPrev (Node* List, int x)
{
    Node *position;
    position = List;
    while (position->Next != NULL && position->Next->element != x)
      position = position->Next;
    return position;
}

void deletemid (Node* List, int e)
  {
    Node *position;
    position = FindPrev (List, e);
    Node *TempNode;
    TempNode = position->Next;
    position->Next = TempNode->Next;
    printf ("Element deleted is %d \n", TempNode->element);
    free (TempNode);
  }

int main ()
{
  
    Node *List = malloc (sizeof(Node));
    List->Next = NULL;
    int e, p,ch;
    printf("1.Inserting an element at the beginning of the linked list\n2.Inserting an element at the ending of the linked list\n3.Inserting an element at the middle of the linked list\n4.Finding an element\n5.Deleting an element at the beginning\n6.Deleting an element at the last\n7.Deleting an element at the middle\n8.Traversing the list\n");
    do
    {
	  printf ("Enter choice ");
	  scanf("%d", &ch);
	  switch(ch)
	  {
	  case 1:
	    printf("Inserting an element at the beginning of the linked list\n");
	    printf("Enter the element: ");
	    scanf("%d", &e);
	    insertbegin (List, e);
	    break;

	  case 2:
	    printf("Inserting an element at the ending of the linked list\n");
	    printf("Enter the element: ");
	    scanf("%d",&e);
	    insertlast(List,e);
	    break;
	    
	  case 3:
	    printf("Inserting an element at the middle of the linked list\n");
	    printf("Enter the element: ");
	    scanf("%d",&e);
	    printf("Enter the position ");
	    scanf("%d",&p);
	    insertmid(List,e,p);
	    break;
	    
	  case 4:
	    printf("Finding an element\n");
	    printf("Enter the element: ");
	    scanf("%d",&e);
	    break;
	    
	  case 5:
	    printf("Deleting an element at the beginning\n");
	    deletebegin(List);
	    break;
	    
	  case 6:
	    printf("Deleting an element at the last\n");
	    deletelast(List);
	    break;
	    
	  case 7:
	    printf("Deleting an element at the middle\n");
	    printf("Enter the previous element: ");
	    scanf("%d",&e);
	    deletemid(List,e);
	    break;
	    
	  case 8:
	    printf("Traversing the list\n");
	    Traverse(List);
	    break;
	}
}while(ch<=8);
return 0;
}
