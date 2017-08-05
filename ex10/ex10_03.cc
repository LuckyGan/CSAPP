 ///
 /// @file    ex10_03.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-05 09:59:49
 ///
#include "../csapp.h"

int main(){//foobar.txt由6个ASCII码字符"foobar"组成
	int fd;
	char c;

	fd=open("../data/foobar.txt",O_RDONLY,0);
	if(0==fork()){
		read(fd,&c,1);
		exit(0);
	}
	wait(NULL);
	read(fd,&c,1);
	printf("c=%c\n",c);
	exit(0);
}
//子进程会拷贝父进程的描述符表，并且父子进程共享相同的打开文件表集合，
//即子进程会更改文件表表项的文件位置，从而输出c=o
//    
