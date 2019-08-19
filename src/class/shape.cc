#include <iostream>
 
// 基类 Shape
class Shape 
{
   public:
      void setWidth(int w)
      {
         width = w;
      }
      void setHeight(int h)
      {
         height = h;
      }
   protected:
      int width;
      int height;
};
 
// 基类 PaintCost
class PaintCost 
{
   public:
      int getCost(int area)
      {
         return area * 70;
      }
};
 
// 派生类
class Rectangle: public Shape, public PaintCost
{

    
   public:

      int getArea()
      { 
         return (width * height); 
      }
};
 
int main(void)
{
   Rectangle Rect;
   int area;
 
   Rect.setWidth(5);
   Rect.setHeight(7);
 
   area = Rect.getArea();
   
   // 输出对象的面积
   std::cout << "Total area: " << Rect.getArea() << std::endl;
 
   // 输出总花费
   std::cout << "Total paint cost: $" << Rect.getCost(area) << std::endl;

   Rectangle * r = new Rectangle();

   r->setWidth(100);
   r->setHeight(100);

   std::cout << "Total area: " << r->getArea() << std::endl;
 
   return 0;
}