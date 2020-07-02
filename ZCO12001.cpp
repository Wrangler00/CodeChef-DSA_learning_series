#include <stdio.h>

int main() {
	int n;
    scanf("%d",&n);
    int val,a1=0,a2,b1=0,b2,b4=0,tmp,bal = 0,once = 0;
    
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        
        if(val==1)
            ++bal;
        else
            --bal;
            
        if(bal>a1){
            a1=bal;
            a2=i;
        }
        
        if(bal==1 && !once){
            tmp=i;
            once=1;
        }
        ++b4;
        
        if(bal==0){
            if(b4>b1){
                b1=b4;
                b2=tmp;
            }
            b4=0;
            once=0;
        }
    }
    
    printf("%d %d %d %d",a1,a2+1,b1,b2+1);
	return 0;
}

