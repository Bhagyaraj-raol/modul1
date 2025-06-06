#include<iostream.h>
#include<conio.h>

class Box
{
	double width,height,depth;
	public:
		Box()
		{
			cout<<"\nDefault constructor called";
			width=3;
			height=4;
			depth=5;
		}
		void volume()
		{
			cout<<"\nvolume of box is "<<width*height*depth;
		}
};
void main()
{
	clrscr();
	Box b1;
	b1.volume();
	getch();
}