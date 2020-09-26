
using namespace std;

class Rectangle
{
  protected:
  int width;
  int height;
    public:
    void read_input()
    {
        cin>>width>>height;
    }
     void display()
    {
    cout<<width<<" "<<height<<"\n";
    } 
};
class RectangleArea :public Rectangle
{
    public:
      void display()
    {
      cout<<width * height;
    }
};
