#include <stdio.h>
#include <stdlib.h>
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
	int menu;
	element data ;
	int t,n;
	initStack(&s);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d", &menu);
		switch(menu){
			case 1 :
				scanf("%d",&t);
				Push(&s,t);
				break;
			case 2 :
        		data = Pop(&s);
        		if(data)
				printf("%d\n", data);
				break;
      		case 3 :
      			printf("%d\n",s.top+1);
        		break;
        	case 4 :
        		printf("%d\n",isEmpty(&s));
        		break;
        	case 5 :
        		printf("%d\n",look(&s));
        		break;
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