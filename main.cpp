#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);


glColor3f (1.0, 1.0, 1.0);

  glBegin(GL_QUADS);

glColor3f(1,0,0);//border
glVertex3f(0.0f, 0.0f, -5.0f);
glVertex3f(1.0f, 0.0f, -5.0f);
glVertex3f(1.0f, 1.0f, -5.0f);
glVertex3f(0.0f, 1.0f, -5.0f);

glColor3f(0.0, 1.0, 0.0);//field
glVertex3f(0.005f, 0.005f, -5.0f);
glVertex3f(0.995f, 0.005f, -5.0f);
glVertex3f(0.995f, .34f, -5.0f);
glVertex3f(0.005f, 0.34f, -5.0f);

glColor3f (0.6, 1.0, 0.9);//sky
glVertex3f(0.005f, 0.34f, -5.0f);
glVertex3f(0.995f, .34f, -5.0f);
glColor3f(0.0f, 0.5f, 1.0f);
glVertex3f(0.995f, 0.995f, -5.0f);
glVertex3f(0.005f, 0.995f, -5.0f);


glColor3f (1, 1, 1);//cloud
glVertex3f(0.30f, .70f, -5.0f);
glVertex3f(0.40f, .70f, -5.0f);
glVertex3f(.40f, .80f, -5.0f);
glVertex3f(.30f, .80f, -5.0f);

glVertex3f(0.60f, .90f, -5.0f);
glVertex3f(0.70f, .90f, -5.0f);
glVertex3f(.70f, .95f, -5.0f);
glVertex3f(.60f, .95f, -5.0f);
glEnd();


//end of background

glBegin(GL_QUADS); //Begin quadrilateral coordinates

  //Trapezoid
glColor3f (0.4, 0, 0);//neck
glVertex3f(0.21f, 0.29f, -5.0f);
glVertex3f(0.32f, 0.31f, -5.0f);
glVertex3f(0.30f, 0.51f, -5.0f);
glVertex3f(0.215f, 0.40f, -5.0f);

glColor3f (0.3, 0, 0);//body
glVertex3f(0.32f, 0.31f, -5.0f);
glVertex3f(0.68f, 0.31f, -5.0f);
glVertex3f(0.68f, 0.51f, -5.0f);
glVertex3f(0.30f, 0.51f, -5.0f);
glEnd();




  //cow--------------------------------------------------------------------
glBegin(GL_TRIANGLES); //Begin triangle coordinates

    glColor3f (0.3, 0, 0.2);//mouth
  glVertex3f(0.16f, 0.20f, -5.0f);
  glVertex3f(0.19f, 0.29f, -5.0f);
  glVertex3f(0.10f, 0.28f, -5.0f);

    glColor3f (0.3, 0.2, 0.4); //neck2
  glVertex3f(0.21f, 0.29f, -5.0f);
  glVertex3f(0.215f, 0.40f, -5.0f);
  glVertex3f(0.10f, 0.28f, -5.0f);

    glColor3f (0,0,0);//horn
  glVertex3f(0.10f, 0.28f, -5.0f);
  glVertex3f(0.12f, 0.30f, -5.0f);
  glVertex3f(0.07f, 0.32f, -5.0f);

    glColor3f (1.0, 0.7, 0.3);//leg1
    glVertex3f(0.32f, 0.19f, -5.0f);
  glVertex3f(0.38f, 0.31f, -5.0f);
  glVertex3f(0.32f, 0.31f, -5.0f);

  glColor3f (1.0, 0.6, 0.2);//leg2
  glVertex3f(0.40f, 0.19f, -5.0f);
  glVertex3f(0.40f, 0.31f, -5.0f);
  glVertex3f(0.35f, 0.31f, -5.0f);



  glColor3f (1.0, 0.7, 0.3);//leg4
  glVertex3f(0.68f, 0.19f, -5.0f);
  glVertex3f(0.68f, 0.31f, -5.0f);
  glVertex3f(0.62f, 0.31f, -5.0f);



   glColor3f (1.0, 0.7, 0.3);//tail
  glVertex3f(0.68f, 0.42f, -5.0f);
  glVertex3f(0.83f, 0.36f, -5.0f);
  glVertex3f(0.68f, 0.51f, -5.0f);

  glColor3f (1.0, 0.6, 0.2);//leg3
  glVertex3f(0.60f, 0.19f, -5.0f);
  glVertex3f(0.66f, 0.31f, -5.0f);
  glVertex3f(0.60f, 0.31f, -5.0f);

  glColor3f(0.2f, 0.7f, 0.2f);//tree
  glVertex3f(0.92f, 0.40f, -5.0f);
  glVertex3f(0.90f, 0.28f, -5.0f);
  glVertex3f(0.94f, 0.28f, -5.0f);

  glColor3f(0.2f, 0.7f, 0.2f);//grass mid
  glVertex3f(0.16f, 0.20f, -5.0f);
  glVertex3f(0.17f, 0.13f, -5.0f);
  glVertex3f(0.15f, 0.13f, -5.0f);


  glVertex3f(0.13f, 0.20f, -5.0f); //grass left
  glVertex3f(0.135f, 0.13f, -5.0f);
  glVertex3f(0.16f, 0.13f, -5.0f);

  glVertex3f(0.19f, 0.20f, -5.0f);//grass right
  glVertex3f(0.185f, 0.13f, -5.0f);
  glVertex3f(0.16f, 0.13f, -5.0f);
    glEnd();



glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (800, 800);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Cow eating grass Scenerio");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
