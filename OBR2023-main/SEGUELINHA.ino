//SEGUE LINHA 

void SegueLinha()
{
   SensorC1 = digitalRead(pin_S1);
   SensorC2 = digitalRead(pin_S0);
  //LEMBRETE QUE 0-LUZ LIGADA E 1-DESLIGADA
  
  if ((SensorC1 == 1) && (SensorC2 == 1)) { // Se detectar na extremidade das faixas duas cores brancas e Nas duas do ceentro preto
    //Serial.println("CEN");
    robot_forward(200);// para Frente
    delay(5);
  }
   if ((SensorC1 == 1) && (SensorC2 == 0)) { 
    //Serial.println("Esq");
    robot_left(190);// ESQUERDA
    delay(5);
  }
   if ((SensorC1 == 0) && (SensorC2 == 1)) { 
    Serial.println("Dir");
    robot_right(190);// DIREITA
    delay(5);
  }
  /*if ((SensorC1 == 0) && (SensorC2 == 0)) {
    Serial.println("GAP");
    robot_forward(255);// para Frente
    delay(500);
    robot_stop(0);
    delay(1000);
  }*/
} //FIM VOID
