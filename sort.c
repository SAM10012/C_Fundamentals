void sort()
{
	struct student *s=head,*o;
	int ret,flag=0,i;
	while(s!=NULL)
	{
		o=s;
		s=s->next;
		for(i=0;o->name[i]!='\0' && s->name[i]!='\0';i++)
		{
		
		ret=strcmp(o->name[i],s->name[i]);
		
		if(ret>0)
		{
			strcpy(s->name,o->name);
			flag=1;
			break;
		}
	
	if(flag==1)
	break;
	}

}
	
	
