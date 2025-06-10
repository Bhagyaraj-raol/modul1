#include<iostream.h>
#include<conio.h>

class Box
{
	double width,height,depth;
	public:
		Box()
		{
			cout<<"\n Default constructor called";
			width=3;
			height=4;
			depth=5;
		}
		Box(Box &b)
		{
			cout<<"\ncopy constructor called";
			width=b.width;
			height=b.height;
			depth=b.depth;
		}
		void volume()
		{
			cout<<"\n volume of box is "<<width*height*depth;
		}
};
void main()
{
	clrscr();
	Box b1;
	b1.volume();
	Box b3(b1);
	b3.volume();
	getch();
}
