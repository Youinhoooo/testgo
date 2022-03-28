#include<stdio.h>
#include<stdlib.h>
struct Stick{
	struct Stick* next;
	int j; 
};

struct Stick go(struct Stick *j){
	j->j = 9;
}
int main()
{
	struct Stick *p = (struct Stick*)malloc(sizeof(Stick));
	p->j = 0;
	go(p);
	printf("%d",p->j);
}
