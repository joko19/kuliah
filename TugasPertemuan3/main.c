//Joko Slamet
//18050974030
//S1 Pendidikan Teknologi Informasi 2018
//Grafika Komputer
//Tugas Pertemuan 3
//Membuat Kapal Sederhana

#include <GL/glut.h>
void display(void)
{

glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON);// lautan
glColor3f(0,0,1); //warna biru
glVertex2f(-1,-0.6);
glVertex2f(1,-0.6);
glVertex2f(1,-1);
glVertex2f(-1,-1);
glEnd();

glBegin(GL_POLYGON);//badan kapal
glColor3f(1,0.5,0); //warna putih
glVertex2f(-0.6,-0.8);
glVertex2f(0.6,-0.8);
glVertex2f(0.8,-0.4);
glVertex2f(-0.8,-0.4);
glEnd();

glBegin(GL_POLYGON);//atas kapal
glColor3f(0,1,0);
glVertex2f(-0.4,-0.4);
glVertex2f(0.7,-0.4);
glVertex2f(0.6,-0.1);
glVertex2f(-0.2,-0.1);
glEnd();

glBegin(GL_POLYGON);//jendela kapal
glColor3f(1,0,0);
glVertex2f(-0.2,-0.3);
glVertex2f(-0.1,-0.3);
glVertex2f(-0.1,-0.2);
glVertex2f(-0.2,-0.2);
glEnd();
glBegin(GL_POLYGON);//jendela kapal
glVertex2f(0,-0.3);
glVertex2f(0.1,-0.3);
glVertex2f(0.1,-0.2);
glVertex2f(0,-0.2);
glEnd();
glBegin(GL_POLYGON);//jendela kapal
glVertex2f(0.2,-0.3);
glVertex2f(0.3,-0.3);
glVertex2f(0.3,-0.2);
glVertex2f(0.2,-0.2);
glEnd();
glBegin(GL_POLYGON);//jendela kapal
glVertex2f(0.4,-0.3);
glVertex2f(0.5,-0.3);
glVertex2f(0.5,-0.2);
glVertex2f(0.4,-0.2);
glEnd();

glBegin(GL_POLYGON);//tiang kapal
glColor3f(1,1,1);
glVertex2f(0.1,-0.1);
glVertex2f(0.12,-0.1);
glVertex2f(0.12,0.4);
glVertex2f(0.1,0.4);
glEnd();

glBegin(GL_POLYGON);//bendera kapal
glColor3f(1,1,1);
glVertex2f(0.1,0.2);
glVertex2f(0.4,0.2);
glVertex2f(0.4,0.3);
glVertex2f(0.1,0.3);
glEnd();

glBegin(GL_POLYGON);//bendera kapal
glColor3f(1,0,0);
glVertex2f(0.1,0.3);
glVertex2f(0.4,0.3);
glVertex2f(0.4,0.4);
glVertex2f(0.1,0.4);
glEnd();


glFlush();
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600, 600);
glutInitWindowPosition (200, 100);
glutCreateWindow ("Kapal Sederhana");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
