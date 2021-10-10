#include <iostream>
using namespace std;
class Rectangle {
 private:
  int width, height;

 public:
  Rectangle(int width = 1, int height = 1) {
    this->width = width;
    this->height = height;
    cout << "Constructor called." << endl;
  }
  ~Rectangle() { cout << "Destructor called" << endl; }
  int getWidth() { return width; }
  int getHeight() { return height; }
  void setWidth(int width) { this->width = width; }
  void setHeight(int height) { this->height = height; }
  int getArea() { return width * height; }
  int getPerimeter() { return 2 * (width + height); }
  void display() {
    cout << "Width=" << getWidth() << "Height=" << getHeight()
         << "Area=" << getArea() << "Height=" << getPerimeter() << endl;
  }
};
// int main() {
//   const int N = 3;
//   Rectangle rect[N] = {Rectangle(3, 4), Rectangle(7, 6), Rectangle(5, 6)};
//   for (int i = 0; i < N; i++) {
//     rect[i].display();
//   }
//   return 0;
// }
int main() {
  int num;
  cout << "请输入要建立的数组对象个数：";
  cin >> num;
  Rectangle *rect = new Rectangle[num];
  rect[0].setWidth(3);
  rect[0].setHeight(4);
  for (int i = 0; i < num; i++)
    rect[i].display();
  delete[] rect;
  return 0;
}
  