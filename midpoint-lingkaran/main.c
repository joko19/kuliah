//Joko Slamet
//18050974030
//S1 Pendidikan Teknologi Informasi
//Grafika Komputer
//Laporan 4 (MidPoint Lingkaran dan Elips)

#include <GL/glu.h>
#include <GL/glut.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    elipsA();
    elipsB();
    elipsC();
    elipsD();
    lingkaranBesar();
    lingkaranKecil();
    elipsE();
    glutSwapBuffers();
}

void elipsA(void)
{
    int xc,yc,r;
    r = 10;
    xc = 0;
    yc = 40;
    int p = 1-r;
    int x = 0;
    int y = r;

    glBegin(GL_POINTS);

    while (x <= y)
    {
        x++;
        if (p < 0)
        {
            p += 2 * x + 1;
        }
        else
        {
            y--;
            p += 2 * (x - y) + 1;
        }
        glVertex2i(xc + x, yc + y/2); //reg1
        glVertex2i(xc - x, yc + y/2); //reg8
        glVertex2i(xc + x, yc - y/2); //reg4
        glVertex2i(xc - x, yc - y/2); //reg5
        glVertex2i(xc + y, yc + x/2); //reg2
        glVertex2i(xc - y, yc + x/2); //reg7
        glVertex2i(xc + y, yc - x/2); //reg3
        glVertex2i(xc - y, yc - x/2); //reg6
    }
    glEnd();
    glFlush();
}
void elipsB(void)
{
    int xc,yc,r;
    r = 20;
    xc = -20;
    yc = 55;
    int p = 1-r;
    int x = 0;
    int y = r;

    glBegin(GL_POINTS);

    while (x <= y)
    {
        x++;
        if (p < 0)
        {
            p += 2 * x + 1;
        }
        else
        {
            y--;
            p += 2 * (x - y) + 1;
        }
        glVertex2i(xc + x, yc + y/2); //reg1
        glVertex2i(xc - x, yc + y/2); //reg8
        glVertex2i(xc + x, yc - y/2); //reg4
        glVertex2i(xc - x, yc - y/2); //reg5
        glVertex2i(xc + y, yc + x/2); //reg2
        glVertex2i(xc - y, yc + x/2); //reg7
        glVertex2i(xc + y, yc - x/2); //reg3
        glVertex2i(xc - y, yc - x/2); //reg6
    }
    glEnd();
    glFlush();
}
void elipsC(void)
{
    int xc,yc,r;
    r = 25;
    xc = -40;
    yc = 80;
    int p = 1-r;
    int x = 0;
    int y = r;

    glBegin(GL_POINTS);

    while (x <= y)
    {
        x++;
        if (p < 0)
        {
            p += 2 * x + 1;
        }
        else
        {
            y--;
            p += 2 * (x - y) + 1;
        }
        glVertex2i(xc + x, yc + y/2); //reg1
        glVertex2i(xc - x, yc + y/2); //reg8
        glVertex2i(xc + x, yc - y/2); //reg4
        glVertex2i(xc - x, yc - y/2); //reg5
        glVertex2i(xc + y, yc + x/2); //reg2
        glVertex2i(xc - y, yc + x/2); //reg7
        glVertex2i(xc + y, yc - x/2); //reg3
        glVertex2i(xc - y, yc - x/2); //reg6
    }
    glEnd();
    glFlush();
}
void elipsD(void)
{
    int xc,yc,r;
    r = 5;
    xc = 10;
    yc = 30;
    int p = 1-r;
    int x = 0;
    int y = r;

    glBegin(GL_POINTS);

    while (x <= y)
    {
        x++;
        if (p < 0)
        {
            p += 2 * x + 1;
        }
        else
        {
            y--;
            p += 2 * (x - y) + 1;
        }
        glVertex2i(xc + x, yc + y/2); //reg1
        glVertex2i(xc - x, yc + y/2); //reg8
        glVertex2i(xc + x, yc - y/2); //reg4
        glVertex2i(xc - x, yc - y/2); //reg5
        glVertex2i(xc + y, yc + x/2); //reg2
        glVertex2i(xc - y, yc + x/2); //reg7
        glVertex2i(xc + y, yc - x/2); //reg3
        glVertex2i(xc - y, yc - x/2); //reg6
    }
    glEnd();
    glFlush();
}
void elipsE(void)
{
    //badan
    int xc,yc,r;
    r = 37;
    xc = 50;
    yc = -10;
    int p = 1-r;
    int x = 0;
    int y = r;

    glBegin(GL_POINTS);

    while (x <= y)
    {
        x++;
        if (p < 0)
        {
            p += 2 * x + 1;
        }
        else
        {
            y--;
            p += 2 * (x - y) + 1;
        }
        glVertex2i(xc + x, yc + y/2); //reg1
        glVertex2i(xc - x, yc + y/2); //reg8
        glVertex2i(xc + y, yc + x/2); //reg2
        glVertex2i(xc - y, yc + x/2); //reg7
    }
    glEnd();
    glFlush();
}

void lingkaranBesar(void)
{
    //outline
    int xc,yc,r;
    r = 40;
    xc = 50;
    yc = 0;
    int p = 1-r;
    int x = 0;
    int y = r;

    glBegin(GL_POINTS);
    while (x <= y)
    {
        x++;

        if (p < 0)
        {
            p += 2 * x + 1;
        }
        else
        {
            y--;
            p += 2 * (x - y) + 1;
        }
        glVertex2i(xc + x, yc + y); //reg1
        glVertex2i(xc - x, yc + y); //reg8
        glVertex2i(xc + x, yc - y); //reg4
        glVertex2i(xc - x, yc - y); //reg5
        glVertex2i(xc + y, yc + x); //reg2
        glVertex2i(xc - y, yc + x); //reg7
        glVertex2i(xc + y, yc - x); //reg3
        glVertex2i(xc - y, yc - x); //reg6
    }
    glEnd();
    glFlush();
}


void lingkaranKecil(void)
{
    //kepala
    int xc,yc,r;
    r = 10;
    xc = 50;
    yc = 20;
    int p = 1-r;
    int x = 0;
    int y = r;

    glBegin(GL_POINTS);
    while (x <= y)
    {
        x++;

        if (p < 0)
        {
            p += 2 * x + 1;
        }
        else
        {
            y--;
            p += 2 * (x - y) + 1;
        }
        glVertex2i(xc + x, yc + y); //reg1
        glVertex2i(xc - x, yc + y); //reg8
        glVertex2i(xc + x, yc - y); //reg4
        glVertex2i(xc - x, yc - y); //reg5
        glVertex2i(xc + y, yc + x); //reg2
        glVertex2i(xc - y, yc + x); //reg7
        glVertex2i(xc + y, yc - x); //reg3
        glVertex2i(xc - y, yc - x); //reg6
    }
    glEnd();
    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowPosition(300,150);
    glutInitWindowSize(640,640);
    glutCreateWindow(" Pertemuan ");
    glClearColor(0.0,0.0,0.0,0.0);
    gluOrtho2D(-100,100,-100,100);

    glutDisplayFunc(display);
    glutMainLoop();
    return EXIT_SUCCESS;
}
