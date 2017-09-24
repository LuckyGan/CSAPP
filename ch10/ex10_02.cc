 ///
 /// @file    ex10_02.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-05 09:19:14
 ///
#include "../csapp.h"

int main(){//foobar.txt里面含有6个ASCII码字符"foobar"
	int fd1,fd2;
	char c;
	fd1=open("../data/foobar.txt",O_RDONLY,0);
	fd2=open("../data/foobar.txt",O_RDONLY,0);
	read(fd1,&c,1);
	read(fd2,&c,1);
	printf("c=%c\n",c);
	return 0;
}
//因为fd1和fd2是不同的文件描述符，其对应的文件表表项是不同的，而在文件表表现中包含文件位置
//这个属性，从而对不同文件描述符的读操作是互不影响的，所以打印结果为c=f
//
