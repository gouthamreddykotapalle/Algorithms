#include<stdio.h>

main()
{
	char p[3]="ab";//same as {'a','b'}
	char *a =p;//cant assign single char or int, therofore it is used as an array totally(Hence, this is wrong)
	//so basically, a pointer points to a location ( all the rest of it is an advanced concept behind this which is spurned from this little concept)
	
	int i;
	printf("%d",&i);
}
