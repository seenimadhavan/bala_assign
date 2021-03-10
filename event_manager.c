#include<header.h>
#include<samhead.h>

void reg_event(int num, int event, fptr fp)
{
	struct module_str *tmp,*t;
	tmp=(struct module_str *)malloc(sizeof(struct module_str));
	t = head;
	if(t == NULL)
	{
		tmp->modid = num;
		tmp->eventbitmap = event;
		tmp->fp = fp;
		tmp->nxt = NULL;
		head = tmp;
	}
	else
	{
		while(t->nxt != NULL)
			t = t->nxt;
		tmp->modid = num;
		tmp->eventbitmap = event;
		tmp->fp = fp;
		t->nxt = tmp;
		tmp->nxt = NULL;
	}
}

void event(int eve)
{
        struct module_str *tmp = head;
        int t = 0;
        while(tmp != NULL)
        {
                t = ((tmp->eventbitmap >> (eve - 1)) & 1);
                if(t != 0){
                        tmp->fp();
                }
                tmp = tmp->nxt;
        }
}

