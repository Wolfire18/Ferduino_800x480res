#ifdef USE_TFT
void Grafico_WaveMaker()
{
  int Pump1PWM_t;
  int Pump2PWM_t;

  int bar = map(Pump1PWM, 0, 510, 450, -60);

  if (bar < -60 )
  {
    bar = -60;
  }
  if (bar > 450)
  {
    bar = 450;
  }

  int bar2 = map(Pump2PWM, 0, 510, 450, -60);

  if (bar2 < -60)
  {
    bar2 = -60;
  }
  if (bar2 > 450)
  {
    bar2 = 450;
  }

  Pump1PWM_t = map(Pump1PWM, 0, 255, 0, 100);
  Pump2PWM_t = map(Pump2PWM, 0, 255, 0, 100);

  myGLCD.setBackColor(0, 0, 0);
  myGLCD.setColor(0, 0, 0);

  myGLCD.fillRect(502, bar - 2, 544, 182);
  myGLCD.fillRect(560, bar2 - 2, 602, 182);

  myGLCD.setColor(0, 0, 255);

  myGLCD.fillRect(502, 450, 544, bar);
  myGLCD.fillRect(560, 450, 602, bar2);

  myGLCD.setFont(RusFont1);

  if (Pump1PWM_t < 10)
  {
    myGLCD.setColor(255, 255, 0);
    myGLCD.printNumI(Pump1PWM_t, 512, 160);
    myGLCD.setColor(0, 0, 0);
    myGLCD.print("  ", 526, 160);
  }
  else if ((Pump1PWM_t >= 10) && (Pump1PWM_t <= 99))
  {
    myGLCD.setColor(255, 255, 0);
    myGLCD.printNumI(Pump1PWM_t, 512, 160);
    myGLCD.setColor(0, 0, 0);
    myGLCD.print(" ", 544, 160);
  }
  else
  {
    myGLCD.setColor(255, 255, 0);
    myGLCD.printNumI(Pump1PWM_t, 512, 160);
  }

  if (Pump2PWM_t < 10)
  {
    myGLCD.setColor(255, 255, 0);
    myGLCD.printNumI(Pump2PWM_t, 570, 160);
    myGLCD.setColor(0, 0, 0);
    myGLCD.print("   ", 586, 160);
  }
  else if ((Pump2PWM_t >= 10) && (Pump2PWM_t <= 99))
  {
    myGLCD.setColor(255, 255, 0);
    myGLCD.printNumI(Pump2PWM_t, 570, 160);
    myGLCD.setColor(0, 0, 0);
    myGLCD.print(" ", 602, 160);
  }
  else
  {
    myGLCD.printNumI(Pump2PWM_t, 570, 160);
  }
}
#endif

void Wavemaker()
{
  int value = 0;
  long times = millis();

  if (modo_selecionado == 1)
  {
    value = int(128 + 127 * sin(2  *  PI / periodo * times));
    Pump1PWM = 255 - value;
    Pump2PWM = value;
  }

  else if (modo_selecionado == 2)
  {
    value = int(128 + 127 * sin(2  *  PI / periodo * times));
    Pump1PWM = Pump2PWM = value;
  }

  else if (modo_selecionado == 3)
  {
    byte PWM1 [] = {
      128, 172, 205, 222, 225, 214, 187, 190, 203, 205, 198, 181, 173, 182, 185, 181, 171, 155, 159, 163, 163, 157, 146, 128, 210, 246, 254, 240, 207, 128
    }; // Opposite
    byte PWM2 [] = {
      128, 146, 157, 163, 163, 159, 155, 171, 181, 185, 182, 173, 181, 198, 205, 203, 190, 187, 214, 225, 222, 205, 172, 128, 210, 246, 254, 240, 207, 128
    };  // Same

    int millis1 = millis() - millis_antes_1;

    Pump1PWM = int(map(millis1, 0, duracao, PWM1 [conta], PWM1 [conta + 1]));
    Pump2PWM = int(map(millis1, 0, duracao, PWM2 [conta], PWM2 [conta + 1]));

    if ((millis() - millis_antes_1) >= duracao)
    {
      millis_antes_1 = millis();
      conta++;
    }

    if ( conta >= 29) // Opposite and same
    {
      conta = 0;
    }
  }

  else if (modo_selecionado == 4)
  {
    if ((millis() - millis_antes_1) >= duracao)
    {
      millis_antes_1 = millis();
      conta += 1;
      value = int(128 + 127 * sin(2 * PI / 400 * times));
      Pump1PWM = 255 - value;
      Pump2PWM = value;

      if ((conta < 61) || (conta > 81))
      {
        if (Pump1PWM < 128)
        {
          Pump1PWM += 128;
        }
        if (Pump2PWM < 128)
        {
          Pump2PWM += 128;
        }
      }
      else if ((conta >= 61) && (conta <= 81))
      {
        if (Pump1PWM < 128)
        {
          Pump1PWM += 50;
        }
        if (Pump2PWM < 128)
        {
          Pump2PWM += 50;
        }
      }
    }
    if (conta >= 142) // Opposite and same
    {
      conta = 0;
    }
  }
  else if (modo_selecionado == 5)
  {
    Pump1PWM = Pump1PWM_temp;
    Pump2PWM = Pump2PWM_temp;
  }
  if (wavemaker_on_off == true)
  {
    Pump1PWM = Pump2PWM = 0;
  }

#ifdef NIGHT_MODE
  if ((bled_out == 0) && (wled_out == 0) && (rbled_out  == 0) && (rled_out == 0) && (uvled_out == 0))
  {
    Pump1PWM *= POWER_PUMP1;
    Pump2PWM *= POWER_PUMP2;
  }
#endif
  analogWrite(wavemaker1, Pump1PWM);
  analogWrite(wavemaker2, Pump2PWM);
}
