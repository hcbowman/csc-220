#include<stdio.h>
#include <stdlib.h>

struct my_struct {
		
		int num2;
		char string_2[10];
				
};

int main() {
	
	int num_int = 8;
	float num_ft = 6.7;
	char string_1[10] = "hello";
	
	struct my_struct st1;
	
	int *ip;
	float *fp;
	char *sp;
	struct my_struct *ptr_struct;
	
	ip = &num_int;
	
	fp = &num_ft;
	
	sp = &string_1[0];
	
	ptr_struct = &st1;
	
	printf("name:num_int, value:%d, address:%p, size:%lu\n", num_int,(void *)ip,(unsigned long)sizeof(num_int));
	
	printf("name:num_ft, value:%f, address:%p, size:%lu\n", num_ft,(void *)fp,(unsigned long)sizeof(num_ft));
	
	printf("name:string_1, value:%s, address:%p, size:%lu\n", string_1,(void *)sp,(unsigned long)sizeof(string_1));
	
	printf("name:st1, address:%p, size:%lu\n", (void *)ptr_struct,sizeof(st1));
	printf("%p\n",(void *)(*ptr_struct).num2);
	printf("%p\n",(void *)(*ptr_struct).string_2);
	
	
	return 0;
	
}