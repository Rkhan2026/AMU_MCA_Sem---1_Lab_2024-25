#include <iostream>
#include <math.h>
using namespace std;

class Triangle
{
private:
    float base;
    float height;

public:
	Triangle(float b, float h)
    {
        if (b <= 0 || h <= 0)
        {
            cout << "Invalid Input" << endl;
        }
        
        else
        {
            this->base = b;
            this->height = h;
        }
    }
    
    float hypo()
    {
    	return sqrt(base*base + height*height); 
    }
    
	float area()
    {
        return (0.5 * base * height);
    }
};

int main()
{
    float h, b;

    cout <<"Enter Height Of The Right Angled Triangle : ";
    cin >> h;
    cout <<"\nEnter Base Of The Right Angled Triangle : ";
    cin >> b;

    Triangle t(h, b);
    
	cout <<"\n\nLength Of Hypotenuse Of Right Angled Triangle : " << t.hypo();
    cout <<"\n\nArea Of The Right Angled Triangle Is : " << t.area();
    return 0;
}
