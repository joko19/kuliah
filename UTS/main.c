//Joko Slamet
//18050974030
//Ulangan Tengah Semester
//Grafika Komputer

#include <GL/glut.h>

 void init()
 {
     glClearColor(0,0,0,0);
     glMatrixMode(GL_PROJECTION);}
 void display(void)
 {
 glClear(GL_COLOR_BUFFER_BIT);
 glBegin(GL_POLYGON);// lautan
 glColor3f(0,0,128); //warna biru
 glVertex2f(-1,-0.6);
 glColor3f(0,0,128);
 glVertex2f(1,-0.6);
 glColor3f(0,206,209);
 glVertex2f(1,-1);
 glColor3f(254,255,255);
 glVertex2f(-1,-1);
 glEnd();
 glBegin(GL_POLYGON);//badan kapal
 glColor3f(0,0,0);
 glVertex2f(-0.6,-0.8);
 glVertex2f(0.6,-0.8);
 glColor3f(0.5,0.4,0.98);
 glColor3f(192,192,192);
 glColor3f(34,139,34);
 glVertex2f(0.8,-0.4);
 glColor3f( 0.184314,0.309804,0.309804);
 glVertex2f(-0.8,-0.4);
 glColor3f(0,0,0);
 glEnd();
 glBegin(GL_POLYGON);//atas kapal
 glColor3f(0.1,0.3,0.3);
 glVertex2f(-0.4,-0.4);
 glVertex2f(0.6,-0.4);
 glVertex2f(0.5,-0.1);
 glColor3f(1,1,1);
 glVertex2f(-0.2,-0.1);
 glEnd();
 glBegin(GL_POLYGON);//atas kapal 2
 glColor3f(0.1,0.3,0.3);
 glVertex2f(-0.15,-0.1);
 glVertex2f(0.45,-0.1);
 glVertex2f(0.4,0.15);
 glColor3f(1,1,1);
 glVertex2f(-0.03,0.15);
 glEnd();
 glBegin(GL_POLYGON);//jendela kapal TINGKAT 2.1
 glColor3f(1,1,1);
 glVertex2f(0.0,-0.05);
 glColor3f(255,215,0);
 glVertex2f(0.15,-0.05);
 glColor3f(1,1,1);
 glVertex2f(0.15,0.1);
 glColor3f(255,215,0);
 glVertex2f(0.0,0.1);
 glEnd();
 glBegin(GL_POLYGON);//jendela kapal TINGKAT 2.2
 glColor3f(1,1,1);
 glVertex2f(0.2,-0.05);
 glColor3f(255,215,0);
 glVertex2f(0.35,-0.05);
 glColor3f(1,1,1);
 glVertex2f(0.35,0.1);
 glColor3f(255,215,0);
 glVertex2f(0.2,0.1);
 glEnd();
 glBegin(GL_POLYGON);//jendela kapal
 glColor3f(1,1,1);
 glVertex2f(-0.2,-0.3);
 glColor3f(1,1,1);
 glVertex2f(-0.1,-0.3);
 glColor3f(255,215,0);
 glVertex2f(-0.1,-0.2);
 glColor3f(255,215,0);
 glVertex2f(-0.2,-0.2);
 glEnd();
 glBegin(GL_POLYGON);//jendela kapal
 glColor3f(1,1,1);
 glVertex2f(0,-0.3);
 glColor3f(1,1,1);
 glVertex2f(0.1,-0.3);
 glColor3f(255,215,0);
 glVertex2f(0.1,-0.2);
 glColor3f(255,215,0);
 glVertex2f(0,-0.2);
 glEnd();
 glBegin(GL_POLYGON);//jendela kapal
 glColor3f(1,1,1);
 glVertex2f(0.2,-0.3);
 glColor3f(1,1,1);
 glVertex2f(0.3,-0.3);
 glColor3f(255,215,0);
 glVertex2f(0.3,-0.2);
 glColor3f(255,215,0);
 glVertex2f(0.2,-0.2);
 glEnd();
 glBegin(GL_POLYGON);//jendela kapal
 glColor3f(1,1,1);
 glVertex2f(0.4,-0.3);
 glColor3f(1,1,1);
 glVertex2f(0.5,-0.3);
 glColor3f(255,215,0);
 glVertex2f(0.5,-0.2);
 glColor3f(255,215,0);
 glVertex2f(0.4,-0.2);
 glEnd();
 glFlush();
 }

 int main(int argc, char** argv)
 {
 glutInit(&argc, argv);
 glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize (700, 400);
 glutInitWindowPosition (200, 100);
 glutCreateWindow ("UTS");
 init();
 glutDisplayFunc(display);
 glutMainLoop();
 return 0;
 }
