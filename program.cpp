#include<stdio.h>
#include <gl/freeglut.h>
#include<math.h>

float y=0,ang=0,i=0,k=0,n=0;
float a=900,b=880,c=900,d=900,p,q=0,s;
float g=0;   //kecepatan kapal bergerak

void sea()
{
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.50,1.0);
    glVertex2f(0.0,0.0);
    glVertex2f(2000.0,0.0);
    glVertex2f(2000.0,1600.0);
    glVertex2f(0.0,1600.0);
    glEnd();
    glPushMatrix();
    glTranslatef(0,q,0);

    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    for(p=0;p<20000;p=p+100)
    for(s=0;s<20000;s=s+100)
    glVertex2f(100.0+s,100.0+p);
    glVertex2f(200.0+s,100.0+p);
    glEnd();
    glPopMatrix();
}

void pulau(int xp, int yp, int r, int n){
    float a,x,y;
    glColor3f(0.19, 0.87, 0);
    glBegin(GL_POLYGON);
        a=6.28/n;
        for (int i=0; i<n; i++){
            x = xp+r * cos(i*a);
            y = yp+r * sin(i*a);
            glVertex2d(x,y);
        }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.03, 0.72, 0.78); //kali
    glVertex2f(1800, 1300);
    glVertex2f(1900, 1200);
    glVertex2f(1900, 1000);
    glVertex2f(1800, 900);
    glVertex2f(1700, 1000);
    glVertex2f(1700, 1200);
 glEnd();

   // glBegin(GL_POLYGON);
    //glColor3f(0.5, 0.03, 0.02);
    //glVertex2f(1600, 1400);
    //glVertex2f(1600, 1500);
    //glVertex2f(1500, 1500);
    //glVertex2f(1500, 1400);
    //glVertex2f(1600, 1400);
    //glVertex2f(1600, 1300);
    //glVertex2f(1700, 1300);
    //glVertex2f(1700, 1400);
//glEnd();

    glBegin(GL_POLYGON); //atap rumah1
    glColor3f(0.86, 0.08, 0.02);
    glVertex2f(1300, 1200);
    glVertex2f(1300, 1300);
    glVertex2f(1400, 1300);
    glVertex2f(1400, 1200);
glEnd();

    glBegin(GL_POLYGON); //lapis atap rumah1
    glColor3f(0.5, 0.09, 0.07);
    glVertex2f(1320, 1220);
    glVertex2f(1320, 1280);
    glVertex2f(1380, 1280);
    glVertex2f(1380, 1220);
    glEnd();

    glBegin(GL_POLYGON); //atap rumah2
    glColor3f(0.95, 0.16, 0.1);
    glVertex2f(1300, 1320);
    glVertex2f(1300, 1420);
    glVertex2f(1400, 1420);
    glVertex2f(1400, 1320);
glEnd();

    glBegin(GL_POLYGON); //lapis atap rumah2
    glColor3f(0.41, 0.08, 0.06);
    glVertex2f(1320, 1340);
    glVertex2f(1320, 1400);
    glVertex2f(1380, 1400);
    glVertex2f(1380, 1340);
    glEnd();

    glBegin(GL_POLYGON); //atap rumah3
    glColor3f(0.82, 0.35, 0.01);
    glVertex2f(1420, 1200);
    glVertex2f(1420, 1300);
    glVertex2f(1520, 1300);
    glVertex2f(1520, 1200);
    glEnd();

    glBegin(GL_POLYGON); //lapis atap rumah3
    glColor3f(0.91, 0.44, 0.11);
    glVertex2f(1440, 1220);
    glVertex2f(1440, 1280);
    glVertex2f(1500, 1280);
    glVertex2f(1500, 1220);
    glEnd();

    glBegin(GL_POLYGON); //atap rumah4
    glColor3f(0.82, 0.35, 0.01);
    glVertex2f(1420, 1320);
    glVertex2f(1420, 1420);
    glVertex2f(1520, 1420);
    glVertex2f(1520, 1320);
    glEnd();

    glBegin(GL_POLYGON); //lapis atap rumah4
    glColor3f(0.91, 0.44, 0.11);
    glVertex2f(1440, 1340);
    glVertex2f(1440, 1400);
    glVertex2f(1500, 1400);
    glVertex2f(1500, 1340);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.52, 0.52, 0.52); //atap sekolah 1
    glVertex2f(1650, 1550);
    glVertex2f(1750, 1550);
    glVertex2f(1850, 1550);
    glVertex2f(1850, 1500);
    glVertex2f(1750, 1500);
    glVertex2f(1650, 1500);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.34, 0.34, 0.34); //lapis atap sekolah 1
    glVertex2f(1660, 1540);
    glVertex2f(1750, 1540);
    glVertex2f(1840, 1540);
    glVertex2f(1840, 1510);
    glVertex2f(1750, 1510);
    glVertex2f(1660, 1510);
glEnd();

glBegin(GL_POLYGON);
    glColor3f(0.52, 0.52, 0.52); //atap sekolah 2
    glVertex2f(1650, 1500);
    glVertex2f(1700, 1500);
    glVertex2f(1700, 1400);
    glVertex2f(1650, 1400);
    glEnd();

glBegin(GL_POLYGON);
    glColor3f(0.34, 0.34, 0.34); //lapis atap sekolah 2
    glVertex2f(1660, 1540);
    glVertex2f(1690, 1540);
    glVertex2f(1690, 1410);
    glVertex2f(1660, 1410);
    glEnd();

glBegin(GL_POLYGON);
    glColor3f(0.52, 0.52, 0.52); //atap sekolah 3
    glVertex2f(1800, 1500);
    glVertex2f(1850, 1500);
    glVertex2f(1850, 1400);
    glVertex2f(1800, 1400);
    glEnd();

glBegin(GL_POLYGON);
    glColor3f(0.34, 0.34, 0.34); //lapis atap sekolah 3
    glVertex2f(1810, 1510);
    glVertex2f(1840, 1510);
    glVertex2f(1840, 1410);
    glVertex2f(1810, 1410);
    glEnd();
    

    glBegin(GL_POLYGON); //atap rumah6
    glColor3f(0.68, 0.43, 0.08);
    glVertex2f(1350, 980);
    glVertex2f(1350, 1060);
    glVertex2f(1450, 1060);
    glVertex2f(1450, 980);
glEnd();

    glBegin(GL_POLYGON); //lapis atap rumah6
    glColor3f(0.94, 0.58, 0.06);
    glVertex2f(1370, 1000);
    glVertex2f(1370, 1040);
    glVertex2f(1430, 1040);
    glVertex2f(1430, 1000);
    glEnd();

    glBegin(GL_POLYGON); //atap rumah7
    glColor3f(0.68, 0.43, 0.08);
    glVertex2f(1350, 1100);
    glVertex2f(1350, 1180);
    glVertex2f(1450, 1180);
    glVertex2f(1450, 1100);
glEnd();

    glBegin(GL_POLYGON); //lapis atap rumah7
    glColor3f(0.94, 0.58, 0.06);
    glVertex2f(1370, 1120);
    glVertex2f(1370, 1160);
    glVertex2f(1430, 1160);
    glVertex2f(1430, 1120);
    glEnd();

    glBegin(GL_POLYGON); //atap rumah8
    glColor3f(0.68, 0.43, 0.08);
    glVertex2f(1470, 1100);
    glVertex2f(1470, 1180);
    glVertex2f(1570, 1180);
    glVertex2f(1570, 1100);
glEnd();

    glBegin(GL_POLYGON); //lapis atap rumah8
    glColor3f(0.94, 0.58, 0.06);
    glVertex2f(1490, 1120);
    glVertex2f(1490, 1160);
    glVertex2f(1550, 1160);
    glVertex2f(1550, 1120);
    glEnd();
    
    glBegin(GL_POLYGON); //lapangan
    glColor3f(0.18, 0.47, 0);
    glVertex2f(1540, 1000);
    glVertex2f(1580, 1000);
    glVertex2f(1620, 1000);
    glVertex2f(1660, 1000);
    glVertex2f(1660, 900);
    glVertex2f(1660, 800);
    glVertex2f(1620, 800);
    glVertex2f(1580, 800);
    glVertex2f(1540, 800);
    glVertex2f(1540, 900);

    glEnd();



    
    
}

void boat()
{
  glPushMatrix();
  glTranslatef(0,y,0);
  glPushMatrix();
  glBegin(GL_POLYGON);
  glColor3f(0.77, 0.78, 0.78);
  glVertex2f(400.0,200.0);
  glVertex2f(300.0,120.0);
  glVertex2f(250.0,0.0);
  glVertex2f(250.0,-300.0);     //ship
  glVertex2f(400.0,-450.0);
  glVertex2f(550.0,-300.0);
  glVertex2f(550.0,0.0);
  glVertex2f(500.0,120.0);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(0.23, 0.24, 0.24);     // ship back  1
  glVertex2f(250.0,-300.0);
  glVertex2f(400.0,-500.0);
  glVertex2f(400.0,-450.0);
  glVertex2f(251.0,-300.0);
 glEnd();

 glBegin(GL_POLYGON);
  glColor3f(0.33, 0.34, 0.34);
  glVertex2f(401.0,-500.0);      //ship back  2
  glVertex2f(550.0,-300.0);
  glVertex2f(401.0,-450.0);
 glEnd();

 glBegin(GL_LINES);
  glColor3f(0.16, 0.17, 0.17);
  glVertex2f(400.0,200.0);
  glVertex2f(320.0,100.0);  //pegangan kapal
  glVertex2f(320.0,100.0);
  glVertex2f(300.0,120.0);
  glVertex2f(320.0,100.0);
  glVertex2f(270.0,0.0);
  glVertex2f(270.0,0.0);
  glVertex2f(250.0,0.0);
  glVertex2f(270.0,0.0);
  glVertex2f(270.0,-300.0);
  glVertex2f(270.0,-300.0);
  glVertex2f(250.0,-300.0);
  glVertex2f(270.0,-300.0);
  glVertex2f(400.0,-430.0);
  glVertex2f(400.0,-430.0);
  glVertex2f(400.0,-450.0);
  glVertex2f(400.0,-430.0);
  glVertex2f(530.0,-300.0);
  glVertex2f(530.0,-300.0);
  glVertex2f(550.0,-300.0);
  glVertex2f(530.0,-300.0);
  glVertex2f(530.0,0.0);
  glVertex2f(530.0,0.0);
  glVertex2f(550.0,0.0);
  glVertex2f(530.0,0.0);
  glVertex2f(480.0,120.0);
  glVertex2f(480.0,120.0);
  glVertex2f(500.0,120.0);
  glVertex2f(480.0,120.0);
  glVertex2f(400.0,200.0);
  glVertex2f(270.0,-150.0);
  glVertex2f(250.0,-150.0);
  glVertex2f(270.0,-50.0);
  glVertex2f(250.0,-50.0);
  glVertex2f(270.0,-250.0);
  glVertex2f(250.0,-250.0);
  glVertex2f(530.0,-250.0);
  glVertex2f(550.0,-250.0);
  glVertex2f(530.0,-150.0);
  glVertex2f(550.0,-150.0);
  glVertex2f(530.0,-50.0);
  glVertex2f(550.0,-50.0);
  glVertex2f(340.0,-370.0);
  glVertex2f(320.0,-390.0);
  glVertex2f(475.0,-390);
  glVertex2f(455.0,-375.0);
  glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.34, 0.35, 0.35);
   glVertex2f(340.0,0.0);   //tempat senjata
   glVertex2f(460.0,0.0);
   glVertex2f(460.0,100.0);
   glVertex2f(340.0,100.0);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.53, 0.54, 0.54);
   glVertex2f(350.0,10.0);   //tempat senjata2
   glVertex2f(450.0,10.0);
   glVertex2f(450.0,90.0);
   glVertex2f(350.0,90.0);
   glEnd();
  
   glBegin(GL_POLYGON);
   glColor3f(0.28, 0.29, 0.29);
   glVertex2f(405.0,100); 
   glVertex2f(425.0,100.0); //moncong senjata
   glVertex2f(425.0,170.0);
   glVertex2f(405.0,170.0);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.28, 0.29, 0.29);
   glVertex2f(375.0,100); 
   glVertex2f(395.0,100.0); //moncong senjata2
   glVertex2f(395.0,170.0);
   glVertex2f(375.0,170.0);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.57, 0.58, 0.58);
   glVertex2f(330.0,-300.0);   //ruang nahkoda
   glVertex2f(490.0,-300.0);
   glVertex2f(490.0,-50.0);
   glVertex2f(330.0,-50.0);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.32, 0.34, 0.34);
   glVertex2f(330.0,-300.0);   //ruang nahkoda lapis 2
   glVertex2f(470.0,-300.0);
   glVertex2f(470.0,-50.0);
   glVertex2f(330.0,-50.0);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.71, 0.71);
   glVertex2f(350.0,-270.0);   //ruang nahkoda lapis 3
   glVertex2f(450.0,-270.0);
   glVertex2f(450.0,-80.0);
   glVertex2f(350.0,-80.0);
   glEnd();

  glBegin(GL_LINES);
  glColor3f(0.16, 0.17, 0.17);
  glVertex2f(490.0,-300.0);
  glVertex2f(470.0,-300.0); //Garis pinggir bawah
  glVertex2f(490.0,-300.0);
  glVertex2f(470.0,-300.0);
  glEnd();

  glBegin(GL_LINES);
  glColor3f(0.16, 0.17, 0.17);
  glVertex2f(330.0,-300.0);
  glVertex2f(350.0,-270.0);
  glVertex2f(470.0,-300.0);
  glVertex2f(450.0,-270.0);
  glVertex2f(470.0,-50.0);
  glVertex2f(450.0,-80.0);
  glVertex2f(330.0,-50.0);
  glVertex2f(350.0,-80.0);
  glEnd();

 glPopMatrix();
}

void boat1()
{
  glPushMatrix();
  glTranslatef(0,y,0);
  glPushMatrix();
  glBegin(GL_POLYGON);
  glColor3f(0.77, 0.78, 0.78);
  glVertex2f(900.0,700.0);
  glVertex2f(800.0,620.0);
  glVertex2f(750.0,500.0);
  glVertex2f(750.0,200.0);     //ship
  glVertex2f(900.0,50.0);
  glVertex2f(1050.0,200.0);
  glVertex2f(1050.0,500.0);
  glVertex2f(1000.0,620.0);
 glEnd();


 glBegin(GL_POLYGON);
  glColor3f(0.23, 0.24, 0.24);     // ship back  1
  glVertex2f(750.0,200.0);
  glVertex2f(900.0,0.0);
  glVertex2f(900.0,50.0);
  glVertex2f(751.0,200.0);
 glEnd();

 glBegin(GL_POLYGON);
  glColor3f(0.33, 0.34, 0.34);
  glVertex2f(901.0,0.0);      //ship back  2
  glVertex2f(1050.0,200.0);
  glVertex2f(901.0,50.0);
 glEnd();


 glBegin(GL_LINES);
  glColor3f(0.0,0.0,0.0);
  glVertex2f(900.0,700.0);
  glVertex2f(820.0,600.0);  //boat grill
  glVertex2f(820.0,600.0);
  glVertex2f(800.0,620.0);
  glVertex2f(820.0,600.0);
  glVertex2f(770.0,500.0);
  glVertex2f(770.0,500.0);
  glVertex2f(750.0,500.0);
  glVertex2f(770.0,500.0);
  glVertex2f(770.0,200.0);
  glVertex2f(770.0,200.0);
  glVertex2f(750.0,200.0);
  glVertex2f(770.0,200.0);
  glVertex2f(900.0,70.0);
  glVertex2f(900.0,70.0);
  glVertex2f(900.0,50.0);
  glVertex2f(900.0,70.0);
  glVertex2f(1030.0,200.0);
  glVertex2f(1030.0,200.0);
  glVertex2f(1050.0,200.0);
  glVertex2f(1030.0,200.0);
  glVertex2f(1030.0,500.0);
  glVertex2f(1030.0,500.0);
  glVertex2f(1050.0,500.0);
  glVertex2f(1030.0,500.0);
  glVertex2f(980.0,620.0);
  glVertex2f(980.0,620.0);
  glVertex2f(1000.0,620.0);
  glVertex2f(980.0,620.0);
  glVertex2f(900.0,700.0);
  glVertex2f(770.0,350.0);
  glVertex2f(750.0,350.0);
  glVertex2f(770.0,450.0);
  glVertex2f(750.0,450.0);
  glVertex2f(770.0,250.0);
  glVertex2f(750.0,250.0);
  glVertex2f(1030.0,250.0);
  glVertex2f(1050.0,250.0);
  glVertex2f(1030.0,350.0);
  glVertex2f(1050.0,350.0);
  glVertex2f(1030.0,450.0);
  glVertex2f(1050.0,450.0);
  glVertex2f(840.0,130.0);
  glVertex2f(820.0,110.0);
  glVertex2f(975.0,110);
  glVertex2f(955.0,125.0);
 glEnd();

  glBegin(GL_POLYGON);
   glColor3f(0.34, 0.35, 0.35);
   glVertex2f(840.0,500.0);   //tempat senjata
   glVertex2f(960.0,500.0);
   glVertex2f(960.0,600.0);
   glVertex2f(840.0,600.0);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.53, 0.54, 0.54);
   glVertex2f(850.0,510.0);   //tempat senjata2
   glVertex2f(950.0,510.0);
   glVertex2f(950.0,590.0);
   glVertex2f(850.0,590.0);
   glEnd();
  
   glBegin(GL_POLYGON);
   glColor3f(0.28, 0.29, 0.29);
   glVertex2f(905.0,600); 
   glVertex2f(925.0,600.0); //moncong senjata
   glVertex2f(925.0,670.0);
   glVertex2f(905.0,670.0);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.28, 0.29, 0.29);
   glVertex2f(875.0,600.0); 
   glVertex2f(895.0,600.0); //moncong senjata2
   glVertex2f(895.0,670.0);
   glVertex2f(875.0,670.0);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.57, 0.58, 0.58);
   glVertex2f(830.0,200.0);   //ruang nahkoda
   glVertex2f(990.0,200.0);
   glVertex2f(990.0,450.0);
   glVertex2f(830.0,450.0);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.32, 0.34, 0.34);
   glVertex2f(830.0,200.0);   //ruang nahkoda lapis 2
   glVertex2f(970.0,200.0);
   glVertex2f(970.0,450.0);
   glVertex2f(830.0,450.0);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.71, 0.71);
   glVertex2f(850.0,230.0);   //ruang nahkoda lapis 3
   glVertex2f(950.0,230.0);
   glVertex2f(950.0,420.0);
   glVertex2f(850.0,420.0);
   glEnd();

   glBegin(GL_LINES);
  glColor3f(0.16, 0.17, 0.17);
  glVertex2f(999.0,-800.0);
  glVertex2f(970.0,-800.0); //Garis pinggir bawah
  glVertex2f(990.0,-800.0);
  glVertex2f(970.0,-800.0);
  glEnd();

  glBegin(GL_LINES);
  glColor3f(0.16, 0.17, 0.17);
  glVertex2f(830.0,-800.0);
  glVertex2f(850.0,-770.0);
  glVertex2f(970.0,-800.0);
  glVertex2f(950.0,-770.0);
  glVertex2f(970.0,-550.0);
  glVertex2f(950.0,-580.0);
  glVertex2f(830.0,-550.0);
  glVertex2f(850.0,-580.0);
  glEnd();

 glPopMatrix();
}


void display(void)
{

   glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
   sea();
   pulau(1800,1250,550,650);
   boat1();
   boat();

  glFlush();
  glutSwapBuffers();
}

void animate()
{
    q=q-.5;
    y=y+0.2;

    i+=0.2;
    if((i>=135) && (i<=439))
    { k=k+0.1;
    n=n+0.1;
    }
    if(i>=1200 && !(k<=0 && n<=0))
    {
    k=k-0.1;
    n=n-0.1;
    }

    if(k<=0)
    g-=0.5;

    glutPostRedisplay();
}

void myinit()
{
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f(1.0,1.0,1.0);
    glPointSize(1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,2000.0,0.0,1600.0);
}


void main_menu(int ch)
{
 switch(ch)
 {
 case 1:glutIdleFunc(NULL);
     break;

 case 2:glutIdleFunc(animate);
     break;

 case 3:exit(0);
 }

}

int main(int argc,char **argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
 glutInitWindowSize(1200,650);
 glutInitWindowPosition(0,0);
 glutCreateWindow("TA_GRAFKOM");

 glutCreateMenu(main_menu);
 glutAddMenuEntry("STOP ANIMASI",1);
 glutAddMenuEntry("MULAI ANIMASI",2);

 glutAddMenuEntry("KELUAR",3);
 glutAttachMenu(GLUT_RIGHT_BUTTON);
 glutDisplayFunc(display);
 myinit();
 glClearColor (1.0, 1.0, 0.0, 1.0);
 glutMainLoop();

 return 0;
}