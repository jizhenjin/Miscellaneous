#ifndef EASY_COLOR_H
#define EASY_COLOR_H

#include <windows.h>
#include <vector>

namespace EasyXPlus
{
	//	Color Interface definition
	class Colorable
	{
	public:
		virtual ~Colorable()	{}
		virtual COLORREF toColorref() const = 0;
	};

	class Rgb : public Colorable
	{
	public:
		virtual ~Rgb()			{}
		virtual COLORREF toColorref() const;

		Rgb(unsigned char R, unsigned char G, unsigned char B);
		explicit Rgb(COLORREF colorValue);

		bool operator == (const Rgb otherColor)const;
		bool operator != (const Rgb otherColor)const;

		const unsigned char getR() const;
		const unsigned char getG() const;
		const unsigned char getB() const;

		static Rgb Black()		{ return Rgb(0, 0, 0); }
		static Rgb White()		{ return Rgb(255, 255, 255); }
		static Rgb Blue()		{ return Rgb(0, 0, 255); }
		static Rgb Red()		{ return Rgb(255, 0, 0); }
		static Rgb Green()		{ return Rgb(0, 255, 0); }
		static Rgb Grey()		{ return Rgb(190, 190, 190); }
		static Rgb Cyan()		{ return Rgb(0, 255, 255); }
		static Rgb Yellow()		{ return Rgb(255, 255, 0); }
		static Rgb Salmon()		{ return Rgb(250, 128, 114); }
		static Rgb Coral()		{ return Rgb(225, 127, 80); }
		static Rgb Pink()		{ return Rgb(255, 192, 203); }
		static Rgb Turquoise()	{ return Rgb(64, 224, 208); }
		static Rgb SeaGreen()	{ return Rgb(46, 139, 87); }
		static Rgb Goldenrod()	{ return Rgb(218, 165, 32); }
		static Rgb Orange()		{ return Rgb(255, 165, 0); }
		static Rgb Orchid()		{ return Rgb(218, 112, 214); }
		static Rgb Violet()		{ return Rgb(238, 130, 238); }
		static Rgb Magenta()	{ return Rgb(255, 0, 255); }

		static Rgb LightGrey()	{ return Rgb(211, 211, 211); }
		static Rgb LightBlue()	{ return Rgb(173, 216, 230); }
		static Rgb LightCyan()	{ return Rgb(224, 255, 255); }
		static Rgb LightYellow(){ return Rgb(255, 255, 224); }
		static Rgb LightSalmon(){ return Rgb(255, 160, 122); }
		static Rgb LightCoral()	{ return Rgb(240, 128, 128); }
		static Rgb LightPink()	{ return Rgb(255, 182, 193); }
		static Rgb LightGreen()	{ return Rgb(144, 238, 144); }

		static Rgb DarkTurquoise()	{ return Rgb(0, 206, 209); }
		static Rgb DarkGreen()		{ return Rgb(0, 100, 0); }
		static Rgb DarkSeaGreen()	{ return Rgb(143, 188, 143); }
		static Rgb DarkGoldenrod()	{ return Rgb(184, 143, 11); }
		static Rgb DarkSalmon()		{ return Rgb(233, 150, 122); }
		static Rgb DarkOrange()		{ return Rgb(255, 140, 0); }
		static Rgb DarkOrchid()		{ return Rgb(153, 50, 204); }
		static Rgb DarkViolet()		{ return Rgb(148, 0, 211); }
		static Rgb DarkGrey()		{ return Rgb(169, 169, 169); }
		static Rgb DarkBlue()		{ return Rgb(0, 0, 139); }
		static Rgb DarkCyan()		{ return Rgb(0, 139, 139); }
		static Rgb DarkMagenta()	{ return Rgb(139, 0, 139); }
		static Rgb DarkRed()		{ return Rgb(139, 0, 0); }

	protected:
		COLORREF colorValue;
	};
}

#endif