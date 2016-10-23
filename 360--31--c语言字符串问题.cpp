#include<stdio.h>
char *myString(){
	char buffer[6] = {0};
	char *s = "Hello World!";
	for(int i = 0;i < sizeof(buffer) - 1;i++){
		buffer[i] = *(s + i);
	}
	return buffer;
}
int main(){
	char *name;
	name = myString();
	printf("%s\n",name);
	return 0;
	/*函数char *myString()中没有使用new或者
	malloc分配内存，所有buffer数组的内存区域在栈区
	随着char *myString()的结束，栈区内存释放，
	字符数组也就不存在了，所以会产生野指针，输出结果未知 
	*/
} 
