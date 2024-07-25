void main()
{
	char p;
	int x;
	float r,s;
	p="w";
	x=100;
	r=1.150;
	s=2.220;
	printf("%c is stored at addr %d,\n",p,&p);
	printf("%d is stored at addr %d,\n",x,&x);
	printf("%f is stored at addr %d,\n",r,&r);
	printf("%f is stored at addr %d,\n",s,&s);
}
