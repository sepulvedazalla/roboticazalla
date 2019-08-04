#include <VarSpeedServo.h>
//mrrobotzalla
//rafaelzallalinux@gmail.com

VarSpeedServo s11,s12,s13,s14,s21,s22,s23,s24;

  int sensor1 = A4;
  int sensor2 = A5;
  int sensor3 = A6;
  int sensor4 = A7;
  int sensorvalue1 = 0;
  int sensorvalue2 = 0;
  int sensorvalue3 = 0;
  int tmp=1000;

void setup() {
  s11.attach(6);
  s12.attach(7);
  s13.attach(8);
  s14.attach(9);
  s21.attach(13);
  s22.attach(12);
  s23.attach(11);
  s24.attach(10);
  }

void loop() {
  sensorvalue1 = analogRead(sensor1);
  if (sensorvalue1 < 850) {
    
// padrão - garra fechada braço 01
  s11.write(30);
  s12.slowmove(120,40);
  s13.slowmove(70,40);
  s14.slowmove(60,40);
  delay(tmp);
  
// garra aberta
  s11.write(80);
  s12.slowmove(120,40);
  s13.slowmove(70,40);
  s14.slowmove(60,40); 
  delay(tmp);

// abaixa
  s11.write(80);
  s12.slowmove(50,40);
  s13.slowmove(85,40);
  s14.slowmove(60,40); 
  delay(tmp);

// pega abaixado
  s11.write(30);
  s12.slowmove(50,40);
  s13.slowmove(85,40);
  s14.slowmove(60,40); 
  delay(tmp);

// levanta objeto
  s11.write(30);
  s12.slowmove(120,40);
  s13.slowmove(70,40);
  s14.slowmove(60,40);
  delay(tmp);

// move base
  s11.write(30);
  s12.slowmove(120,40);
  s13.slowmove(70,40);
  s14.slowmove(0,40); 
  delay(tmp);

// abaixa
  s11.write(30);
  s12.slowmove(64,40);
  s13.slowmove(80,40);
  s14.slowmove(0,40); 
  delay(tmp);

// solta objeto
  s11.write(80);
  s12.slowmove(64,40);
  s13.slowmove(80,40);
  s14.slowmove(0,40); 
  delay(tmp);

// recua
  s11.write(80);
  s12.slowmove(140,40);
  s13.slowmove(90,40);
  s14.slowmove(0,40);
  delay(tmp);
  }
  
  else {
// padrão - garra fechada braço 01
  s11.write(30);
  s12.slowmove(120,40);
  s13.slowmove(70,40);
  s14.slowmove(60,40);
  delay(tmp);
  }


sensorvalue2 = analogRead(sensor2);
  if (sensorvalue2 < 730) {

//padrão - garra fechada braço 02
  s21.write(10);
  s22.slowmove(100,40);
  s23.slowmove(105,40);
  s24.slowmove(45,40);
delay(tmp);

//  garra aberta
  s21.write(45);
  s22.slowmove(100,40);
  s23.slowmove(105,40);
  s24.slowmove(3,40); 
delay(tmp);

// abaixa
  s21.write(45);
  s22.slowmove(140,40);
  s23.slowmove(105,40);
  s24.slowmove(3,40); 
delay(tmp);

// pega abaixado
  s21.write(10);
  s22.slowmove(140,40);
  s23.slowmove(105,40);
  s24.slowmove(3,40); 
delay(tmp);

// levanta objeto
  s21.write(10);
  s22.slowmove(100,40);
  s23.slowmove(110,40);
  s24.slowmove(3,40);
delay(tmp);

// move base
  s21.write(10);
  s22.slowmove(100,40);
  s23.slowmove(110,40);
  s24.slowmove(45,40); 
delay(tmp);

// abaixa
  s21.write(10);
  s22.slowmove(155,40);
  s23.slowmove(110,40);
  s24.slowmove(45,40); 
delay(tmp);

//  solta o obejto
  s21.write(45);
  s22.slowmove(155,40);
  s23.slowmove(110,40);
  s24.slowmove(45,40); 
  delay(tmp);
  
// recua
  s21.write(45);
  s22.slowmove(100,40);
  s23.slowmove(105,40);
  s24.slowmove(45,40); 
  delay(tmp);
  }

  else {
// padrão - garra fechada braço 02
  s21.write(10);
  s22.slowmove(100,40);
  s23.slowmove(105,40);
  s24.slowmove(45,40);
  delay(tmp);
  }
}
