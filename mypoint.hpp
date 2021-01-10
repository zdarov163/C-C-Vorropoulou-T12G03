/*
 * Diese Klasse repraesentiert einen Punkt
 */

class MyPoint
{
private:
  int x;
  int y;
  int z;
  double ergebnis;
  double teil1;
  double teil2;
  double teil3;
  
  public:
  MyPoint(int x, int y, int z);
  
  double dist(MyPoint *q, MyPoint *p);

  

  void show();
};