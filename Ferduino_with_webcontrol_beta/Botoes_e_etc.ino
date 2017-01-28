#ifdef USE_TFT
//**********************************************************************************************
//*********************** Botões dos menus *****************************************************
//**********************************************************************************************
const int temM[] = {
  180, 70, 230, 120
};           //temp. minus
const int temP[] = {
  410, 70, 460, 120
};          //temp. plus
const int offM[] = {
  180, 170, 230, 220
};          //offset minus
const int offP[] = {
  410, 170, 460, 220
};         //offset plus
const int almM[] = {
  180, 270, 230, 320
};         //alarm minus
const int almP[] = {
  410, 270, 460, 320
};        //alarm plus
const int iniC[] = {
  650, 4, 780, 84
};           // inicio
const int menU[] = {
  650, 104, 780, 184
};       // Botao menu
const int prOK[] = {
  650, 400, 780, 476
};        //ok
const int salV[] = {
  650, 300, 780, 380
};        //salvar dosagem
const int deS[] = {
  650, 204, 780, 284
};
//const int xxxx[]= {650, 400, 780, 478};
const int tanD[] = {
  20, 40, 300, 120
};        // Hora e data
const int tesT[] = {
  20, 140, 300, 220
};       // Testar LED
const int temC[] = {
  20, 240, 300, 320
};      // Controle de temperatura
const int graF[] = {
  20, 340, 300, 420
};      // Graficos
const int ledW[] = {
  340, 40, 620, 120
};        // Timers

const int savE[] = {
  360, 406, 600, 470
};        //Save Eeprom
const int leWB[] = {
  10, 406, 180, 470
};        //LED values show whites or blues
const int leST[] = {
  200, 406, 340, 470
};       //LED values change

const int tpaA[] = {
  340, 140, 620, 220
};         //TPA automÃ¡tica
const int dosA[] = {
  340, 240, 620, 320
};        //Bomba dosadora
const int wavM[] = {
  340, 340, 620, 420
};        // Wavemaker
const int volT[] = {
  650, 400, 780, 476
};         //voltar
const int testT[] = {
  80, 68, 560, 148
};      //Testar todos os leds
const int testI[] = {
  80, 168, 560, 248
};    //Teste individual dos leds
//-----------botoes graficos e parametros--------------------
const int tempG[] = {
  20, 40, 300, 120
};        //parametro/grafico de temperatura
const int phA[] = {
  20, 140, 300, 220
};       //parametro/grafico de ph do aqua
const int phR[] = {
  20, 240, 300, 320
};      //parametro/grafico de ph do aqua
const int orP[] = {
  20, 340, 300, 420
};      // parametro/grafico de orp
const int denS[] = {
  340, 40, 620, 120
};        //parametro/grafico de densidade
//const int []= {340, 140, 620, 220};
//const int []= {340, 240, 620, 320};

const int manU[] = {
  20, 40, 300, 120
};        // Dosagem manual
const int autO[] = {
  20, 140, 300, 220
};       //Dosagem automatica
const int perS[] = {
  20, 140, 300, 220
};      //Dosagem personalizada
const int reV[] = {
  20, 240, 300, 320
};     // rever cofig. dosagem personalizada
const int atiV[] = {
  340, 40, 620, 120
};    //Ativar/desativar dosadoras
//const int []= {340, 140, 620, 220};
//const int []= {340, 240, 620, 320};

const int dosa1[] = {
  20, 40, 300, 120
};       //Bomba dosadora 1
const int dosa2[] = {
  20, 140, 300, 220
};         //Bomba dosadora 2
const int dosa3[] = {
  20, 240, 300, 320
};      // Bomba dosadora 3
const int dosa4[] = {
  340, 40, 620, 120
};       //Bomba dosadora 4
const int dosa5[] = {
  340, 140, 620, 220
};         //Bomba dosadora 5
const int dosa6[] = {
  340, 240, 620, 320
};      // Bomba dosadora 6
//----------------------------------------------------

const int houU[] = {
  140, 36, 190, 86
};          //hour up
const int minU[] = {
  320, 36, 370, 86
};        //min up
const int minUT[] = {
  240, 36, 290, 86
};        //minutotpa mais
const int minDT[] = {
  240, 138, 290, 184
};       //minutotpa menos
const int houD[] = {
  140, 138, 190, 184
};         //hour down
const int minD[] = {
  320, 138, 370, 184
};       //min down
const int dayU[] = {
  140, 204, 190, 254
};       //day up
const int monU[] = {
  320, 204, 370, 254
};     //month up
const int yeaU[] = {
  500, 204, 550, 254
};     //year up
const int dayD[] = {
  140, 304, 190, 354
};       //day down
const int monD[] = {
  320, 304, 370, 354
};     //month down
const int yeaD[] = {
  500, 304, 550, 354
};     //year down
const int stsT[] = {
  180, 310, 440, 450
};     //start/stop
const int tenM[] = {
  20, 340, 160, 420
};       //-10s
const int tenP[] = {
  460, 340, 600, 420
};     //+10s
const int segC[] = {
  500, 36, 550, 86
};        //segundo para cima
const int segB[] = {
  500, 138, 550, 184
};        //segundo para baixo
const int durC[] = {
  550, 36, 600, 86
};        //duracao tpa para cima
const int durB[] = {
  550, 138, 600, 184
};        //duracao tpa para baixo
const int segU[] = {
  60, 198, 220, 278
};        //segunda
const int terC[] = {
  240, 198, 400, 278
};       //terca
const int quaR[] = {
  420, 198, 580, 278
};       //quarta
const int quiN[] = {
  60, 292, 220, 372
};       //quinta
const int sexT[] = {
  240, 292, 400, 372
};      //sexta
const int sabA[] = {
  420, 292, 580, 372
};      //sabado
const int domI[] = {
  240, 386, 400, 466
};      //domingo
const int caliB[] = {
  340, 340, 620, 420
};     //calibrar
const int iniciaR[] = {
  240, 386, 400, 466
};   //Iniciar calibracao
const int anT[] = {
  60, 386, 220, 466
};        //anterior
const int proX[] = {
  420, 386, 580, 466
};      //proximo
const int busC[] = {
  400, 60, 600, 130
};        //Buscar sondas
const int sonD1[] = {
  400, 220, 600, 270
};     //Sonda 1
const int sonD2[] = {
  400, 290, 600, 340
};     //Sonda 2
const int sonD3[] = {
  400, 360, 600, 410
};     //Sonda 3
const int tempeC[] = {
  530, 70, 580, 120
};      //Temperatura reduzir potência +
const int tempeB[] = {
  530, 140, 580, 190
};      //Temperatura reduzir potência -
const int potC[] = {
  530, 230, 580, 280
};      //Reduzir potência +
const int potB[] = {
  530, 300, 580, 350
};      //Reduzir potência -
const int peRB[] = {
  90, 290, 140, 340
};
const int peRC[] = {
  320, 290, 370, 340
};
const int PoTEB1[] = {
  90, 230, 140, 280
};
const int PoTEC1[] = {
  320, 230, 370, 280
};
const int PoTEB2[] = {
  90, 370, 140, 420
};
const int PoTEC2[] = {
  320, 370, 370, 420
};
const int minUA[] = {
  240, 220, 290, 270
};   // Tempo alimentação mais
const int minDA[] = {
  240, 320, 290, 370
};   // Tempo alimentação menos
const int alI[] = {
  400, 240, 560, 320
};      // Alimentador
const int waV[] = {
  400, 360, 560, 440
};      // Wavemaker

//----------------botoes solicitacao de senha-------------------------------------------------
const int boT1[] = {
  20, 40, 124, 120
};          //Botao um
const int boT2[] = {
  144, 40, 248, 120
};         //Botao dois
const int boT3[] = {
  268, 40, 372, 120
};        //Botao tres
const int boT4[] = {
  392, 40, 496, 120
};        //Botao quatro
const int boT5[] = {
  516, 40, 620, 120
};        //Botao cinco
const int boT6[] = {
  20, 140, 124, 220
};          //Botao seis
const int boT7[] = {
  144, 140, 248, 220
};        //Botao sete
const int boT8[] = {
  268, 140, 372, 220
};       //Botao oito
const int boT9[] = {
  392, 140, 496, 220
};       //Botao nove
const int boT0[] = {
  516, 140, 620, 220
};       //Botao zero
const int boTL[] = {
  20, 240, 310, 320
};       //Botao limpar
const int boTE[] = {
  330, 240, 620, 320
};      //Botao entrar

//**********************************************************************************************
//***************************** funcoes ********************************************************
//**********************************************************************************************
void clearScreen()
{
  myGLCD.clrScr();
}

void printButton(const char* text, int x1, int y1, int x2, int y2, boolean setFont = false, byte cor = 0)
{
  int stl = strlen(text);
  int fx, fy;
  const int color [3][3] = {{0, 0, 200}, {0, 150, 86}, {255, 0, 0}};

  myGLCD.setColor(color[cor][0], color[cor][1], color[cor][2]);
  myGLCD.fillRoundRect (x1, y1, x2, y2);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (x1, y1, x2, y2);

  myGLCD.setBackColor(color[cor][0], color[cor][1], color[cor][2]);
  if (setFont == true)
  {
    myGLCD.setFont(BigFont);
    fx = x1 + (((x2 - x1 + 1) - (stl * 16)) / 2);
    fy = y1 + (((y2 - y1 + 1) - 16) / 2);
    myGLCD.print(text, fx, fy);
  }
  else
  {
    myGLCD.setFont(RusFont1);
    fx = x1 + (((x2 - x1) - (stl * 8)) / 2);
    fy = y1 + (((y2 - y1 - 1) - 6) / 2);
    myGLCD.print(text, fx, fy);
  }
}

void printHeader(char* headline)
{
  setFont(LARGE, 255, 255, 0, 255, 255, 0);
  myGLCD.fillRect (1, 1, 638, 28);
  myGLCD.setColor(0, 0, 0);
  myGLCD.print(headline, 5, 4);
}

void setFont(boolean font, byte cr, byte cg, byte cb, byte br, byte bg, byte bb)
{
  myGLCD.setBackColor(br, bg, bb);    //font background black
  myGLCD.setColor(cr, cg, cb);      //font colour white
  if (font == LARGE)
    myGLCD.setFont(BigFont);     //font size LARGE
  else if (font == SMALL)
    myGLCD.setFont(RusFont1);
}

// Draw a red frame while a button is touched
void waitForIt(int x1, int y1, int x2, int y2)
{
  myGLCD.setColor(255, 0, 0);
  myGLCD.drawRoundRect (x1, y1, x2, y2);
  while (myTouch.dataAvailable())
  {
    myTouch.read();
  }
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (x1, y1, x2, y2);
}

//                   cor,       cor,   cor    locação x1, locação y1, locação x2, locação y2
void desenhar_barras(int sbR, int sbG, int sbB, int sbX1, int sbY1, int sbX2, int sbY2)
{
  myGLCD.setColor(sbR, sbG, sbB);
  myGLCD.fillRect(sbX1, y_tocado, sbX2, sbY2);
  myGLCD.setColor(0, 0, 0);  
  myGLCD.fillRect(sbX1+1, y_tocado, sbX2-1, sbY1);
  myGLCD.setColor(sbR, sbG, sbB);            
  myGLCD.drawLine(sbX1, sbY1, sbX2, sbY1);
  myGLCD.drawLine(sbX1, sbY2, sbX2, sbY2);
}

void desenhar_barras_periodo ()
{
  myGLCD.setColor(cor_canal [cor_selecionada][0], cor_canal [cor_selecionada][1], cor_canal [cor_selecionada][2]);
  myGLCD.drawRect((setor_selecionado * 76) + 10, 160, (setor_selecionado * 76) + 78, 390);
  desenhar_barras(cor_canal [cor_selecionada][0], cor_canal [cor_selecionada][1], cor_canal [cor_selecionada][2], (setor_selecionado * 76) + 10, 160, (setor_selecionado * 76) + 78, 390);
}

boolean checkButtons(int x1, int y1, int x2, int y2)
{
  boolean match = false;
  int touch_x = myTouch.getX();
  int touch_y = myTouch.getY();

  if ((touch_x >= x1) && (touch_x <= x2) && (touch_y >= y1) && (touch_y <= y2))
  {
    match = true;
    waitForIt(x1, y1, x2, y2);
  }
  return match;
}

void drawFillRect(int x1, int y1, int x2, int y2, byte r, byte g, byte b)
{
  myGLCD.setColor(r, g, b);
  myGLCD.fillRect (x1, y1, x2, y2);
}
#endif

#ifdef USE_SCREENSAVER
void clockScreen()
{
  if(firstTime == true)
  {
   clearScreen(); 
  }
  myGLCD.setFont(SevenSegNumFontPlus);
  myGLCD.setColor(0, 174, 255);
  myGLCD.print(rtc.getTimeStr(FORMAT_SHORT), CENTER, 100);
  
  myGLCD.setFont(BigFont);
  
  myGLCD.print(rtc.getDOWStr(FORMAT_LONG), 198, 340);
  //myGLCD.print(",", 300, 340);
  
  //if(t.date < 10)
  //{
    //myGLCD.print("0", 338, 340);
    //myGLCD.printNumI(t.date, 400, 340);
  //}
  //else
  //{
  myGLCD.printNumI(t.date, 400, 340); 
  //}
  //myGLCD.print("DI", 422, 340);
  myGLCD.print(rtc.getMonthStr(FORMAT_LONG), 506, 340);
  firstTime = false;
}
#endif

int NumMins(uint8_t ScheduleHour, uint8_t ScheduleMinute)
{
  return (ScheduleHour * 60) + ScheduleMinute;
}
