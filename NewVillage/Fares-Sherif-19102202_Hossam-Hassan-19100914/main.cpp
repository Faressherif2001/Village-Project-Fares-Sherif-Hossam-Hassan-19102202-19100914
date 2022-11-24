#include<GL/gl.h>
#include <GL/glu.h>
#include<GL/glut.h>

#include<stdlib.h>
#include<windows.h>
#include<math.h>
void display();
void reshape(int v, int h);
void timer(int);
void init(){
glClearColor(0.5,0.8,0.9,0.0);
}

int main(int argc,char**argv)

{

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(200,0);
    glutInitWindowSize(1200,800);

    glutCreateWindow("Fares Sherif 19102202/ Hossam Hassan 19100914");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(0,timer,0);
    init();

    glutMainLoop();
}
float step=2;

void display()
{
    /////////////////////////////////////////////



       glVertex2f(-16,-6);

            glEnd();
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

            glColor3f(0.35,0.35,0.35);
            glBegin(GL_POLYGON);

            glVertex2f(-20,-19.5);
            glVertex2f(20,-19.5);   //House Base Shape (rectangle/Square)
            glVertex2f(20,-16);
            glVertex2f(-20,-16);
            glEnd();

     glColor3f(1,1,1);

            glLineWidth(5);
            glBegin(GL_LINES);

            glVertex2f(-20,-19.5);
            glVertex2f(20,-19.5);


            glVertex2f(-20,-16);
            glVertex2f(20,-16);

            glVertex2f(-20,-17.75);
            glVertex2f(-18,-17.75);

            glVertex2f(-16,-17.75);
            glVertex2f(-14,-17.75);


            glVertex2f(-12,-17.75);
            glVertex2f(-10,-17.75);        //From Line 45 to Line 81 is the Road

            glVertex2f(-8,-17.75);
            glVertex2f(-6,-17.75);

            glVertex2f(-4,-17.75);
            glVertex2f(-2,-17.75);

            glVertex2f(-0,-17.75);
            glVertex2f(2,-17.75);

            glVertex2f(4,-17.75);
            glVertex2f(6,-17.75);

            glVertex2f(8,-17.75);
            glVertex2f(10,-17.75);

            glVertex2f(12,-17.75);
            glVertex2f(14,-17.75);

            glVertex2f(16,-17.75);
            glVertex2f(18,-17.75);

            glEnd();


            glColor3f(0.2,0.2,0.2);
            glBegin(GL_POLYGON);

            glVertex2f(-19,-15);
            glVertex2f(-13,-15);   //House Base Shape (rectangle/Square)
            glVertex2f(-13,-6);
            glVertex2f(-19,-6);
            glEnd();


            glBegin(GL_TRIANGLES);

            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(-19.5f, -6.0f);
            glVertex2f(-12.5f, -6.0f);    //Roof of House
            glVertex2f(-16.0f, 0.0f);

            glEnd();

            glColor3f(0.5f, 0.35f, 0.05f);
            glBegin(GL_POLYGON);
            glVertex2f(-17,-14.5);
            glVertex2f(-15,-14.5);
            glVertex2f(-15,-9.5);         //Door
            glVertex2f(-17,-9.5);

            glEnd();




            glLineWidth(2);
            glBegin(GL_POLYGON);
            glColor3f(1,1,0);            //Doorknob
            double x = 0.3;
            double y = 0.5;
            for(int i=0;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x*cos(angle)-16.5, y*sin(angle)-12);
            }
            glEnd();

            glLineWidth(2);
            glBegin(GL_POLYGON);
            glColor3f(0.1,0.8,1);
            double xWindow = 1;       //Window 1
            double yWindow = 1.2;
            for(int i=0;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(xWindow*cos(angle)-16, yWindow*sin(angle)-4);
            }
            glEnd();


            glLineWidth(2);
            glBegin(GL_LINES);
            glColor3f(1,1,1);

            glVertex2f(-18,-4);
            glVertex2f(-15,-4);

            glVertex2f(-16,-2);         //Window 1 splits
            glVertex2f(-16,-6);

            glEnd();

        ///////////////////////////////////////////////////////////////
        //second house
            int h2TransformX = 8;


            glColor3f(0.2,0.6,1);
            glBegin(GL_POLYGON);

            glVertex2f(-19+h2TransformX,-15);
            glVertex2f(-13+h2TransformX,-15);   //House Base Shape (rectangle/Square)
            glVertex2f(-13+h2TransformX,-6);
            glVertex2f(-19+h2TransformX,-6);
            glEnd();


            glBegin(GL_TRIANGLES);

            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(-19.5+h2TransformX, -6.0);
            glVertex2f(-12.5+h2TransformX, -6.0);    //Roof of House
            glVertex2f(-16.0+h2TransformX, 0.0);

            glEnd();

            glColor3f(0.5f, 0.35f, 0.05f);
            glBegin(GL_POLYGON);
            glVertex2f(-17+h2TransformX,-14.5);
            glVertex2f(-15+h2TransformX,-14.5);
            glVertex2f(-15+h2TransformX,-9.5);         //Door
            glVertex2f(-17+h2TransformX,-9.5);

            glEnd();




            glLineWidth(2);
            glBegin(GL_POLYGON);
            glColor3f(1,1,0);            //Doorknob
            double x2 = 0.3;
            double y2 = 0.5;
            for(int i=0;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x2*cos(angle)-16.5+h2TransformX, y2*sin(angle)-12);
            }
            glEnd();

            glLineWidth(2);
            glBegin(GL_POLYGON);
            glColor3f(0.1,0.8,1);
            double xWindow1 = 1;       //Window 2
            double yWindow1 = 1.2;
            for(int i=0;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(xWindow1*cos(angle)-16+h2TransformX, yWindow1*sin(angle)-4);
            }
            glEnd();


            glLineWidth(2);
            glBegin(GL_LINES);
            glColor3f(1,1,1);

            glVertex2f(-18+h2TransformX,-4);
            glVertex2f(-15+h2TransformX,-4);

            glVertex2f(-16+h2TransformX,-2);         //Window 2 splits
            glVertex2f(-16+h2TransformX,-6);

            glEnd();

              glLineWidth(2);
            glBegin(GL_LINE_STRIP);
            glColor3f(1,1,1);            //Half Birb
            double x3 = 1;
            double y3 = 1;
            for(int i=0;i<170;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x3*cos(angle)-17+step, y3*sin(angle)+17);
            }

            glEnd();

            glLineWidth(2);
            glBegin(GL_LINE_STRIP);
            glColor3f(1,1,1);            //Half Birb 2
            double x4 = 1;
            double y4 = 1;
            for(int i=0;i<160;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x4*cos(angle)-19+step, y4*sin(angle)+17);
            }
            glEnd();

             glLineWidth(2);
            glBegin(GL_LINE_STRIP);
            glColor3f(1,1,1);            //Half Birb
            double x5 = 1;
            double y5 = 1;
            for(int i=0;i<170;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x5*cos(angle)-10+step, y5*sin(angle)+17);
            }

            glEnd();

            glLineWidth(2);
            glBegin(GL_LINE_STRIP);
            glColor3f(1,1,1);            //Half Birb 2
            double x6 = 1;
            double y6 = 1;
            for(int i=0;i<160;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x6*cos(angle)-12+step, y6*sin(angle)+17);
            }
            glEnd();

            glLineWidth(4);
            glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            double x7 = 1.5;
            double y7 = 1;
            for(int i=180;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x7*cos(angle)-12+step*0.3, y7*sin(angle)+20);
            }
            glEnd();

            glLineWidth(4);
            glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            for(int i=180;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x7*cos(angle)-10+step*0.3, y7*sin(angle)+20);
            }
            glEnd();
            //From line 279 to line 319 first cloud on the left
            glLineWidth(4);
            glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            for(int i=180;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x7*cos(angle)-8+step*0.3, y7*sin(angle)+20);
            }
            glEnd();

            glLineWidth(4);
            glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            for(int i=180;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x7*cos(angle)-6+step*0.3, y7*sin(angle)+20);
            }
            glEnd();
            //end of cloud 1
            glLineWidth(4);
            glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            for(int i=180;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x7*cos(angle)+12+step*0.2, y7*sin(angle)+20);
            }
            glEnd();

            glLineWidth(4);
            glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            for(int i=180;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x7*cos(angle)+10+step*0.2, y7*sin(angle)+20);
            }
            glEnd();

            glLineWidth(4);
            glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            for(int i=180;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x7*cos(angle)+8+step*0.2, y7*sin(angle)+20);
            }
            glEnd();

            glLineWidth(4);
            glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            for(int i=180;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x7*cos(angle)+6+step*0.2, y7*sin(angle)+20);
            }
            glEnd();
                //Windmill
             glLineWidth(5);
            glBegin(GL_LINES);

            glVertex2f(-0.5,-2);
            glVertex2f(-1,-16);

            glVertex2f(0.5,-2);
            glVertex2f(1,-16);

            glEnd();
            double t = glutGet(GLUT_ELAPSED_TIME) / 1000.0;
            double a = t*30.0;

            double windmillTranslate = 2.5;
            //Windmill fans
            glPushMatrix();
            glLineWidth(2);

            glRotated(a, 0, 0, 1);
            glTranslated(0, 0, -1);


            glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            double x8 = 0.3;
            double y8 = 0.5;
            for(int i=0;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x8*cos(angle), y8*sin(angle));
            }
            glEnd();

            glLineWidth(5);

           glBegin(GL_POLYGON);
            glColor3f(1,0.2,0.2);

            glVertex2f(-0.5,-2+windmillTranslate);
            glVertex2f(-0.5,-3+windmillTranslate);
            glVertex2f(-2,-5+windmillTranslate);
            glVertex2f(-2,0+windmillTranslate);

            glEnd();



            glLineWidth(5);
            glBegin(GL_POLYGON);
            glColor3f(0.4,1,0.6);

            glVertex2f(-0.25,-2+windmillTranslate);
            glVertex2f(0.25,-2+windmillTranslate);
            glVertex2f(1.5,0+windmillTranslate);
            glVertex2f(-1.5,0+windmillTranslate);


            glEnd();

            glLineWidth(5);
            glBegin(GL_POLYGON);
            glColor3f(1,0.9,0.2);

            glVertex2f(0.25,-3+windmillTranslate);
            glVertex2f(-0.25,-3+windmillTranslate);
            glVertex2f(-1.5,-5+windmillTranslate);
            glVertex2f(1.5,-5+windmillTranslate);

            glEnd();

            glLineWidth(5);
            glBegin(GL_POLYGON);
            glColor3f(0.2,0.2,1);

            glVertex2f(2,-5+windmillTranslate);
            glVertex2f(2,-0+windmillTranslate);
            glVertex2f(0.5,-2+windmillTranslate);
            glVertex2f(0.5,-3+windmillTranslate);

            glEnd();
            glPopMatrix();

        //F E N C E
            glColor3f(0.5f, 0.35f, 0.1f);
            glBegin(GL_LINES);
            glLineWidth(4);
            glVertex2f(-3,-9.5);
            glVertex2f(-3,-15.5);
            glEnd();

            glColor3f(0.5f, 0.35f, 0.1f);
            glBegin(GL_LINES);
            glLineWidth(4);
            glVertex2f(-1,-9.5);
            glVertex2f(-1,-15.5);                                         //F E N C E  From line 369 till 416
            glEnd();

            glColor3f(0.5f, 0.35f, 0.1f);
            glBegin(GL_LINES);
            glLineWidth(4);
            glVertex2f(1,-9.5);
            glVertex2f(1,-15.5);
            glEnd();

            glColor3f(0.5f, 0.35f, 0.1f);
            glBegin(GL_LINES);
            glLineWidth(10);
            glVertex2f(3,-9.5);
            glVertex2f(3,-15.5);
            glEnd();

            glColor3f(0.5f, 0.35f, 0.1f);
            glBegin(GL_LINES);
            glLineWidth(4);
            glVertex2f(-3.3,-12.5);
            glVertex2f(3.3,-12.5);
            glEnd();

            glColor3f(0.5f, 0.35f, 0.1f);
            glBegin(GL_LINES);
            glLineWidth(4);
            glVertex2f(-3.3,-14);
            glVertex2f(3.3,-14);
            glEnd();

            glColor3f(0.5f, 0.35f, 0.1f);
            glBegin(GL_LINES);
            glLineWidth(4);
            glVertex2f(-3.3,-11);
            glVertex2f(3.3,-11);
            glEnd();
////////////////////////////////////////

          //HOUSE 3
            glColor3f(0.2,0.2,0.2);
            glBegin(GL_POLYGON);

            glVertex2f(19,-15);
            glVertex2f(13,-15);   //House3 Base Shape (rectangle/Square)
            glVertex2f(13,-6);
            glVertex2f(19,-6);
            glEnd();


            glBegin(GL_TRIANGLES);

            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(19.5f, -6.0f);
            glVertex2f(12.5f, -6.0f);    //Roof of House3
            glVertex2f(16.0f, -0.0f);

            glEnd();

            glColor3f(0.5f, 0.35f, 0.05f);
            glBegin(GL_POLYGON);
            glVertex2f(17,-14.5);
            glVertex2f(15,-14.5);
            glVertex2f(15,-9.5);         //Door3
            glVertex2f(17,-9.5);

            glEnd();

////////////////////////////////////////////////////////////////////////////

            glLineWidth(2);
            glBegin(GL_POLYGON);
            glColor3f(1,1,0);            //Doorknob3
            double xG = 0.3;
            double yG = 0.5;
            for(int i=0;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(xG*cos(angle)+15.4, yG*sin(angle)-12);
            }
            glEnd();

            glLineWidth(2);
            glBegin(GL_POLYGON);
            glColor3f(0.1,0.8,1);
            double xWindow2 = 1;       //Window 3
            double yWindow2 = 1.2;
            for(int i=0;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(xWindow2*cos(angle)+16, yWindow2*sin(angle)-4);
            }
            glEnd();


            glLineWidth(2);
            glBegin(GL_LINES);
            glColor3f(1,1,1);

            glVertex2f(18,-4);
            glVertex2f(15,-4);

            glVertex2f(16,-2);         //Window 3 splits
            glVertex2f(16,-6);

            glEnd();

            ///////////////////////////////////////
            //HOUSE 4
             glColor3f(0.2,0.2,0.2);
            glBegin(GL_POLYGON);

            glVertex2f(11,-15);
            glVertex2f(5,-15);   //House Base Shape4 (rectangle/Square)
            glVertex2f(5,-6);
            glVertex2f(11,-6);
            glEnd();



            glLineWidth(2);
            glBegin(GL_POLYGON);
            glColor3f(0.1,0.8,1);
            double xWindow3 = 1;       //Window 4
            double yWindow3 = 1.2;
            for(int i=0;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(xWindow3*cos(angle)+16, yWindow3*sin(angle)-4);
            }
            glEnd();





            glBegin(GL_TRIANGLES);

            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(12.0f, -6.0f);
            glVertex2f(4.0f, -6.0f);    //Roof of House4
            glVertex2f(7.7f, -0.0f);

            glEnd();

            glColor3f(0.5f, 0.35f, 0.05f);
            glBegin(GL_POLYGON);
            glVertex2f(9,-14.5);
            glVertex2f(7,-14.5);
            glVertex2f(7,-9.5);         //Door4
            glVertex2f(9,-9.5);

            glEnd();


            glLineWidth(2);
            glBegin(GL_POLYGON);
            glColor3f(1,1,0);            //Doorknob4
            double x9 = 0.3;
            double y9 = 0.5;
            for(int i=0;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x9*cos(angle)+7.4, y9*sin(angle)-12);
            }
            glEnd();

            glLineWidth(2);
            glBegin(GL_POLYGON);
            glColor3f(0.1,0.8,1);
            double xWindow6 = 1;       //Window 4
            double yWindow6 = 1.2;
            for(int i=0;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(xWindow6*cos(angle)+7.8, yWindow6*sin(angle)-4);
            }
            glEnd();

             glLineWidth(2);
            glBegin(GL_LINES);
            glColor3f(1,1,1);

            glVertex2f(9,-4);
            glVertex2f(6,-4);

            glVertex2f(7.78,-2);         //Window 4 splits
            glVertex2f(7.78,-6);

            glEnd();            //////////////////



            glLineWidth(10);
            glBegin(GL_POLYGON);
            glColor3f(1,1,0);            //SUN
            double x10 = 4;
            double y10 = 6;
            for(int i=0;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x10*cos(angle)+0, y10*sin(angle)+19.8);
            }
            glEnd();



             glLineWidth(2);
            glBegin(GL_LINES);
            glColor3f(1,1,0);

            glVertex2f(0,13);
            glVertex2f(0,10);

            glVertex2f(2,13);         //Rays of the S U N FROM 594 to 619
            glVertex2f(3,11);

            glVertex2f(4,15);
            glVertex2f(5,14.2);

            glVertex2f(5,18);
            glVertex2f(6,17.5);

            glVertex2f(-2,13);
            glVertex2f(-3,11);

            glVertex2f(-5,18);
            glVertex2f(-6,17.5);

            glVertex2f(-5,18);
            glVertex2f(-6,17.5);

            glVertex2f(-4,15);
            glVertex2f(-5,14.2);


            glEnd();


/*
            glColor3f(0.2,0.2,0.2);
            glLineWidth(100);
            glBegin(GL_POLYGON);

            glVertex2f(-20,-19.3);
            glVertex2f(20,-19.3);
            glVertex2f(-20,-7);
            glVertex2f(20,-1);

            //Color of ROAD

            glEnd();

*/









    glEnd();

    glFlush();



}

void display_house1()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

     glColor3f(1,1,1);

            glLineWidth(5);





  /*  glLineWidth(10.0);

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);




     glColor3f(1, 0, 1);
     glTranslated(step,1,2);
     glBegin(GL_POLYGON);
     glVertex2f(2+step,2+step);
     glVertex2f(2+step,3+step);
     glVertex2f(-2+step,2+step);
     glVertex2f(3+step,-2+step);
     */


    glEnd();

    glFlush();

}

void reshape(int w, int h)
{

glViewport(0,0,(GLsizei)w,(GLsizei)h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-20,20,-20,20);
glMatrixMode(GL_MODELVIEW);

}
void timer(int)
{

    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);
    step+=0.06;
}


