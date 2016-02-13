#include "StdAfx.h"
#include "humano.h"


#include <objidl.h>
#include <gdiplus.h>

using namespace Gdiplus;

namespace humanidad
{
	void humano::DrawMe(Graphics * graphics)
	{
		Font myFont(L"Arial", 16);
		RectF layoutRect(0.0f, 0.0f, 200.0f, 50.0f);
		StringFormat format;
		format.SetAlignment(StringAlignmentCenter);
		SolidBrush blackBrush(Color(255, 0, 0, 0));
// Draw string.
   graphics->DrawString(
   this->Nombre_,
   11,
   &myFont,
   layoutRect,
   &format,
   &blackBrush);
	graphics->DrawRectangle(&Pen(Color::Black, 3), layoutRect);
	


	}
	/*humano& humano::operator+(humano& a)
	{
		return *(new humano);
	}*/
	const humano * humano::papa(void)
	{
		return this->papa_;
	}
	const humano * humano::mama(void)
	{
		return this->mama_;
	}
	
	humano::humano(void)
	{


	}

	humano::~humano(void)
	{


	}
}