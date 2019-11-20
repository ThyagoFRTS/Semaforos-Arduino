void setup()
{
  
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  
  
}

void pedrinho(){
  
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  
  delay(1000);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(1, HIGH);
  
  
  
  digitalWrite(3, LOW);
  //-----------SEGUNDO SEMAFORO------------------
  digitalWrite(6, HIGH);//verde
  digitalWrite(5, LOW);//amarelo
  digitalWrite(4, LOW);//vermelho
  
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  

  
  //delay(1000);
  digitalWrite(6, LOW);
  
}

void danielzinho(){
  


  

}


void loop()
{
  
  pedrinho();
  
  //danielzinho();
  
  
}
