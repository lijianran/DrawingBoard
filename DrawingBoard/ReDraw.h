#pragma once
#include<vector>
using namespace std;
struct two
{
	CPoint begin;
	CPoint end;
};

class ReDraw
{
public:
	ReDraw();
	~ReDraw();
	vector<CPoint> onepoint;
	vector<two> line;
	vector<two> Rectangle;
	vector<two> Ellipse;
	vector<two> Shanxing;
	vector<two> Lianxuxian;
	vector<two> huashua;
	vector<two> xiangpijing;
	vector<two> xiangpica;
};

