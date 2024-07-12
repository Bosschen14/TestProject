#include <stdio.h>
#include <stdlib.h>
typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start, size_t len) 
{
	size_t i;
	for (i = 0; i < len;i++)
	{
		printf("%.2x", start[i]);
	}
	printf("\n");

}

void show_int(int x) {
	show_bytes((byte_pointer)&x, sizeof(int));

}
void show_float(float x) {
	show_bytes((byte_pointer)&x, sizeof(float));

}
void show_pointer(void* x) {
	show_bytes((byte_pointer)&x, sizeof(void*));

}

void test_show_bytes(int val) {
	int ival = val;
	float fval = (float)ival;
	int* pval = &ival;
	show_int(ival);
	show_float(fval);
	show_pointer(*pval);


}
void inplace_swap(int* x, int* y)
{
	//printf("%d\n", *x);
	//printf("%d\n", *y);
	*y = *x ^ *y;

	printf("%d\n", *x);
	printf("%d\n", *y);
	*x = *x ^ *y;
	printf("%d\n", *x);
	printf("%d\n", *y);
	*y = *x ^ *y;
	printf("%d\n", *x);
	printf("%d\n", *y);
}
void reverse_array(int a[], int cnt)
{
	int first, last;
	for (first = 0, last = cnt - 1;first<last;)
	{
		printf("%d", a[first]);
		printf("%d", a[last]);
		printf(" %d", first);
		printf(" %d\n", last);
	
	
		inplace_swap(&a[first], &a[last]);
		first++, last--;
	}

}
int main()
{
	int a = 12345;
	int b = 0xac22d;
	//int c = a ^ b;
	//const char* s = "abcdef";
	//show_int(a);
	//show_int(b);
	//show_int(c);
	//test_show_bytes(a);
	//show_bytes((byte_pointer)s, strlen(s));

	/*inplace_swap(&a, &b);*/
	
		//int c[5] = { 1, 2, 3, 4, 5 };
		//reverse_array(c, 5);
		//for (int i = 0; i < 5; i++)
		//{
		//	printf("%d", c[i]);
		//}
		//
	long x = 0x87654321;
	long x1 = x & 0x000000FF;
	long x2 = (~x & 0xFFFFFF00) | (x & 0x000000FF);
	long x3 = (x & 0xFFFFFF00) | (0x000000FF | 0x0);
	printf("x%x\n", x);

	printf("x1 %.8x\n", x1);
	printf("x2 %.8x\n", x2);
	printf("x3 %.8x\n", x3);
}