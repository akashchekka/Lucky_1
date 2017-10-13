int killg(node *first)
{
node *t1,*t2,*temp;
t1=first;
t2=first->next;
while(t1!=t2)
{
	t1->next=t2->next;
	t1=t1->next;
	t2=t1->next;	
}
return (t1->data);
}