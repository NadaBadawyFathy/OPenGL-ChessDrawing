#include <GL/glut.h>

void NadaBadawy(){
    glClearColor(1.0,1.0,1.0,1.0);
    for (int r = 0; r < 8; r++){
        for (int c = 0; c < 8; c++){
            if ((r + c) % 2 == 0)
                glColor3f(0.0, 0.0, 0.0);
            else
                glColor3f(1.0, 1.0, 1.0);

            int x = c * 50;
            int y = r * 50;
            glBegin(GL_QUADS);
            glVertex2i(x, y);
            glVertex2i(x, y + 50);
            glVertex2i(x + 50, y + 50);
            glVertex2i(x + 50, y);
            glEnd();
        }
    }

    glFlush();
    glFinish();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("ChessDrawing");
    glutInitWindowSize(100, 150);
    glutInitWindowPosition(10,10);
    glOrtho(0,400,0,400,-1,1);

    glutDisplayFunc(NadaBadawy);

    glutMainLoop();

    return 0;
}
