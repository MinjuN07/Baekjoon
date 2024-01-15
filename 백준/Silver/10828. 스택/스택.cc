#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STACK_SIZE 1000000
typedef int element;
typedef struct {
	element data[STACK_SIZE];
	int top = -1;
}Stack;
Stack s;
int isEmpty( Stack *s );
void Push( Stack *s, element data );
int Pop( Stack *s );
int look(Stack *s);
void initStack(Stack* s );


int main(){
	char menu[11];
	element data ;
	int t,n;
	initStack(&s);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s", menu);
		if((strcmp(menu,"push") == 0)){
			scanf("%d",&t);
			Push(&s,t);
		}
		else if((strcmp(menu,"pop") == 0)){
			data = Pop(&s);
			printf("%d\n", data);
		}
		else if((strcmp(menu,"size") == 0)){
			printf("%d\n",s.top+1);	
		}
		else if((strcmp(menu,"top") == 0)){
			printf("%d\n",look(&s));
		}
		else{
			printf("%d\n",isEmpty(&s));
		}
	}
}
void initStack(Stack *s){
	 s->top = -1;
}
int isEmpty(Stack *s){
	return s->top == -1;
}
void Push(Stack *s,element data){ 
	s->data[++s->top] = data;
}
element Pop(Stack *s){
	if(isEmpty(s))
		return -1;
	else
		return s->data[s->top--];
}
element look(Stack *s){
	if(isEmpty(s))
		return -1;
	else
		return s->data[s->top];
}