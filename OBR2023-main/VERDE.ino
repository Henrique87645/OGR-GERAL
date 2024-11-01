VERDE

void verde(){

  Sensor3 = digitalRead(pin_S3); //Esq 
  Sensor2 = digitalRead(pin_S2); //Dir
  
  if ((verdeE > 30)&&(Sensor3 == 1)){
    //Serial.println(" VERDE DIREITA");
    robot_forward(255);
    delay(150);
    robot_right(255);
    delay(750);
  }
     
  if ((verdeD > 30)&&(Sensor2 == 1)){
    //Serial.println("VERDE ESQUERDA");
    robot_forward(255);
    delay(150);
    robot_left(255);
    delay(750);
  }
  if((verdeE > 30)&&(Sensor3 == 1)&&(verdeD > 30)&&(Sensor2 == 1)){
    //Serial.println("VERDE RETORNA");
    robot_left(255);
    delay(1000);
  }
}
