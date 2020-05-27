#include<stdio.h>

void copy_str(char* from, char* to) {
	while (*from != '\0')
	{
		*to = *from;
		to++;
		from++;
	}
	*to = '\0';

}

int main() {
	char* a = "I can do it";
	//char a[20] = "I can o oo";
	//char* q = a;
	char b[20] = "MUST";//可能b容纳不下a
	char* p = b;
	printf("a语句：%s\n,b语句：%s\n", a, b);
	copy_str(a,p);
	//copy_str(q, p);

	printf("a语句：%s\n,b语句：%s\n", a, b);
	return 0;
}