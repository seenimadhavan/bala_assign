#include<header.h>

void module1()
{       
	        printf("Inside module 1\n");
}       

void module2()
{       
	        printf("Inside module 2\n");
}

void module3()
{       
	        printf("Inside module 3\n");
}

void module4()
{
	        printf("Inside module 4\n");
}

void module5()
{
	        printf("Inside module 5\n");
}

void init(int num)
{
        int eve, event = 0;
        fptr fp;
        for(;;)
        {
                printf("Events must between 1 and %d press any other to exit from module\t",n);
                scanf("%d",&eve);
                if(eve >= 1 && eve <= n)
                        event = bitmapping(event,eve);
                else
                        break;
        }
        if(num == 1)
                fp = module1;
        else if(num == 2)
                fp = module2;
        else if(num == 3)
                fp = module3;
        else if(num == 4)
                fp = module4;
        else
                fp = module5;
        reg_event(num, event, fp);
        return;
}

