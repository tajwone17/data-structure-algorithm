#include <stdio.h>
#include <stdlib.h>
#define MAX 10
char tree[MAX];
void root(char parent)
{
    tree[0] = parent;
}
void left(char child, int parent)
{
    tree[(2 * parent + 1)] = child;
}
void right(char child, int parent)
{
    tree[(2 * parent + 2)] = child;
}
void print (){
    int i;
    for(i=0;i<MAX;i++){
        if(tree[i]=='\0')
        printf(".");
        
        else
            printf("%c",tree[i]);
        
    }
}
int main()
{  
    root('A');
    left('B', 0);
    right('C', 0);
    left('D', 1);
    right('E', 1);

    print();
    return 0;
}