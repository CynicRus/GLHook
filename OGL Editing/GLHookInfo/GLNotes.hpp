target == GL_TEXTURE_RECTANGLE_NV       //Gets Icons, Inventory items, Fonts, MM-Symbols(Not Icons).

target == GL_TEXTURE_2D					//Interface Buttons, Trees, Scrollbar-Arrows, MM-Icons(Not Symbols), Map-Area, Red/Yellow-Click, CloseButtons.

glTexCoord2i							//The coordinates of the current texture. Good for Item/Inventory Checking.

glVertex2i								//The coordinates of the current vertex pointer being drawn. Good for models.

glVertexPointer							//The pointer to a model currently being drawn.	



MODEL BUFFER STUFF:

glGenBuffersARB(1,0E08386C)
glBindBufferARB(GL_ARRAY_BUFFER,4)
glBufferDataARB(GL_ARRAY_BUFFER,526248,30A683EF,GL_STATIC_DRAW)
glGenBuffersARB(1,0E08386C)
glBindBufferARB(GL_ARRAY_BUFFER,5)
glBufferDataARB(GL_ARRAY_BUFFER,87708,309E3027,GL_STATIC_DRAW)
glGenBuffersARB(1,0E08386C)
glBindBufferARB(GL_ARRAY_BUFFER,6)
glBufferDataARB(GL_ARRAY_BUFFER,87708,30A25A0B,GL_STATIC_DRAW)
glGenBuffersARB(1,0E08386C)
glBindBufferARB(GL_ARRAY_BUFFER,7)
glBufferDataARB(GL_ARRAY_BUFFER,76848,30C131E7,GL_STATIC_DRAW)
glGenBuffersARB(1,0E08386C)
glBindBufferARB(GL_ARRAY_BUFFER,8)
glBufferDataARB(GL_ARRAY_BUFFER,12808,30BF7F47,GL_STATIC_DRAW)
glGenBuffersARB(1,0E08386C)
glBindBufferARB(GL_ARRAY_BUFFER,9)
glBufferDataARB(GL_ARRAY_BUFFER,12808,30C05897,GL_STATIC_DRAW)
glGenBuffersARB(1,0E08386C)
glBindBufferARB(GL_ARRAY_BUFFER,10)
glBufferDataARB(GL_ARRAY_BUFFER,18288,30C6B5F7,GL_STATIC_DRAW)
glGenBuffersARB(1,0E08386C)
glBindBufferARB(GL_ARRAY_BUFFER,11)
glBufferDataARB(GL_ARRAY_BUFFER,3048,30C649C7,GL_STATIC_DRAW)
glGenBuffersARB(1,0E08386C)
glBindBufferARB(GL_ARRAY_BUFFER,12)
glBufferDataARB(GL_ARRAY_BUFFER,3048,30C67FDF,GL_STATIC_DRAW)



glDisable(GL_TEXTURE_2D)
glMatrixMode(GL_PROJECTION)
glLoadMatrixf([0.000020,0.000000,0.000000,0.000000,0.000000,0.000028,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,-1.000000,0.233273,0.000000,1.000000])
glMatrixMode(GL_MODELVIEW)
glLoadMatrixf([1.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1.000000])
glBindBufferARB(GL_ARRAY_BUFFER,4)
glVertexPointer(3,GL_FLOAT,24,00000000)
glEnableClientState(GL_VERTEX_ARRAY)
glDisableClientState(GL_NORMAL_ARRAY)
glColorPointer(4,GL_UNSIGNED_BYTE,24,0000000C)
glEnableClientState(GL_COLOR_ARRAY)
glTexCoordPointer(2,GL_FLOAT,24,00000010)
glEnableClientState(GL_TEXTURE_COORD_ARRAY)
glBindBufferARB(GL_ELEMENT_ARRAY_BUFFER,0)
glDrawElements(GL_TRIANGLES,17685,GL_UNSIGNED_SHORT,30C82DB7) Textures[ (0,11) (0,7) (0,126) (0,6) (0,10) ] 
glGenTextures(1,0CD6E934)
glEnable(GL_TEXTURE_2D)
glBindTexture(GL_TEXTURE_2D,127)
glPixelStorei(GL_UNPACK_ROW_LENGTH,8)
glTexImage2D(GL_TEXTURE_2D,0,GL_RGBA,8,8,0,GL_BGRA,GL_UNSIGNED_BYTE,04D4D294)

MODELSTUFF END.

TEXTURE STUFF:

glGenTextures(1,0CD6E934)
glEnable(GL_TEXTURE_RECTANGLE)
glBindTexture(GL_TEXTURE_RECTANGLE,129)
glPixelStorei(GL_UNPACK_ROW_LENGTH,8)
glTexImage2D(GL_TEXTURE_RECTANGLE,0,GL_RGBA,8,7,0,GL_BGRA,GL_UNSIGNED_BYTE,04D5560C)
glPixelStorei(GL_UNPACK_ROW_LENGTH,0)
glTexParameteri(GL_TEXTURE_RECTANGLE,GL_TEXTURE_MIN_FILTER,GL_LINEAR)
glTexParameteri(GL_TEXTURE_RECTANGLE,GL_TEXTURE_MAG_FILTER,GL_LINEAR)
glColor4ub(0,0,0,0)
glBegin(GL_QUADS) Textures[ (0,11) (0,128) (0,129) (0,6) (0,10) ] 
glTexCoord2f(0.000000,7.000000)
glVertex2i(28,48)
glTexCoord2f(0.000000,0.000000)
glVertex2i(28,55)
glTexCoord2f(8.000000,0.000000)
glVertex2i(36,55)
glTexCoord2f(8.000000,7.000000)
glVertex2i(36,48)
glEnd()


glBindBufferARB(GL_ARRAY_BUFFER,4)
glVertexPointer(3,GL_FLOAT,24,00000000)
glEnableClientState(GL_VERTEX_ARRAY)
glDisableClientState(GL_NORMAL_ARRAY)
glColorPointer(4,GL_UNSIGNED_BYTE,24,0000000C)
glEnableClientState(GL_COLOR_ARRAY)
glTexCoordPointer(2,GL_FLOAT,24,00000010)
glEnableClientState(GL_TEXTURE_COORD_ARRAY)
glBindBufferARB(GL_ELEMENT_ARRAY_BUFFER,0)
glDrawElements(GL_TRIANGLES,17604,GL_UNSIGNED_SHORT,30C8B7E1) Textures[ (0,11) (0,7) (0,130) (0,6) (0,10) ] 


glBindBufferARB(GL_ARRAY_BUFFER,7)
glVertexPointer(3,GL_FLOAT,24,00000000)
glEnableClientState(GL_VERTEX_ARRAY)
glDisableClientState(GL_NORMAL_ARRAY)
glColorPointer(4,GL_UNSIGNED_BYTE,24,0000000C)
glEnableClientState(GL_COLOR_ARRAY)
glTexCoordPointer(2,GL_FLOAT,24,00000010)
glEnableClientState(GL_TEXTURE_COORD_ARRAY)
glBindBufferARB(GL_ELEMENT_ARRAY_BUFFER,0)
glDrawElements(GL_TRIANGLES,2805,GL_UNSIGNED_SHORT,30C94169) Textures[ (0,11) (0,127) (0,130) (0,6) (0,10) ] 


TEXTURE STUFF END.


Fonts Rendering:

glCallList(876)
glLoadIdentity();
glTexEnvi(GL_TEXTURE_ENV, GL_COMBINE, GL_REPLACE);
glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE0_RGB, GL_TEXTURE);
glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE0_RGB, GL_PREVIOUS);
glTranslatef(....);
glColor4ub(..);
LoadIdentity();


Texture #127:

889 n
888 m 
887 l
886 k
885 j
884 i
883 h
882 g
881 f
880 e
879 d
878 c
877 b
876 a
892 p
825 .


A 844
B 845
C 846
D 847
E 848
F 849
G 850
H 851
I 852
J 853
K 854
L 855
M 856
N 857
O 858
P 860
Q 861
R 862
S 863
T 864
U 865
V 866
W 867
X 868
Y 869
Z 870

[ 870
\ 871
] 872
^ 873
_ 874
` 875


REVERT SETTINGS SCREEN:
glTexEnvi(GL_TEXTURE_ENV, GL_COMBINE_RGB, 7681)
glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE0_RGB, 34168)
glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND0_RGB, 768)
glColor4ub(0, 0, 0, 255)
glTranslatef(336, 196, 0)
glCallList(1117)

R = 1117;
e = 1136
v = 1153;
r = 1149;
t = 1151;
i = 1140;
: = 1093;
1 = 1084
4 = 1087
Y = 1124
? = 1098


glGenLists(256);  //After that Log glNewList.

11 Pixels Apart = Width / 16 chars.

Rows:
      glBegin(GL_QUADS);  //For fonts.. 
      (66, 154) = Top Left of & char.
      (66, 146) = Botton Left of & char.
      (73, 146) = Bottom Right of & char.
      (73, 154) = Top Right of & char.
      glEnd();

      (77, 154) = Top Left of ' char.
      (77, 151) = Bottom Left of ' char.
      (78, 151) = Bottom Right of ' char.
      (78, 154) = Top Right of ' char.

Thus iterator through rows making glQuads from glTexCoord2f.

glOrtho(0, 1, 0, 1, -1, 1)

GL_PROJECTION_MATRIX: 
{2, 0, 0, 0}
{0, 2, 0, 0}
{0, 0, -1, 0}
{-1, -1, -0, 1}


SWAPBUFFER:
glMatrixMode(GL_PROJECTION)
GL_PROJECTION_MATRIX: 
{0.0026143792, -0, 0, 0}
{0, -0.0036166366, 0, 0}
{0, -0, 1, 0}
{-1, 1, -0, 1}

glMatrixMode(GL_MODELVIEW)


//far down.. it pushes then pops ModelView:

Push: GL_MODELVIEW_MATRIX: 
{1, 0, 0, 0}
{0, 1, 0, 0}
{0, 0, 1, 0}
{31, 0, 0, 1}

Pop: GL_MODELVIEW_MATRIX: 
{1, 0, 0, 0}
{0, 1, 0, 0}
{0, 0, 1, 0}
{0, 0, 0, 1}


//After rendering the LoginBox.. It generates 256 font chars.
//After calling the list, the Matrix Changes! glTranslate changes the list.

glTranslatef(361, 132, 0);
glCallList(1623);
GL_MODELVIEW_MATRIX: 
{1, 0, 0, 0}
{0, 1, 0, 0}
{0, 0, 1, 0}
{361, 132, 0, 1}

//LoadIdentity Converts it back to default!:
glLoadIdentity()
GL_MODELVIEW_MATRIX: 
{1, 0, 0, 0}
{0, 1, 0, 0}
{0, 0, 1, 0}
{0, 0, 0, 1}

//Now the next CallList:
GL_MODELVIEW_MATRIX: 
{1, 0, 0, 0}
{0, 1, 0, 0}
{0, 0, 1, 0}
{360, 131, 0, 1}

//and again LoadIdentity Resets it.. Thus either Hook glLoadIdentity() and get the matrix When CallLists are being rendered.
//or get the matrix within the CallList.
//Hook glTranslate to figure out how to font coords from the matrix.

BufferSwap!

FONTS END.


Vertices/Models/Matrices Rendering:

//Somehow Hook VBO's. Use the BoundBuffer Value to grab the data for each vertex:
//Every 3 is a vertex.
//0  X = 0, Y = 1, Z = 2
//1  Skip
//2  Skip
//3  Skip      //aka sizeof(GL_FLOAT) from row 0.
//X = 4, Y = 5, Z = 6

glBindBufferARB(GL_ARRAY_BUFFER, 49)
glVertexPointer(3, GL_FLOAT, 24, 0x00000000)
glEnableClientState(GL_VERTEX_ARRAY)
glDisableClientState(GL_NORMAL_ARRAY)
glColorPointer(4, GL_UNSIGNED_BYTE, 24, 0x0000000C)
glBindBufferARB(GL_ELEMENT_ARRAY_BUFFER, 56)
glDrawElements(GL_TRIANGLES, 1326, GL_UNSIGNED_SHORT, 0x00000000); = INDEX Buffer.

for (int I = 0; I < TriCount; I++)
{
	Pointer + (sizeof(GL_FLOAT) * I)
}

glGenBuffersARB
glBindBufferARB
glBufferDataARB
glBufferSubDataARB
glMapBufferARB
glnmapBufferARB
glDeleteBuffersARB
glDrawBuffersARB
glGetBufferSubData — returns a subset of a buffer object's data store

glBufferDataARB(GL_ARRAY_BUFFER, 80, 0x055525AC, GL_STATIC_DRAW)





glMatrixMode(GL_PROJECTION)
glLoadMatrixf({0.0026143792, -0, 0, 0}
{0, -0.0036166366, 0, 0}
{0, -0, 1, 0}
{-1, 1, -0, 1})
glMatrixMode(GL_MODELVIEW)


glLogCalls("MODELVIEW:\n");
glLogCalls("%d, %d, %d, %d\n", it->ModelViewMatrix[0], it->ModelViewMatrix[4], it->ModelViewMatrix[8], it->ModelViewMatrix[12]);
glLogCalls("%d, %d, %d, %d\n", it->ModelViewMatrix[1], it->ModelViewMatrix[5], it->ModelViewMatrix[9], it->ModelViewMatrix[13]);
glLogCalls("%d, %d, %d, %d\n", it->ModelViewMatrix[2], it->ModelViewMatrix[6], it->ModelViewMatrix[10], it->ModelViewMatrix[14]);
glLogCalls("%d, %d, %d, %d\n", it->ModelViewMatrix[3], it->ModelViewMatrix[7], it->ModelViewMatrix[11], it->ModelViewMatrix[15]);

glLogCalls("PROJECTIONVIEW:\n");
glLogCalls("%d, %d, %d, %d\n", it->ProjectionMatrix[0], it->ProjectionMatrix[4], it->ProjectionMatrix[8], it->ProjectionMatrix[12]);
glLogCalls("%d, %d, %d, %d\n", it->ProjectionMatrix[1], it->ProjectionMatrix[5], it->ProjectionMatrix[9], it->ProjectionMatrix[13]);
glLogCalls("%d, %d, %d, %d\n", it->ProjectionMatrix[2], it->ProjectionMatrix[6], it->ProjectionMatrix[10], it->ProjectionMatrix[14]);
glLogCalls("%d, %d, %d, %d\n\n", it->ProjectionMatrix[3], it->ProjectionMatrix[7], it->ProjectionMatrix[11], it->ProjectionMatrix[15]);




Models/VBOs:

glGenBuffersARB(1, 0x054F26D4)
glBindBufferARB(GL_ARRAY_BUFFER, 2)
glBufferDataARB(GL_ARRAY_BUFFER, 80, 0x054F167C, GL_STATIC_DRAW)

glGenBuffersARB(1, 0x054F26D4)
glBindBufferARB(GL_ARRAY_BUFFER, 3)
glBufferDataARB(GL_ARRAY_BUFFER, 196584, 0x00000000, GL_STREAM_DRAW)

glGenBuffersARB(1, 0x0BAD9664)
glBindBufferARB(GL_ARRAY_BUFFER, 4)
glBufferDataARB(GL_ARRAY_BUFFER, 587976, 0x26774D32, GL_STATIC_DRAW)

glGenBuffersARB(1, 0x0BAD9664)
glBindBufferARB(GL_ARRAY_BUFFER, 5)
glBufferDataARB(GL_ARRAY_BUFFER, 97996, 0x266AF026, GL_STATIC_DRAW)

Loading Minimap Icons:

glLoadMatrixf({1, 0, 0, 0}
{0, 0, 1, 0}
{0, 1, 0, 0}
{0, 0, 0, 1})

glBindBufferARB(GL_ARRAY_BUFFER, 4)
glVertexPointer(3, GL_FLOAT, 24, 0x00000000)
glEnableClientState(GL_VERTEX_ARRAY)
glDisableClientState(GL_NORMAL_ARRAY)
glColorPointer(4, GL_UNSIGNED_BYTE, 24, 0x0000000C)
glEnableClientState(GL_COLOR_ARRAY)
glTexCoordPointer(2, GL_FLOAT, 24, 0x00000010)
glEnableClientState(GL_TEXTURE_COORD_ARRAY)
glBindBufferARB(GL_ELEMENT_ARRAY_BUFFER, 0)
glDrawElements(GL_TRIANGLES, 17799, GL_UNSIGNED_SHORT, 0x2692270A)
glVertex2f(204.35001, 16.35)

Vertices/Models/Matrices END.


COMPASS Rendering:

glBindTexture(GL_TEXTURE_RECTANGLE, 228); 					//Compass.
glActiveTextureARB(GL_TEXTURE1)
glEnable(GL_TEXTURE_RECTANGLE)
glBindTexture(GL_TEXTURE_RECTANGLE, 378)  					//MM-Circle.
glTexEnvi(GL_TEXTURE_ENV, GL_COMBINE_RGB, 7681)
glTexEnvi(GL_TEXTURE_ENV, GL_COMBINE_ALPHA, 8448)
glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE0_RGB, 34168)
glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND0_RGB, 768)
glBegin(GL_QUADS)
glColor3f(1, 1, 1)
glMultiTexCoord2fARB(GL_TEXTURE0, 0, 51)
glMultiTexCoord2fARB(GL_TEXTURE1, 0.7467041, 51.244576)
glVertex2f(527.7467, 39.755424)
glMultiTexCoord2fARB(GL_TEXTURE0, 0, 0)
glMultiTexCoord2fARB(GL_TEXTURE1, -18.244568, 0.74672699)
glVertex2f(508.75543, 90.253273)
glMultiTexCoord2fARB(GL_TEXTURE0, 51, 0)
glMultiTexCoord2fARB(GL_TEXTURE1, 32.253296, -18.244576)
glVertex2f(559.2533, 109.24458)
glMultiTexCoord2fARB(GL_TEXTURE0, 51, 51)
glMultiTexCoord2fARB(GL_TEXTURE1, 51.244568, 32.253273)
glVertex2f(578.24457, 58.746727)
glEnd()

glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE0_RGB, 5890)
glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND0_RGB, 768)
glTexEnvi(GL_TEXTURE_ENV, GL_COMBINE_RGB, 8448)
glTexEnvi(GL_TEXTURE_ENV, GL_COMBINE_ALPHA, 8448)
glDisable(GL_TEXTURE_RECTANGLE)

glActiveTextureARB(GL_TEXTURE0)
glEnable(GL_SCISSOR_TEST)
glScissor(516, 335, 249, 168)
glEnable(GL_SCISSOR_TEST)
glScissor(526, 461, 35, 35)
glEnable(GL_SCISSOR_TEST)
glScissor(516, 335, 249, 168)
glColor4ub(255, 255, 255, 255)
glBindTexture(GL_TEXTURE_RECTANGLE, 379)

COMPASS END.
