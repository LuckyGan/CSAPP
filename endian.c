 ///
 /// @file    endian.c
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-31 12:10:53
 ///
#include <stdio.h>
//检测大小端的方法，大端返回1，小端返回0
int endian_test(){
	int x=1;
	char* p=(char*)&x;
	if(*p)
		return 0;
	else
		return 1;
}
int main(){
	if(1==endian_test()){
		printf("This is big endian\n");
	}else{
		printf("This is small endian\n");
	}
	return 0;
}
