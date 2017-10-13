struct cll
{
	int data;
	struct cll *next;
};
typedef struct cll node;
node *create(node *first);
int killg(node *first);
int main()
{
	node *head=NULL;
	int a;
	head=create(head);
	a=killg(head);
	printf("Winner is %d",a);
	return 0;
}