#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <gl/glut.h>
#include<math.h>
#define PI 3.1416
#include <stdlib.h>
#define MAX_CHAR 128
GLfloat lineWidth=2;


void glArc(double x,double y,double start_angle,double end_angle,double radius,int MODE)
{
    //��ʼ��������
    glBegin(MODE);
    //ÿ�λ����ӵĻ���
    double delta_angle=PI/180;
    //��Բ��
    for (double i=start_angle;i<=end_angle;i+=delta_angle)
    {
        //���Զ�λ�����Ǻ���ֵ
        double vx=x+radius * cos(i);
        double vy=y+radius*sin(i);
        glVertex2d(vx,vy);
    }
    //�����滭
    glEnd();
}
void glCircle(double x, double y, double radius,int MODE)
{
    //��ȫԲ
    glArc(x,y,0,10*PI,radius,MODE);
}
void glFillCircle(double x, double y, double radius,int color[3]){

    glColor3ub(color[0],color[1],color[2]);
    glCircle(x,y,radius-lineWidth/2,GL_POLYGON);
}
void glju(int leftX,int leftY,int rightX,int rightY){
    //������
    glBegin(GL_QUADS);
    //���½�
    glVertex2d(leftX,leftY);
    //���½�
    glVertex2d(rightX,leftY);
    //���Ͻ�
    glVertex2d(rightX,rightY);
    //���Ͻ�
    glVertex2d(leftX,rightY);
    //��������
    glEnd();
}

void glbuju(int X1,int Y1,int X2,int Y2,int X3,int Y3,int X4,int Y4){
    //������
    glBegin(GL_QUADS);
    //���½�
    glVertex2d(X1,Y1);
    //���½�
    glVertex2d(X2,Y2);
    //���Ͻ�
    glVertex2d(X3,Y3);
    //���Ͻ�
    glVertex2d(X4,Y4);
    //��������
    glEnd();
}

void glsan(int x1,int y1,int x2,int y2,int x3,int y3){
    //�������
    glBegin(GL_TRIANGLES);
    //һ��
    glVertex2d(x1,y1);
    //����
    glVertex2d(x2,y2);
    //����
    glVertex2d(x3,y3);
    //��������
    glEnd();
}

     int lv[3]={151,180,87};
    int lv2[3]={122,126,50};
    int yellow1[3]={222,157,77};
     int yellow2[3]={197,121,85};
      int bai[3]={255,254,244};

void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
	//glClearColor (0.0, 0.0, 0.0, 0.0);
	//glClear(GL_COLOR_BUFFER_BIT);
    glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
	glLoadIdentity(); //����ǰ������Ϊ��λ��
	  //����

	glPushMatrix();
    glColor3ub(253,240,162);
    glju(-757,-356,740,394);
	glPopMatrix();

    glPushMatrix();
    glColor3ub(242,210,127);
    glju(-757,-308,488,-57);
	glPopMatrix();

	 glPushMatrix();
    glColor3ub(242,210,127);
    glju(-757,-57,-645,77);
	glPopMatrix();
	 glPushMatrix();
    glColor3ub(242,210,127);
    glju(-596,-57,-466,61);
	glPopMatrix();
	 glPushMatrix();
    glColor3ub(242,210,127);
    glju(-567,-61,-495,99);
	glPopMatrix();
	 glPushMatrix();
    glColor3ub(242,210,127);
    glju(-468,-100,-395,-9);
	glPopMatrix();
	 glPushMatrix();
    glColor3ub(242,210,127);
    glju(-395,-100,-235,208);
	glPopMatrix();

	 glPushMatrix();
    glColor3ub(242,210,127);
    glju(-292,208,-265,243);
	glPopMatrix();

	 glPushMatrix();
    glColor3ub(242,210,127);
    glju(-238,-100,-104,118);
	glPopMatrix();

	 glPushMatrix();
    glColor3ub(242,210,127);
    glju(-104,-100,-142,255);
	glPopMatrix();

	 glPushMatrix();
    glColor3ub(242,210,127);
    glju(-104,-255,101,281);
	glPopMatrix();

		 glPushMatrix();
    glColor3ub(242,210,127);
    glju(93,-100,143,255);
	glPopMatrix();

	 glPushMatrix();
    glColor3ub(242,210,127);
    glju(142,-100,241,127);
	glPopMatrix();

	 glPushMatrix();
    glColor3ub(242,210,127);
    glju(241,-100,488,208);
	glPopMatrix();

	 glPushMatrix();
    glColor3ub(242,210,127);
    glju(281,208,308,246);
	glPopMatrix();

		 glPushMatrix();
		 glTranslatef(70, 0, 0.0);
    glColor3ub(242,210,127);
    glju(281,208,308,246);

	glPopMatrix();
     glPushMatrix();
    glTranslatef(140, 0, 0.0);
    glColor3ub(242,210,127);
    glju(281,208,308,246);
	glPopMatrix();
	glPopMatrix();
     glPushMatrix();

    glColor3ub(242,210,127);
    glju(578,-109,740,22);
	glPopMatrix();

	  glPushMatrix();
    glColor3ub(242,210,127);
    glju(424,-308,740,-109);
	glPopMatrix();

  glPushMatrix();
    glColor3ub(242,210,127);
    glju(616,22,643,59);
	glPopMatrix();
	  glPushMatrix();
	    glTranslatef(60, 0, 0.0);
    glColor3ub(242,210,127);
    glju(616,22,643,59);
	glPopMatrix();
//������
//��·
  glPushMatrix();
    glColor3ub(103,113,122);
    glju(-757,-356,740,-320);
	glPopMatrix();
 glPushMatrix();
    glColor3ub(126,133,149);
    glju(-757,-320,740,-308);
	glPopMatrix();
	//�̻�
	glPushMatrix();
    glColor3ub(122,126,50);
    glju(-404,-308,-348,-205);
	glPopMatrix();
		glPushMatrix();
		glTranslatef(1050, 0, 0.0);
    glColor3ub(122,126,50);
    glju(-404,-308,-348,-205);
	glPopMatrix();
	glPushMatrix();

//you�̻�
 glTranslatef(1050, 0, 0.0);
	glPushMatrix();
    glColor3ub(151,180,87);
    glju(-682,-308,-404,-205);
	glPopMatrix();

  glPushMatrix();
  glFillCircle(-669,-219,7,lv2);
   glPopMatrix();
  glPushMatrix();
  glFillCircle(-652,-243,7,lv2);
   glPopMatrix();
     glPushMatrix();
  glFillCircle(-660,-272,7,lv2);
   glPopMatrix();
     glPushMatrix();
  glFillCircle(-607,-256,7,lv2);
   glPopMatrix();
     glPushMatrix();
  glFillCircle(-596,-287,7,lv2);
   glPopMatrix();
     glPushMatrix();
  glFillCircle(-510,-255,7,lv2);
   glPopMatrix();
     glPushMatrix();
  glFillCircle(-462,-298,7,lv2);
   glPopMatrix();
     glPushMatrix();
  glFillCircle(-412,-224,7,lv2);

 glPopMatrix();
     glPushMatrix();
  glFillCircle(-620,-233,12,lv2);
 glPopMatrix();
     glPushMatrix();
  glFillCircle(-535,-280,12,lv2);
 glPopMatrix();
     glPushMatrix();
  glFillCircle(-478,-221,12,lv2);
 glPopMatrix();
     glPushMatrix();
  glFillCircle(-430,-229,12,lv2);
   glPopMatrix();

     glPushMatrix();
  glFillCircle(-631,-280,18,lv2);
   glPopMatrix();
  glPushMatrix();
  glFillCircle(-540,-228,18,lv2);
   glPopMatrix();
 glPushMatrix();
  glFillCircle(-475,-262,18,lv2);
   glPopMatrix();
glPopMatrix();

glPushMatrix();
    glColor3ub(72,106,115);
    glju(-393,-308,411,-290);
	glPopMatrix();
	//��Բ
	glPushMatrix();
 glFillCircle(-683,-252,13,lv);
glPopMatrix();
	//��Բ
	glPushMatrix();
 glFillCircle(-680,-230,8,lv);
glPopMatrix();
//��Բ
	glPushMatrix();
 glFillCircle(-633,-207,14,lv);
glPopMatrix();
glPushMatrix();
glTranslatef(1050, 0, 0.0);
 glFillCircle(-633,-207,14,lv);
glPopMatrix();
//���̻�
	glPushMatrix();
    glColor3ub(151,180,87);
    glju(-682,-308,-404,-205);
	glPopMatrix();

  glPushMatrix();
  glFillCircle(-669,-219,7,lv2);
   glPopMatrix();
  glPushMatrix();
  glFillCircle(-652,-243,7,lv2);
   glPopMatrix();
     glPushMatrix();
  glFillCircle(-660,-272,7,lv2);
   glPopMatrix();
     glPushMatrix();
  glFillCircle(-607,-256,7,lv2);
   glPopMatrix();
     glPushMatrix();
  glFillCircle(-596,-287,7,lv2);
   glPopMatrix();
     glPushMatrix();
  glFillCircle(-510,-255,7,lv2);
   glPopMatrix();
     glPushMatrix();
  glFillCircle(-462,-298,7,lv2);
   glPopMatrix();
     glPushMatrix();
  glFillCircle(-412,-224,7,lv2);

 glPopMatrix();
     glPushMatrix();
  glFillCircle(-620,-233,12,lv2);
 glPopMatrix();
     glPushMatrix();
  glFillCircle(-535,-280,12,lv2);
 glPopMatrix();
     glPushMatrix();
  glFillCircle(-478,-221,12,lv2);
 glPopMatrix();
     glPushMatrix();
  glFillCircle(-430,-229,12,lv2);
   glPopMatrix();

     glPushMatrix();
  glFillCircle(-631,-280,18,lv2);
   glPopMatrix();
  glPushMatrix();
  glFillCircle(-540,-228,18,lv2);
   glPopMatrix();
 glPushMatrix();
  glFillCircle(-475,-262,18,lv2);
   glPopMatrix();
//����
glPushMatrix();
    glColor3ub(122,126,52);
    glju(-486,-200,-409,-38);
	glPopMatrix();
 glPushMatrix();
glPushMatrix();
    glColor3ub(122,116,102);
    glju(-454,-308,-441,-200);
	glPopMatrix();
 glPushMatrix();

       glPushMatrix();
       glColor3ub(159,167,92);
        glBegin(GL_TRIANGLES);
         glVertex2d(-512,-38);
         glVertex2d(-460,-38);
         glVertex2d(-486,-68);
         glEnd();
		glPopMatrix();
		glPushMatrix();
		  glTranslatef(0, -136, 0.0);
       glColor3ub(159,167,92);
        glBegin(GL_TRIANGLES);
         glVertex2d(-512,-38);
         glVertex2d(-460,-38);
         glVertex2d(-486,-68);
         glEnd();
		glPopMatrix();

       glPushMatrix();
        glTranslatef(77, 0, 0.0);
       glColor3ub(159,167,92);
        glBegin(GL_TRIANGLES);
         glVertex2d(-512,-38);
         glVertex2d(-460,-38);
         glVertex2d(-486,-68);
         glEnd();
		glPopMatrix();
		  glPushMatrix();
        glTranslatef(77, -68, 0.0);
       glColor3ub(159,167,92);
        glBegin(GL_TRIANGLES);
         glVertex2d(-512,-38);
         glVertex2d(-460,-38);
         glVertex2d(-486,-68);
         glEnd();
		glPopMatrix();

		  glPushMatrix();
        //glTranslatef(77, -68, 0.0);
       glColor3ub(159,167,92);
        glBegin(GL_TRIANGLES);
         glVertex2d(-421,-83);
         glVertex2d(-474,-83);
         glVertex2d(-448,-54);
         glEnd();
		glPopMatrix();
		glPushMatrix();
        //glTranslatef(77, -68, 0.0);
       glColor3ub(159,167,92);
        glBegin(GL_TRIANGLES);
         glVertex2d(-510,-85);
         glVertex2d(-510,-137);
         glVertex2d(-480,-111);
         glEnd();
		glPopMatrix();
		glPushMatrix();
        //glTranslatef(77, -68, 0.0);
       glColor3ub(159,167,92);
        glBegin(GL_TRIANGLES);
         glVertex2d(-422,-167);
         glVertex2d(-422,-220);
         glVertex2d(-393,-192);
         glEnd();
		glPopMatrix();
		glPushMatrix();
        //glTranslatef(77, -68, 0.0);
       glColor3ub(159,167,92);
        glBegin(GL_TRIANGLES);
         glVertex2d(-441,-156);
         glVertex2d(-441,-104);
         glVertex2d(-469,-130);
         glEnd();
		glPopMatrix();



//�����������

	glPushMatrix();
    glColor3ub(110,89,108);
    glju(-350,-291,-295,-72);/////////////////
	glPopMatrix();


	glPushMatrix();
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
    glPushMatrix();
    glTranslatef(0,24,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
    glTranslatef(0,48,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,72,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,96,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,120,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,144,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
		glPushMatrix();
	glTranslatef(0,168,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
		glPushMatrix();
	glTranslatef(0,192,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();

glPushMatrix();
    glTranslatef(25,0,0.0);
	glPushMatrix();
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
    glPushMatrix();
    glTranslatef(0,24,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
    glTranslatef(0,48,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,72,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,96,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,120,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,144,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
		glPushMatrix();
	glTranslatef(0,168,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
		glPushMatrix();
	glTranslatef(0,192,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
 glPopMatrix();

//�����Ҳ�����
glPushMatrix();
glTranslatef(663,0,0.0);
	glPushMatrix();
    glColor3ub(110,89,108);
    glju(-350,-291,-295,-72);/////////////////
	glPopMatrix();


	glPushMatrix();
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
    glPushMatrix();
    glTranslatef(0,24,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
    glTranslatef(0,48,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,72,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,96,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,120,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,144,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
		glPushMatrix();
	glTranslatef(0,168,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
		glPushMatrix();
	glTranslatef(0,192,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();

glPushMatrix();
    glTranslatef(25,0,0.0);
	glPushMatrix();
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
    glPushMatrix();
    glTranslatef(0,24,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
    glTranslatef(0,48,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,72,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,96,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,120,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,144,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
		glPushMatrix();
	glTranslatef(0,168,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
		glPushMatrix();
	glTranslatef(0,192,0.0);
    glColor3ub(89,68,87);
    glju(-345,-285,-327,-268);
	glPopMatrix();
 glPopMatrix();
 glPopMatrix();
 //���ӷ���
   glPushMatrix();
    glColor3ub(201,80,99);
    glju(-374,-72,390,-45);

     glPopMatrix;
   glPushMatrix();
    glColor3ub(243,219,214); /////////////baihuaang��ɫ
    glju(-374,-45,390,-36);
    glPopMatrix;
        glPopMatrix;
   glPushMatrix();
    glColor3ub(227,105,120); /////////////fen��ɫ
    glsan(-374,-36,-357,1,-357,-36);
    glsan(373,-36,373,1,389,-36);
    glPopMatrix;
          glPopMatrix;
   glPushMatrix();
    glColor3ub(227,105,120); /////////////fen��ɫ
    glju(-357,-36,373,1);
     glColor3ub(243,219,214);
    glju(-357,1,373,22);
     glColor3ub(66,66,92);
     glju(-357,22,373,78);
    glPopMatrix;

/*

*/
//�����м���ɫ
 	glPushMatrix();
    glColor3ub(54,32,35);
    glju(-295,-291,314,-72);
	glPopMatrix();
	glPushMatrix();
    glColor3ub(104,69,76); /////////////��ɫ
    glju(-295,-216,314,-206);
	glPopMatrix();

	glPushMatrix();
    glColor3ub(111,90,109); /////////////��ɫ
    glju(-295,-286,-39,-270);
	glPopMatrix();
glPushMatrix();

    glColor3ub(111,90,109); /////////////��ɫ
    glju(55,-286,314,-270);
	glPopMatrix();

		glPushMatrix();
    glColor3ub(144,138,140); /////////////��ɫ
    glju(-39,-286,55,-278);
	glPopMatrix();
//�м䴰��1
    	glPushMatrix();
    glColor3ub(130,85,54);
    glju(-283,-197,-211,-91);
	glPopMatrix();
	//�м䴰��2
		glPushMatrix();
		glTranslatef(82,0.0,0.0);
    glColor3ub(130,85,54);
    glju(-283,-197,-211,-91);
	glPopMatrix();
		//�м䴰��3
		glPushMatrix();
		glTranslatef(164,0.0,0.0);
    glColor3ub(130,85,54);
    glju(-283,-197,-211,-91);
	glPopMatrix();
	//�м䴰��4
	glPushMatrix();
		glTranslatef(343,0.0,0.0);
    glColor3ub(130,85,54);
    glju(-283,-197,-211,-91);
	glPopMatrix();
	//�м䴰��5
	glPushMatrix();
		glTranslatef(425,0.0,0.0);
    glColor3ub(130,85,54);
    glju(-283,-197,-211,-91);
	glPopMatrix();
	//�м䴰��6
	glPushMatrix();
		glTranslatef(510,0.0,0.0);
    glColor3ub(130,85,54);
    glju(-283,-197,-211,-91);
	glPopMatrix();
		//�м���4
		glPushMatrix();
    glColor3ub(130,85,54);//bolise
    glju(-28,-240,43,-90);
	glPopMatrix();
		glPushMatrix();
    glColor3ub(200,122,76); /////////////��ɫ
    glju(-28,-254,43,-240);
	glPopMatrix();
	glPushMatrix();
    glColor3ub(87,60,43); /////////////��ɫ
    glju(-10,-229,43,-90);
	glPopMatrix();

	glPushMatrix();
    glColor3ub(87,60,43); /////////////��ɫ
    glju(152,-139,195,-110);
	glPopMatrix();

	glPushMatrix();

    glColor3ub(87,60,43); /////////////��ɫ
    glju(206,-139,214,-110);
	glPopMatrix();
	glPushMatrix();

    glColor3ub(87,60,43); /////////////��ɫ
    glju(106,-139,123,-110);
	glPopMatrix();
glPushMatrix();
    glColor3ub(255,254,244); /////////////��ɫ
    glju(-86,-192,-55,-183);
	glPopMatrix();
	glPushMatrix();
    glColor3ub(223,108,125); /////////////��ɫ
    glju(-65,-176,-55,-154);
	glPopMatrix();

glPushMatrix();
    glColor3ub(87,60,43); /////////////��ɫ
    glju(227,-139,250,-110);
	glPopMatrix();
	glPushMatrix();
    glColor3ub(87,60,43); /////////////��ɫ
    glju(267,-139,288,-110);
	glPopMatrix();

	glPushMatrix();
    glColor3ub(200,122,76); /////////////��ɫ
    glju(1,-229,35,-90);
	glPopMatrix();
	glPushMatrix();
    glColor3ub(87,60,43); /////////////hui��ɫ
    glju(8,-145,28,-120);
	glPopMatrix();
	//����
	glPushMatrix();
    glFillCircle(25,-172,8,bai);
    glPopMatrix();
    //�Ŵ���
glPushMatrix();
    glColor3ub(200,122,76); /////////////��ɫ
    glju(-274,-197,-244,-184);
	glPopMatrix();
	glPushMatrix();
    glColor3ub(200,122,76); /////////////huang��ɫ
    glju(-225,-197,-211,-184);
	glPopMatrix();
		glPushMatrix();
    glColor3ub(87,60,43); /////////////huang��ɫ
    glju(-259,-160,-211,-109);
	glPopMatrix();
		glPushMatrix();
    glColor3ub(87,60,43); /////////////huang��ɫ
    glju(-201,-160,-129,-109);
	glPopMatrix();
		glPushMatrix();
    glColor3ub(87,60,43); /////////////huang��ɫ
    glju(-117,-160,-98,-109);
	glPopMatrix();
	glPushMatrix();
    glColor3ub(87,60,43); /////////////huang��ɫ
    glju(60,-160,90,-91);
	glPopMatrix();
	glPushMatrix();
    glColor3ub(130,85,54);//bolise
    glju(-250,-133,-242,-117);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(12,0,0.0);
    glColor3ub(130,85,54);//bolise
    glju(-250,-133,-242,-117);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(12,-21,0.0);
    glColor3ub(130,85,54);//bolise
    glju(-250,-133,-242,-117);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(24,0,0.0);
    glColor3ub(130,85,54);//bolise
    glju(-250,-133,-242,-117);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(24,-21,0.0);
    glColor3ub(130,85,54);//bolise
    glju(-250,-133,-242,-117);
	glPopMatrix();
glPushMatrix();
glTranslatef(0,21,0.0);
	glPushMatrix();
	glTranslatef(55,-21,0.0);
    glColor3ub(130,85,54);//bolise
    glju(-250,-133,-242,-117);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(67,-21,0.0);
    glColor3ub(130,85,54);//bolise
    glju(-250,-133,-242,-117);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(79,-21,0.0);
    glColor3ub(130,85,54);//bolise
    glju(-250,-133,-242,-117);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(91,-21,0.0);
    glColor3ub(130,85,54);//bolise
    glju(-250,-133,-242,-117);
	glPopMatrix();
glPopMatrix();
glPushMatrix();
	glTranslatef(55,-21,0.0);
    glColor3ub(130,85,54);//bolise
    glju(-250,-133,-242,-117);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(67,-21,0.0);
    glColor3ub(130,85,54);//bolise
    glju(-250,-133,-242,-117);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(79,-21,0.0);
    glColor3ub(130,85,54);//bolise
    glju(-250,-133,-242,-117);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(91,-21,0.0);
    glColor3ub(130,85,54);//bolise
    glju(-250,-133,-242,-117);
	glPopMatrix();
     glPushMatrix();
	glTranslatef(103,-21,0.0);
    glColor3ub(130,85,54);//bolise
    glju(-250,-133,-242,-117);
	glPopMatrix();

    glPushMatrix();

    glColor3ub(200,122,76);
    glju(60,-196,90,-184);
	glPopMatrix();
   glPushMatrix();
    glTranslatef(40,0,0.0);

    glColor3ub(200,122,76);
    glju(60,-196,90,-184);
    //glScalef(0.2, 1, 1);
	glPopMatrix();
	glPushMatrix();
    glTranslatef(90,0,0.0);

    glColor3ub(200,122,76);
    glju(60,-196,90,-184);
    //glScalef(0.2, 1, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(180,0,0.0);

    glColor3ub(200,122,76);
    glju(60,-196,90,-184);
    //glScalef(0.2, 1, 1);
	glPopMatrix();
	glPushMatrix();
    glColor3ub(200,122,76);
    glju(197,-196,213,-184);
    //glScalef(0.2, 1, 1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(86,0,0.0);
    glColor3ub(200,122,76);
    glju(197,-196,213,-184);
    //glScalef(0.2, 1, 1);
	glPopMatrix();
		glPushMatrix();
glPushMatrix();
glTranslatef(4,0,0.0);
	    glColor3ub(200,122,76);
    glju(-191,-185,-148,-180);
    //glScalef(0.2, 1, 1);
	glPopMatrix();
  glColor3ub(87,60,43);
    glju(-170,-197,-160,-185);
    //glScalef(0.2, 1, 1);
	glPopMatrix();
	//����Բ
	glPushMatrix();
 glFillCircle(-169,-136,17,yellow1);
glPopMatrix();
	//����Բ
	glPushMatrix();
 glFillCircle(190,-136,17,yellow1);
glPopMatrix();
	//����Բ
	glPushMatrix();
 glFillCircle(251,-136,17,yellow2);
glPopMatrix();

//����
    glPushMatrix();
    glColor3ub(223,108,121); /////////////hui��ɫ
    glju(-279,-238,-233,-220);
    glju(-279,-262,-233,-254);
    glColor3ub(255,254,254);
    glju(-275,-291,-268,-238);
     glju(-244,-291,-237,-238);
	glPopMatrix();
	    glPushMatrix();
	    glTranslated(81,0,0);
    glColor3ub(223,108,121); /////////////hui��ɫ
    glju(-279,-238,-233,-220);
    glju(-279,-262,-233,-254);
    glColor3ub(255,254,254);
    glju(-275,-291,-268,-238);
     glju(-244,-291,-237,-238);
	glPopMatrix();
	  glPushMatrix();
	    glTranslated(190,0,0);
    glColor3ub(223,108,121); /////////////hui��ɫ
    glju(-279,-238,-233,-220);
    glju(-279,-262,-233,-254);
    glColor3ub(255,254,254);
    glju(-275,-291,-268,-238);
     glju(-244,-291,-237,-238);
	glPopMatrix();
	  glPushMatrix();
	    glTranslated(350,0,0);
    glColor3ub(223,108,121); /////////////hui��ɫ
    glju(-279,-238,-233,-220);
    glju(-279,-262,-233,-254);
    glColor3ub(255,254,254);
    glju(-275,-291,-268,-238);
     glju(-244,-291,-237,-238);
	glPopMatrix();
	 glPushMatrix();
	    glTranslated(450,0,0);
    glColor3ub(223,108,121); /////////////hui��ɫ
    glju(-279,-238,-233,-220);
    glju(-279,-262,-233,-254);
    glColor3ub(255,254,254);
    glju(-275,-291,-268,-238);
     glju(-244,-291,-237,-238);
	glPopMatrix();
	 glPushMatrix();
	    glTranslated(538,0,0);
    glColor3ub(223,108,121); /////////////hui��ɫ
    glju(-279,-238,-233,-220);
    glju(-279,-262,-233,-254);
    glColor3ub(255,254,254);
    glju(-275,-291,-268,-238);
     glju(-244,-291,-237,-238);
	glPopMatrix();
	//����
   glPushMatrix();
    glColor3ub(230,225,189); /////////////hui��ɫ
    glju(-261,-232,-177,-225);
     glju(-234,-262,-206,-255);
    glbuju(-241,-230,-228,-255,-220,-255,-233,-230);
    glbuju(-205,-230,-218,-255,-209,-255,-198,-230);
   glbuju(-245,-293,-229,-260,-221,-261,-236,-293);
   glbuju(-201,-293,-218,-260,-209,-261,-193,-293);
     glPopMatrix;
	//����
   glPushMatrix();
   glTranslated(110,0,0);
    glColor3ub(230,225,189); /////////////hui��ɫ
    glju(-261,-232,-177,-225);
     glju(-234,-262,-206,-255);
    glbuju(-241,-230,-228,-255,-220,-255,-233,-230);
    glbuju(-205,-230,-218,-255,-209,-255,-198,-230);
   glbuju(-245,-293,-229,-260,-221,-261,-236,-293);
   glbuju(-201,-293,-218,-260,-209,-261,-193,-293);
     glPopMatrix;
     	//����
   glPushMatrix();
   glTranslated(245,0,0);
    glColor3ub(230,225,189); /////////////hui��ɫ
    glju(-261,-232,-177,-225);
     glju(-234,-262,-206,-255);
    glbuju(-241,-230,-228,-255,-220,-255,-233,-230);
    glbuju(-205,-230,-218,-255,-209,-255,-198,-230);
   glbuju(-245,-293,-229,-260,-221,-261,-236,-293);
   glbuju(-201,-293,-218,-260,-209,-261,-193,-293);
     glPopMatrix;
       	//����
   glPushMatrix();
   glTranslated(100,0,0);
    glColor3ub(230,225,189); /////////////hui��ɫ
    glju(-261,-232,-177,-225);
     glju(-234,-262,-206,-255);
    glbuju(-241,-230,-228,-255,-220,-255,-233,-230);
    glbuju(-205,-230,-218,-255,-209,-255,-198,-230);
   glbuju(-245,-293,-229,-260,-221,-261,-236,-293);
   glbuju(-201,-293,-218,-260,-209,-261,-193,-293);
     glPopMatrix;

  glPushMatrix();
   for(int i=0;i<=22;i++)
   {
    glColor3ub(206,79,100); /////////////fen��ɫ
    glju(-807,-36,-791,1);
    glTranslated(32,0,0);

   }
 glPopMatrix;

//����
glPushMatrix();
glTranslatef(-280, 0, 0.0);
glPushMatrix();
    glColor3ub(122,126,52);
    glju(-486,-200,-409,-38);
	glPopMatrix();
 glPushMatrix();
glPushMatrix();
    glColor3ub(122,116,102);
    glju(-454,-308,-441,-200);
	glPopMatrix();
 glPushMatrix();

       glPushMatrix();
       glColor3ub(159,167,92);
        glBegin(GL_TRIANGLES);
         glVertex2d(-512,-38);
         glVertex2d(-460,-38);
         glVertex2d(-486,-68);
         glEnd();
		glPopMatrix();
		glPushMatrix();
		  glTranslatef(0, -136, 0.0);
       glColor3ub(159,167,92);
        glBegin(GL_TRIANGLES);
         glVertex2d(-512,-38);
         glVertex2d(-460,-38);
         glVertex2d(-486,-68);
         glEnd();
		glPopMatrix();

       glPushMatrix();
        glTranslatef(77, 0, 0.0);
       glColor3ub(159,167,92);
        glBegin(GL_TRIANGLES);
         glVertex2d(-512,-38);
         glVertex2d(-460,-38);
         glVertex2d(-486,-68);
         glEnd();
		glPopMatrix();
		  glPushMatrix();
        glTranslatef(77, -68, 0.0);
       glColor3ub(159,167,92);
        glBegin(GL_TRIANGLES);
         glVertex2d(-512,-38);
         glVertex2d(-460,-38);
         glVertex2d(-486,-68);
         glEnd();
		glPopMatrix();

		  glPushMatrix();
        //glTranslatef(77, -68, 0.0);
       glColor3ub(159,167,92);
        glBegin(GL_TRIANGLES);
         glVertex2d(-421,-83);
         glVertex2d(-474,-83);
         glVertex2d(-448,-54);
         glEnd();
		glPopMatrix();
		glPushMatrix();
        //glTranslatef(77, -68, 0.0);
       glColor3ub(159,167,92);
        glBegin(GL_TRIANGLES);
         glVertex2d(-510,-85);
         glVertex2d(-510,-137);
         glVertex2d(-480,-111);
         glEnd();
		glPopMatrix();
		glPushMatrix();
        //glTranslatef(77, -68, 0.0);
       glColor3ub(159,167,92);
        glBegin(GL_TRIANGLES);
         glVertex2d(-422,-167);
         glVertex2d(-422,-220);
         glVertex2d(-393,-192);
         glEnd();
		glPopMatrix();
		glPushMatrix();
        //glTranslatef(77, -68, 0.0);
       glColor3ub(159,167,92);
        glBegin(GL_TRIANGLES);
         glVertex2d(-441,-156);
         glVertex2d(-441,-104);
         glVertex2d(-469,-130);
         glEnd();
		glPopMatrix();
	glPopMatrix();

  glFlush();

}



void init (void)

{

glClearColor (0.0, 0.0, 0.0, 0.0);

glMatrixMode (GL_PROJECTION);

gluOrtho2D (-800.0, 800.0, -360.0, 400.0); //������ʾ�ķ�Χ
glMatrixMode (GL_MODELVIEW);
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(1499, 757);
	glutCreateWindow("��ά����");
	glLoadIdentity();
	init();

	glutDisplayFunc(display);

	glutMainLoop();
	return 0;
}
