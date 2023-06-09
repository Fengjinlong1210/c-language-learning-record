#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	float i = 10.0;

	//i=10，二进制为00001010
	//S=0  M=1.01  E=3 (3+127)
	//二进制序列0100 0001 0010 0000 0000 0000 0000 0000
	//在内存中为00 00 20 41  （小端存储）
	return 0;
}

//浮点数在内存中的存储
/* 二进制科学计数法   (-1)^s * M * 2^E
* M表示有效数字，M>=1 && M<2
* E表示2的指数
*
* 在32位中
* 高位第一位表示S，即符号位，往后8位存储有效数字E(指数+127)
* E全为0时，表示指数很小，接近+-0
* E全为1时，指数很大，为正负无穷
*
* 剩下的23位存储M（去除1.  只保留小数点后面的位（前面的数字均为1））
*/