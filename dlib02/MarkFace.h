#pragma once
#include"stdafx.h"
#ifndef MAKEFACE_H
#define MARKFACE_H
#define RATIO 1  
#define SKIP_FRAMES 2  
class MarkFace
{
public:

	void MarkPoints();
	void MouseHandle(int event, int x, int y, int flags, void *param);//鼠标回调函数

private:



};


#endif
