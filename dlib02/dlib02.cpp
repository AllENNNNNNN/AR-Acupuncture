// dlib02.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "dlib02.h"
#include "FileRead.h"
#include "MarkFace.h"



using namespace std;
#define RATIO 1  
#define SKIP_FRAMES 2  



int main()
{

//文件操作部分
MarkFace b;
b.MarkPoints();
FileRead a;
a.ReadAcuPos();
}
