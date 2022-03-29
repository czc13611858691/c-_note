#include <iostream>
 
using namespace std;
 
class Box
{
   public:
      void setWidth( double wid );
      double getWidth( void );
 
   private:
      double width;
};

// 成员函数定义
double Box::getWidth(void)
{
    return width ;
}
 
void Box::setWidth( double wid )
{
    width = wid;
}

// 程序的主函数
int main( )
{
   Box box;
 
   // 不使用成员函数设置宽度
   // box.width = 10.0; // Error: 因为 width 是私有的
   box.setWidth(10.0);  // 使用成员函数设置宽度
   cout << "Width of box : " << box.getWidth() <<endl;
 
   return 0;
}