
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>>

GLuint texture[35];

static float ypos = 0, zpos = 0, xpos = 0,a = -9, b = -5,c =-30, laptop=0, laci=0, kursi1=0, kursi2=0, pintu=0;
int z=0;

void init(void)
{
  glClearColor(0.5, 0.5, 0.5, 0.0);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    // Generate texture/ membuat texture background
}

//fungsi kotak kosong, belum diisi koordinat. diisi di display()
void kotak(float x1,float y1,float z1,float x2,float y2,float z2)
{
  //depan
  glTexCoord2f(.0, 0.0);
  glVertex3f(x1,y1,z1);
  glTexCoord2f(0.0, 1.0);
  glVertex3f(x2,y1,z1);
  glTexCoord2f(1.0, 1.0);
  glVertex3f(x2,y2,z1);
  glTexCoord2f(1.0, 0.0);
  glVertex3f(x1,y2,z1);
  //atas
  glTexCoord2f(0.0, 0.0);
  glVertex3f(x1,y2,z1);
  glTexCoord2f(0.0, 1.0);
  glVertex3f(x2,y2,z1);
  glTexCoord2f(1.0, 1.0);
  glVertex3f(x2,y2,z2);
  glTexCoord2f(1.0, 0.0);
  glVertex3f(x1,y2,z2);
  //belakang
  glTexCoord2f(0.0, 0.0);
  glVertex3f(x1,y2,z2);
  glTexCoord2f(0.0, 1.0);
  glVertex3f(x2,y2,z2);
  glTexCoord2f(1.0, 1.0);
  glVertex3f(x2,y1,z2);
  glTexCoord2f(1.0, 0.0);
  glVertex3f(x1,y1,z2);
  //bawah
  glTexCoord2f(0.0, 0.0);
  glVertex3f(x1,y1,z2);
  glTexCoord2f(1.0, 0.0);
  glVertex3f(x2,y1,z2);
  glTexCoord2f(1.0, 1.0);
  glVertex3f(x2,y1,z1);
  glTexCoord2f(0.0, 1.0);
  glVertex3f(x1,y1,z1);
  //samping kiri
  glTexCoord2f(0.0, 0.0);
  glVertex3f(x1,y1,z1);
  glTexCoord2f(1.0, 0.0);
  glVertex3f(x1,y2,z1);
  glTexCoord2f(1.0, 1.0);
  glVertex3f(x1,y2,z2);
  glTexCoord2f(0.0, 1.0);
  glVertex3f(x1,y1,z2);
  //samping kanan
  glTexCoord2f(0.0, 0.0);
  glVertex3f(x2,y1,z1);
  glTexCoord2f(1.0, 0.0);
  glVertex3f(x2,y2,z1);
  glTexCoord2f(1.0, 1.0);
  glVertex3f(x2,y2,z2);
  glTexCoord2f(0.0, 1.0);
  glVertex3f(x2,y1,z2);
}

void keyboard(unsigned char key, int x, int y)
{
  switch (key)
  {
    //putar arah jarum jam (menambah derajat putaran)
    case 'q':
    ypos=ypos+5;
    if (ypos>360) ypos=0;
    glutPostRedisplay();
    break;
    //putar berlawanan arah jarum jam (mengurangi derajat putaran)
    case 'e':
    ypos=ypos-5;
    if (ypos>360) ypos=0;
    glutPostRedisplay();
    break;
    //vertikal bawah (menambah koordinat y)
    case 'f':
    b = b + 1;
    glutPostRedisplay();
    break;
    //vertikal atas (mengurangi koordinat y)
    case 'r':
    b = b - 1;
    glutPostRedisplay();
    break;
    //horisontal kiri (mengurangi koordinat x)
    case 'a':
    a = a + 1;
    glutPostRedisplay();
    break;
    //horisontal kanan (menambah koordinat x)
    case 'd':
    a = a - 1;
    glutPostRedisplay();
    break;
    //memperbesar objek (menambah koordinat z)
    case 'w':
    c = c + 1;
    glutPostRedisplay();
    break;
    //memperkecil abjek(mengurangi koordinat z)
    case 's':
    c = c - 1;
    glutPostRedisplay();
    break;

    //buka pintu
    case 'p':
    pintu=pintu-5;
    if (pintu<-45) pintu=-45;
    glutPostRedisplay();
    break;
    //tutup pintu
    case 'o':
    pintu=pintu+5;
    if (pintu>0) pintu=0;
    glutPostRedisplay();
    break;

    //buka kursi123
    case 'm':
    kursi1=kursi1+0.1;
    if (kursi1>2.5) kursi1=2.5;
    glutPostRedisplay();
    break;
    //tutup kursi123
    case 'n':
    kursi1=kursi1-0.1;
    if (kursi1<-4) kursi1=-4;
    glutPostRedisplay();
    break;

    //buka kursi456
    case 'u':
    kursi2=kursi2-0.1;
    if (kursi2>2.5) kursi2=2.5;
    glutPostRedisplay();
    break;
    //tutup kursi456
    case 'i':
    kursi2=kursi2+0.1;
    if (kursi2<-4) kursi2=-4;
    glutPostRedisplay();
    break;

    //putar arah jarum jam (menambah derajat putaran)
    case 'z':
    xpos=xpos+5;
    if (xpos>360) xpos=0;
    glutPostRedisplay();
    break;
    //putar berlawanan arah jarum jam (mengurangi derajat putaran)
    case 'c':
    xpos=xpos-5;
    if (xpos>360) xpos=0;
    glutPostRedisplay();
  }
}


void display()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glLoadIdentity ();
  glEnable(GL_DEPTH_TEST);
  //perpindahan
  glTranslatef(a,b,c);
  //putaran
  glRotatef(xpos,1,0,0);
  glRotatef(ypos,0,1,0);
  glRotatef(zpos,0,0,1);

  //lantai
  glPushMatrix();
    glBegin(GL_QUADS);
      glColor3ub(244, 255, 237);
      kotak(0,0,18.5,25,0.5,0);
    glEnd();
  glPopMatrix();
  //dinding kiri
  glPushMatrix();
    glBegin(GL_QUADS);
      glColor3ub(196, 44, 33);
      kotak(0,0.5,18.5,0.5,11,0);
    glEnd();
  glPopMatrix();
  //dinding belakang
  glPushMatrix();
    glBegin(GL_QUADS);
      glColor3ub(224, 220, 220);
      kotak(6,0.5,0.5,25,11,0.0);
    glEnd();
  glPopMatrix();

  //meja Meeting
    glPushMatrix();
      glBegin(GL_QUADS);
          glColor3ub(245, 173, 127);
            kotak(8,4.3,14,22,4,6);
      //kaki kiri depan depan
            kotak(8.1,0.5,13.5,8.5,4.1,14);
      //kaki kanan depan
            kotak(8.1,0.5,6,8.5,4.1,6.5);
      //kaki kanan belakang
            kotak(22,0.5,13.5,21.5,4.1,14);
      //kaki kiri belakang
            kotak(22,0.5,6,21.5,4.1,6.5);
      glEnd();
    glPopMatrix();


  //pc
    glPushMatrix();
      glBegin(GL_QUADS);
        glColor3f(0.0f,0.0f,0.0f);
        //keyboard
        kotak(8.3,4.32,9.0,10,4.45,11);
      glEnd();
    glPopMatrix();
    //Monitor lcd
      glPushMatrix();
        glBegin(GL_QUADS);
              glColor3f(0.0f,0.0f,0.0f);
              //Monitor lcd
              kotak(10,4.32,9,10.1,6,11);
          glEnd();
      glPopMatrix();
    //layar lcd
      glPushMatrix();
         glBegin(GL_QUADS);
            glColor3f(1.1f,1.0f,1.0f);
            kotak(9.98,4.49,9.1,10.05,5.9,10.9);
          glEnd();
      glPopMatrix();

    //kursi1
    //alas
      glPushMatrix();
        glTranslatef(0,0,kursi1);
          glBegin(GL_QUADS);
              glColor3ub(89, 76, 76);
              kotak(18,2.2,15.5,20.8,2.5,12.8);
          //kanan belakang
              kotak(20.5,0.5,15.5,20.8,5.2,15.2);
          //kanan depan
              kotak(20.5,0.5,13.1,20.8,2.5,12.8);
          //kiri depan
              kotak(17.9,0.5,13.1,18.2,2.5,12.8);
          //kiri belakang
              kotak(17.9,0.5,15.5,18.2,5.2,15.2);
          //senderan
              kotak(18.3,3.8,15.5,20.6,4.9,15.0);
          glEnd();
      glPopMatrix();


      //kursi2
    //alas
      glPushMatrix();
        glTranslatef(0,0,kursi1);
          glBegin(GL_QUADS);
              glColor3ub(89, 76, 76);
              kotak(13.6,2.2,15.5,16.2,2.5,12.8);
          //kanan belakang
              kotak(15.9,0.5,15.5,16.2,5.2,15.2);
          //kanan depan
              kotak(15.9,0.5,13.1,16.2,2.5,12.8);
          //kiri depan
              kotak(13.2,0.5,13.1,13.6,2.5,12.8);
          //kiri belakang
              kotak(13.3,0.5,15.5,13.6,5.2,15.2);
          //senderan
              kotak(13.5,3.8,15.5,16.1,4.9,15.0);
          glEnd();
      glPopMatrix();

           //kursi3
    //alas
      glPushMatrix();
        glTranslatef(0,0,kursi1);
          glBegin(GL_QUADS);
              glColor3ub(89, 76, 76);
              kotak(8.8,2.2,15.5,11.6,2.5,12.8);
          //kanan belakang
              kotak(11.2,0.5,15.5,11.6,5.2,15.2);
          //kanan depan
              kotak(11.2,0.5,13.1,11.6,2.5,12.8);
          //kiri depan
              kotak(8.8,0.5,13.1,9.1,2.5,12.8);
          //kiri belakang
              kotak(8.8,0.5,15.5,9.1,5.2,15.2);
          //senderan
              kotak(8.8,3.8,15.5,11.2,4.9,15.0);
          glEnd();
      glPopMatrix();

        //kursi4
    //alas
      glPushMatrix();
        glTranslatef(0,0,kursi2);
          glBegin(GL_QUADS);
              glColor3ub(89, 76, 76);
              kotak(18,2.2,5.5,20.8,2.5,2.8);
          //kanan belakang
              kotak(20.5,0.2,3.2,20.8,5.2,2.8);
          //kanan depan
              kotak(20.5,0.5,5.5,20.8,2.5,5);
          //kiri depan
              kotak(17.9,0.5,5.5,18.2,2.5,5);
          //kiri belakang
              kotak(17.9,0.5,3.2,18.2,5.2,2.8);
          //senderan
              kotak(18.3,3.8,3.2,20.6,4.9,2.8);
          glEnd();
      glPopMatrix();

          //kursi5
    //alas
      glPushMatrix();
        glTranslatef(0,0,kursi2);
          glBegin(GL_QUADS);
              glColor3ub(89, 76, 76);
              kotak(13.6,2.2,5.5,16.2,2.5,2.8);
          //kanan belakang
              kotak(15.9,0.5,2.3,16.2,5.2,2.8);
          //kanan depan
              kotak(15.9,0.5,5.5,16.2,2.5,5);
          //kiri depan
              kotak(13.2,0.5,5.5,13.6,2.5,5);
          //kiri belakang
              kotak(13.3,0.5,2.3,13.6,5.2,2.8);
          //senderan
              kotak(13.5,3.8,2.3,16.1,4.9,2.8);
          glEnd();
      glPopMatrix();


           //kursi6
    //alas
      glPushMatrix();
        glTranslatef(0,0,kursi2);
          glBegin(GL_QUADS);
              glColor3ub(89, 76, 76);
              kotak(8.8,2.2,5.5,11.6,2.5,2.8);
          //kanan belakang
              kotak(11.2,0.5,2.8,11.6,5.2,2.3);
          //kanan depan
              kotak(11.2,0.5,5.5,11.6,2.5,5);
          //kiri depan
              kotak(8.8,0.5,5.5,9.1,2.5,5);
          //kiri belakang
              kotak(8.8,0.5,2.8,9.1,5.2,2.3);
          //senderan
              kotak(8.8,3.8, 2.3,11.2,4.9,2.8);
          glEnd();
      glPopMatrix();

  //Pintu
    glPushMatrix();
      glRotatef(pintu, 0.0, 1.0, 0.0);
        glBegin(GL_QUADS);
          glColor3f(0.1f,0.0f,0.0f);
          kotak(0.5,0.5,0.5,6,11,0);
        glEnd();
    glPopMatrix();
    //gagang pintu
      glPushMatrix();
        glRotatef(pintu, 0.0, 1.0, 0.0);
          glBegin(GL_QUADS);
            //gagang pintu
            glColor3f(1.0f,1.0f,1.0f);
              kotak(5.2,5.8,0.7,5.5,6,0.5);
              kotak(4.5,5.8,0.9,5.6,6,0.7);
            //alas gagang
              kotak(5.1,6.5,0.55,5.7,5,0.5);
            glColor3f(0.0f,0.0f,0.0f);
              kotak(5.35,5.2,0.56,5.45,5.5,0.55);
          glEnd();
      glPopMatrix();

    //gagang pintu belakang
      glPushMatrix();
        glRotatef(pintu, 0.0, 1.0, 0.0);
          glBegin(GL_QUADS);
            //gagang pintu
            glColor3f(1.0f,1.0f,1.0f);
              kotak(5.2,5.8,0,5.5,6,-0.2);
              kotak(4.5,5.8,-0.2,5.6,6,-0.4);
            //alas gagang
              kotak(5.1,6.5,0,5.7,5,-0.05);
            glColor3f(0.0f,0.0f,0.0f);
              kotak(5.35,5.2,-0.05,5.45,5.5,-0.06);
          glEnd();
      glPopMatrix();

  //saklar
    glPushMatrix();
      glBegin(GL_QUADS);
        glColor3f(1.1f,1.0f,1.0f);
          kotak(6.5,6.5,0.6,7.5,7.5,0.5);
        glColor3f(0.1f,0.0f,0.0f);
          kotak(6.65,6.7,0.65,6.92,7.3,0.6);
          kotak(7.08,6.7,0.65,7.35,7.3,0.6);
      glEnd();
    glPopMatrix();

  //Papan Presentasi
    glPushMatrix();
      glBindTexture(GL_TEXTURE_2D, texture[9]);
        glBegin(GL_QUADS);
          glColor3f(1.0f,1.0f,1.0f);
            kotak(0.6,9,16.5,0.61,3.8,5.9);
          glColor3f(0.0f,0.0f,0.0f);
            kotak(0.5,9.1,16.6,0.6,3.7,5.8);
        glEnd();
    glPopMatrix();

    //almari
    glPushMatrix();
      glBindTexture(GL_TEXTURE_2D, texture[9]);
        glBegin(GL_QUADS);
        //almari sisi depan
          glColor3ub(120, 79, 61);
            kotak(0.6,9.3,18.2,2,3.5,18.1);//samping
            kotak(0.6,9.3,16.8,2,3.5,16.7);//samping
            //rakdalam
            glColor3ub(222, 140, 104);
            kotak(0.6,9.3,18.15,2,9.2,16.75);
            kotak(0.6,7.7,18.15,2,7.6,16.75);
            kotak(0.6,6.1,18.15,2,6,16.75);
            kotak(0.6,3.6,18.15,2,3.5,16.75);
        //almari sisi belakang
        glColor3ub(120, 79, 61);
            kotak(0.6,9.3,5.7,2,3.5,5.6);//samping
            kotak(0.6,9.3,4.2,2,3.5,4.1);//samping
            //rakdalam
            glColor3ub(222, 140, 104);
            kotak(0.6,9.3,5.65,2,9.2,4.05);
            kotak(0.6,7.7,5.65,2,7.6,4.05);
            kotak(0.6,6.1,5.65,2,6,4.05);
            kotak(0.6,3.6,5.65,2,3.5,4.05);
        //alas atas
        glColor3ub(222, 140, 104);
        kotak(0.6,9.3,16.75,2,9.2,5.65);
        //alas tengah
        glColor3ub(222, 140, 104);
        kotak(0.6,3.6,16.75,1.6,3.5,5.65);
        //almari tengah
        glColor3ub(120, 79, 61);
        kotak(0.6,3.6,16.75,1.6,0.55,5.65);
        //almaribawahdepan
        glColor3ub(120, 79, 61);
            kotak(0.6,3.5,18.2,2,0.55,18.1);//samping
            kotak(0.6,3.5,16.8,2,0.55,16.7);//samping
            //pintu
            kotak(2,3.5,18.2,2.1,0.55,16.7);
            //gagangpintu
            glColor3ub(0, 0, 0);
            kotak(2,2,16.9,2.2,2.1,17);
        //almaribawahbelakang
        glColor3ub(120, 79, 61);
            kotak(0.6,3.5,5.7,2,0.55,5.6);//samping
            kotak(0.6,3.5,4.2,2,0.55,4.1);//samping
            //pintu
            kotak(2,3.5,5.5,2.1,0.55,4.1);
            //gagangpintu
            glColor3ub(0,0,0);
            kotak(2,2,5.4,2.2,2.1,5.3);
        glEnd();
    glPopMatrix();

    //jam
    glPushMatrix();
      glBegin(GL_QUADS);
        glColor3ub(255,255,255);
          //bg
          kotak(0.5,10.7,11.3,0.6,9.7,10.3);
          glColor3ub(0,0,0);
            kotak(0.5,10.6,11.2,0.7,9.8,10.4);
        //jarum
        glColor3ub(255,255,255);
          kotak(0.5,10.25,10.725,0.8,10.15,10.8);
          kotak(0.5,10.25,10.725,0.8,10.15,10.99);
          kotak(0.5,10.5,10.725,0.8,10.15,10.8);
      glEnd();
    glPopMatrix();

  //Rak Dinding
    glPushMatrix();
      glBegin(GL_QUADS);
        glColor3ub(55, 180, 70);
          //bawah
          kotak(10,6,1.5,18,6.2,0.5);
          //atas
          kotak(10,7,1.5,18,7.2,0.5);
        glColor3ub(82, 198, 255);
          //kanan
          kotak(15.0,5.0,1.5,15.2,8.5,0.5);
          //kiri
          kotak(13,5.0,1.5,13.2,8.5,0.5);
      glEnd();
    glPopMatrix();

  glFlush();
  glutSwapBuffers();
}

void reshape (int w, int h)
{
  glViewport(0, 0, w, h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(60.0, 1.0 * (GLfloat) w / (GLfloat) h, 1.0, 40.0);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glTranslatef(0.0, 0.0, 0.0);
  gluLookAt (0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
}

int main(int argc, char **argv)
{

  glutInit(&argc, argv);
  //glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
  glutInitWindowSize (1024, 600);
  glutInitWindowPosition (20, 75);
  glutCreateWindow ("Meeting Room");
  init ();
  glutDisplayFunc(display);
  glutReshapeFunc(reshape);
  glutKeyboardFunc(keyboard);
  glutMainLoop();
  return 0;

}
