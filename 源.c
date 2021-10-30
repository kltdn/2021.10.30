#include <stdio.h>
int main()
{
	int x, y, a, b, c, d;
	a = 11185342;//某军的加密密码
	x = a ^ 11185349;
	y = a ^ 11185316;
	printf("(1)军事行动地点坐标为（%d,%d）\n", x, y);
	b = ~(a >> 16);
	c = ~((a << 8) >> 16);
	d = ~((a << 16) >> 16);
	printf("(2)某军代号为：%c%c%c\n", b, c, d);
}
