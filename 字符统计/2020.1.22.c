#include<stdio.h>
#include<ctype.h>
int main() {
	char ch;
	int lower, upper, digit, punct, cntrl, space, other;
	lower = upper = digit = punct = cntrl = space = other = 0;
	printf("字符序列：");
	while ((ch = getchar()) != '\n')//       6   is        is  + 5 字符
	{
		if (islower(ch)) {//     islower 检查 ch 是否为      小写     字符 是返回1 否返回0
			lower++;
		}
		else if (isupper(ch)) {// isupper 检查 ch 是否为     大写     字符 是返回1 否返回0
			upper++;
		}
		else if (isdigit(ch)) {//isdigit 检查 ch 是否为      数字     字符 是返回1 否返回0
			digit++;
		}
		else if (ispunct(ch)) {//ispunct 检查 ch 是否为      标点     字符 是返回1 否返回0
			punct++;
		}
		else if (iscntrl(ch)) {//iscntrl 检查 ch 是否为      控制     字符 是返回1 否返回0
			cntrl++;
		}
		else if (isspace(ch)) {//isspace 检查 ch 是否为      空格     字符 是返回1 否返回0
			space++;
		}
		else{
			other++;
	}
}
	printf("统计结果\n");
	printf("小写%d\n",lower);//小写
	printf("大写%d\n",upper);//大写
	printf("数字%d\n",digit);//数字
	printf("标点%d\n",punct);//标点
	printf("控制%d\n",cntrl);//控制
	printf("空格%d\n",space);//空格
	printf("其他%d\n",other);//其他



	return 0;
}