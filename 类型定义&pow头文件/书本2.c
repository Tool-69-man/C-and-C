#include <stdio.h>
#include<math.h>//之前没加数学头文件《2019.12.28》
int main() {
	float PI = 3.14;//如果将这换成int PI就变3了。犯错
	int r,R;
	r = 2; R = 3;
	float S = PI * pow(r, 2);//出错与r的数值无关，S，s数值相同
    float L = PI * r * r;//将S，L换为int，L未改变，M和S改变
	float s=PI* pow(R, 2);
	float M = PI * R * R;
	printf("S=%f\n,L=%f\n,s=%f\n,M=%f", S, L, s, M);
	return 0;
}