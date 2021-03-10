#include<header.h>

void main()
{
	int ev;
	printf("Enter the number of events\n");
	scanf("%d",&n);
	for(int i=1;i<=5;i++)
	{
		printf("Enter the events interested for module%d\n",i);
		init(i);
	}
	printf("Enter the event to find which are the modules interested in\t");
	scanf("%d",&ev);
	event(ev);
}
