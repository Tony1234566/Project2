#include "acllib.h"

int Setup()
{
	//�ǵ�Ҫ�� ��Ŀ->����->������->ϵͳ->��ϵͳ->�ѿ���̨��Ϊ����
	initWindow("FileName", 100, 100, 1080,900);
	beginPaint();
	line(1000, 1000, 1, 1);
	line(900, 1000, 1, 1);
	line(50, 50, 100, 50);
	endPaint();
	return 0;
}