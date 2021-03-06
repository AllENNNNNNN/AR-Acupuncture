// dlib02.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "FileRead.h"
#include "MarkFace.h"



using namespace std;
#define RATIO 1  
#define SKIP_FRAMES 2  



//int main()
//{
//	//文件操作部分
////	FileRead a;
//	//a.ReadAcuPos();
//	//标定穴位
//	MarkFace b;
//	b.MarkPoints();
//
//
//
//}

#include <dlib/gui_widgets.h>
#include <dlib/image_transforms.h>
#include <cmath>
using namespace dlib;
using namespace std;

// ----------------------------------------------------------------------------------------
int main()
{
	// Let's make a point cloud that looks like a 3D spiral.
	std::vector<perspective_window::overlay_dot> points;
	dlib::rand rnd;
	for (double i = 0; i < 20; i += 0.001)
	{
		// Get a point on a spiral
		dlib::vector<double> val(sin(i), cos(i), i / 4);
		// Now add some random noise to it
		dlib::vector<double> temp(rnd.get_random_gaussian(),
			rnd.get_random_gaussian(),
			rnd.get_random_gaussian());
		val += temp / 20;
		// Pick a color based on how far we are along the spiral
		rgb_pixel color = colormap_jet(i, 0, 20);
		// And add the point to the list of points we will display
		points.push_back(perspective_window::overlay_dot(val, color));
	}
	// Now finally display the point cloud.
	perspective_window win;
	win.set_title("perspective_window 3D point cloud");
	win.add_overlay(points);
	win.wait_until_closed();
}
