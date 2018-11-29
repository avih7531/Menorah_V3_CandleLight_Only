  // Copyright (C) Avi Herman
  //Ur welcome Daniella...

  
  int piezo = 3;
  int tempo = 500;


struct MusicStruct {
  
  
  int A = 550;
  int As = 582;
  int B = 617;
  int C = 654;
  int Cs = 693;
  int D = 734;
  int Ds = 777;
  int E = 824;
  int F = 873;
  int Fs = 925;
  int G = 980;
  int Gs = 1003;
  int C5  = 523;
  int CS5 = 554;
  int D5  = 587;
  int DS5 = 622;
  int E5  = 659;
  int F5  = 698;
  int FS5 = 740;
  int G5  = 784;
  int GS5 = 831;
  int A5  = 880;
  int AS5 = 932;
  int B5  = 988;
  int C6  = 1047;
  int CS6 = 1109;
  int D6  = 1175;
  int DS6 = 1245;
  int E6  = 1319;
  int F6  = 1397;
  int FS6 = 1480;
  int G6  = 1568;
  int GS6 = 1661;
  int A6  = 1760;
  int AS6 = 1865;
  int B6  = 1976;
  
  
}Music;


struct LengthStruct {

  
  float half = 0.5;
  float threethirds = 0.75;
  float one = 1.0;
  float one_half = 1.5;
  float two = 2.0;
  float two_half = 2.5;

  
}Length;


  void setup() {


      pinMode(piezo, OUTPUT);

      
  }
  

void setTone(int pin, int note, int duration) {
  
  
  tone(pin, note, duration);
  
  
  delay(duration);
  
  
}


void loop() {


  //I put my latakes in the air sometimes
  setTone(piezo, Music.GS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.half);
  setTone(piezo, Music.FS6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.FS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.threethirds);
  setTone(piezo, Music.B5, tempo * Length.threethirds);
  setTone(piezo, Music.CS5, tempo * Length.threethirds);
  

delay(200);


  //Singing ay oh spin the driedel
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.FS6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.one_half);
  setTone(piezo, Music.CS5, tempo * Length.one_half); 

  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.FS6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.one);
delay(100);
  setTone(piezo, Music.CS5, tempo * Length.one);



delay(200);


  //I want to celebrate and live my life 
  setTone(piezo, Music.GS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.half);
  setTone(piezo, Music.FS6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.FS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.threethirds);
  setTone(piezo, Music.B5, tempo * Length.threethirds);
  setTone(piezo, Music.CS5, tempo * Length.threethirds);
  
  

delay(200);


  //Singing ay oh spin the driedel
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.FS6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.one_half);
  setTone(piezo, Music.CS5, tempo * Length.one_half); 
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.FS6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.one);
delay(100);
  setTone(piezo, Music.CS5, tempo * Length.one);


  
delay(150);


  //Oh we say Maotzor
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.one);
  setTone(piezo, Music.E6, tempo * Length.one);  


 delay(200);


  //Oh yes for all eight nights
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.one);
  setTone(piezo, Music.E6, tempo * Length.one);


delay(200);


  //Then we play dridel by the candlelight
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.DS5, tempo * Length.one);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.FS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.one);
  setTone(piezo, Music.B5, tempo * Length.one);
  setTone(piezo, Music.CS5, tempo * Length.one);


delay(200);


//And I told you once
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.one);

  
delay(200);


  //And I told you twice
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.one);


delay(200);


  //'Bought the miricle
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.DS5, tempo * Length.one);


delay(200);

 
  //Of the candlelight  
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.FS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.one);
  setTone(piezo, Music.B5, tempo * Length.one);
  setTone(piezo, Music.CS5, tempo * Length.one);

delay(1000);


delay(1000);


}
