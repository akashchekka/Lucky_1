
node *create(node *first)
{
int b,i;
node *prev,*temp;
printf("Enter number of players");
scanf("%d",&b);
for(i=1;i<=b;i++)
{
	temp=(node*)malloc(sizeof(node));
	temp->data=i;
	temp->next=NULL;
	if(first==NULL)	
	{
		first=temp;
		prev=temp;
	}
	else
	{
		prev->next=temp;
		prev=temp;	
	}
	}	
	prev->next=first;
	return first;
}