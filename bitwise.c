# include<stdio.h>
struct point{
    int x;
    int y;
    };
    struct point origin ,*pp;
    main(){
    pp=&origin;
    printf("(%d  %d )",(*pp).x,pp->y )};
