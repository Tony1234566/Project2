#include "acllib.h"

int Setup()
{
	//记得要在 项目->属性->链接器->系统->子系统->把控制台改为窗口
	initWindow("FileName", 100, 100, 1080,900);
	beginPaint();
	line(1000, 1000, 1, 1);
	line(900, 1000, 1, 1);
	line(50, 50, 100, 50);
	endPaint();
	return 0;
}