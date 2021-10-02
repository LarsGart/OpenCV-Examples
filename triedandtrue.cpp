//Opencv C++ Example for drawing a Pentagon 
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <math.h>
using namespace cv;
using namespace std;
 
int main( )
{    double pi=3.14;

  //Length of a Side of Regular Pentagon
  int a=500/(1+2*cos(pi*72/180));
 
  // Create black empty images
  Mat image = Mat::zeros( 500, 500, CV_8UC3 );
  
  line( image, Point((a*cos(pi*72/180)), 500), Point(500-(a*cos(pi*72/180)),500), Scalar( 255, 255, 0 ), 2, 8 );
  imshow("Image",image); 
  waitKey( 500 );
  line( image, Point(500-(a*cos(pi*72/180)),500), Point( 500, 500-(a*sin(pi*72/180)) ), Scalar( 255, 255, 0 ), 2, 8 );
  imshow("Image",image); 
  waitKey( 500 );
  line( image, Point(500, 500-(a*sin(pi*72/180))), Point(250, 0), Scalar( 255, 255, 0 ), 2, 8 );
  imshow("Image",image); 
  waitKey( 500 );
  line( image, Point(250, 0), Point(0, 500-(a*sin(pi*72/180))), Scalar( 255, 255, 0 ), 2, 8 );
  imshow("Image",image); 
  waitKey( 500 ); 
  line( image, Point(0, 500-(a*sin(pi*72/180))), Point((a*cos(pi*72/180)), 500), Scalar( 255, 255, 0 ), 2, 8 );
  imshow("Image",image); 
  waitKey( 0 );
  return(0);
}
