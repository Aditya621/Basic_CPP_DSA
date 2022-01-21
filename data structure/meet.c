#include<stdio.h>
int rtime() {
    int hh,mm;
    char c1,c2;
    scanf("%d:%d %c%c",&hh,&mm,&c1,&c2);
    if(c1=='P' && hh!=12){
     hh+=12;
    }
    if(c1=='A' && hh==12){
     hh=0;
    }
     return(hh*60+mm);
}
int main() {
    int t,mt,st,et,n,i;
    scanf("%d",&t);
    while(t--) {
        mt=rtime();
        scanf("%d",&n);
        for(i=0;i<n;i++){
        st=rtime();
        et=rtime();
        if(st<et) {
            if(mt>=st && mt<=et)
             printf("1");
             else
             printf("0");
            
        } else{
            if(mt<=st && mt>=et)
              printf("1");
              else
              printf("0");
            
            
        }
        }
        printf("\n");
    }
    
    
}
