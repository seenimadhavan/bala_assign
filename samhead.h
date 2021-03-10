struct module_str
{
        int modid;
        int eventbitmap;
        fptr fp;
        struct module_str *nxt;
}*head = NULL;

