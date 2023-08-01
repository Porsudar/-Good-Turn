#include <stdio.h>

int main(void) {
    int a;
    scanf("%d",&a);
    while(a--){
        int x,y;
        scanf("%d %d",&x,&y);
        if(x+y>6){
            printf("YES\n");
        }
        else {
            
            printf("NO\n");
        }
    }
    
	return 0;
}

