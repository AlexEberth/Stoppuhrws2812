#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
#define PIN 9 // Hier wird angegeben, an welchem digitalen Pin die WS2812 LEDs bzw. NeoPixel angeschlossen sind
#define NUMPIXELS 150 // Hier wird die Anzahl der angeschlossenen WS2812 LEDs bzw. NeoPixel angegeben
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int pause=1000; // 1 sekunde Pause bis zur Ansteuerung der nächsten LED.

// sollte  a=0 etc. sein, damit der Streifen von der ersten LED angeht und bis hinten recht
int a=0;
int b=1;
int c=2;
int d=3;
int e=4;
int f=5;
int g=6;
int h=7;
int i=8;
int j=9;
int k=10;
int l=11;
int m=12;
int n=13;
int o=14;
int p=15;
int q=16;
int r=17;
int s=18;
int t=19;
int u=20;
int v=21;
int w=22;
int x=23;
int y=24;
int z=25;

int sek=0;
int mine=0;
int minz=0;
int stde=0;
int stdz=0;

void setup() 
{
  pixels.begin(); // Initialisierung der NeoPixel
}

void loop() {
//===================== Stunden-Einer ==========================
// alles aus
pixels.setPixelColor(a + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(b + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(c + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(d + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(e + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(f + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(g + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(h + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(i + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(j + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(k + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(l + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(m + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(n + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(o + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(p + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(q + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(r + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(s + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(t + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(u + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(v + 102, pixels.Color(0,0,0)); 
pixels.setPixelColor(w + 102, pixels.Color(0,0,0)); 
pixels.show();

if (stde==0){     //----------------- 0 -----------------------------------------------
// 0 an
pixels.setPixelColor(a + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(j + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(k + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(l + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(m + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 102, pixels.Color(0,255,0)); 
pixels.show();
  }
if (stde==1){    //---------------- 1 --------------------------------------------------
// 1 an
pixels.setPixelColor(a + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 102, pixels.Color(0,255,0)); 
pixels.show();
  }
if (stde==2){  //------------- 2 ------------------------------------------------------
// 2 an
pixels.setPixelColor(a + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(j + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(k + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(l + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(m + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 102, pixels.Color(0,255,0)); 
pixels.show();
  }
if (stde==3){  //--------- 3 -------------------------------------------------------------
// 3 an
pixels.setPixelColor(a + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 102, pixels.Color(0,255,0)); 
pixels.show();
  }
if (stde==4){   //------------------------- 4 -------------------------------
// 4 an
pixels.setPixelColor(a + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 102, pixels.Color(0,255,0)); 
pixels.show();
  }
if (stde==5){  //--------------- 5 -------------------------------------------
// 5 an
pixels.setPixelColor(d + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 102, pixels.Color(0,255,0)); 
pixels.show();
  }
if (stde==6){  //-------------------- 6 -------------------------------------
// 6 an
pixels.setPixelColor(d + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(j + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(k + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(l + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(m + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 102, pixels.Color(0,255,0)); 
pixels.show();
  }
if (stde==7){ //---------------- 7 ----------------------------------
// 7 an
pixels.setPixelColor(a + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 102, pixels.Color(0,255,0)); 
pixels.show();  
  }
if (stde==8){  //------------------ 8 -----------------------------
// 8 an
pixels.setPixelColor(a + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(j + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(k + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(l + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(m + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 102, pixels.Color(0,255,0)); 
pixels.show();
  }
if (stde==9){  //-------------------- 9 --------------------------
// 9 an
pixels.setPixelColor(a + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 102, pixels.Color(0,255,0));  
pixels.setPixelColor(n + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 102, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 102, pixels.Color(0,255,0)); 
pixels.show();
  }

//================= Stunden-Zehner =========================

// alles aus
pixels.setPixelColor(a + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(b + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(c + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(d + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(e + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(f + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(g + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(h + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(i + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(j + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(k + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(l + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(m + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(n + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(o + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(p + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(q + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(r + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(s + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(t + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(u + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(v + 127, pixels.Color(0,0,0)); 
pixels.setPixelColor(w + 127, pixels.Color(0,0,0)); 
pixels.show();

if (stdz==0){     //----------------- 0 -----------------------------------------------
// 0 an
pixels.setPixelColor(a + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(j + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(k + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(l + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(m + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 127, pixels.Color(0,255,0)); 
pixels.show();
  }
if (stdz==1){    //---------------- 1 --------------------------------------------------
// 1 an
pixels.setPixelColor(a + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 127, pixels.Color(0,255,0)); 
pixels.show();
  }
if (stdz==2){  //------------- 2 ------------------------------------------------------
// 2 an
pixels.setPixelColor(a + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(j + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(k + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(l + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(m + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 127, pixels.Color(0,255,0)); 
pixels.show();
  }
if (stdz==3){  //--------- 3 -------------------------------------------------------------
// 3 an
pixels.setPixelColor(a + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 127, pixels.Color(0,255,0)); 
pixels.show();
  }
if (stdz==4){   //------------------------- 4 -------------------------------
// 4 an
pixels.setPixelColor(a + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 127, pixels.Color(0,255,0)); 
pixels.show();
  }
if (stdz==5){  //--------------- 5 -------------------------------------------
// 5 an
pixels.setPixelColor(d + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 127, pixels.Color(0,255,0)); 
pixels.show();
  }
if (stdz==6){  //-------------------- 6 -------------------------------------
// 6 an
pixels.setPixelColor(d + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(j + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(k + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(l + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(m + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 127, pixels.Color(0,255,0)); 
pixels.show();
  }
if (stdz==7){ //---------------- 7 ----------------------------------
// 7 an
pixels.setPixelColor(a + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 127, pixels.Color(0,255,0)); 
pixels.show();  
  }
if (stdz==8){  //------------------ 8 -----------------------------
// 8 an
pixels.setPixelColor(a + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(j + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(k + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(l + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(m + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 127, pixels.Color(0,255,0)); 
pixels.show();
  }
if (stdz==9){  //-------------------- 9 --------------------------
// 9 an
pixels.setPixelColor(a + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 127, pixels.Color(0,255,0));  
pixels.setPixelColor(n + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 127, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 127, pixels.Color(0,255,0)); 
pixels.show();
  }



//================ Minuten-Einer ===========================
// alles aus
pixels.setPixelColor(a + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(b + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(c + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(d + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(e + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(f + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(g + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(h + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(i + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(j + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(k + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(l + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(m + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(n + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(o + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(p + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(q + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(r + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(s + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(t + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(u + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(v + 51, pixels.Color(0,0,0)); 
pixels.setPixelColor(w + 51, pixels.Color(0,0,0)); 
pixels.show();

if (mine==0){     //----------------- 0 -----------------------------------------------
// 0 an
pixels.setPixelColor(a + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(j + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(k + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(l + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(m + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 51, pixels.Color(0,255,0)); 
pixels.show();
  }
if (mine==1){    //---------------- 1 --------------------------------------------------
// 1 an
pixels.setPixelColor(a + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 51, pixels.Color(0,255,0)); 
pixels.show();
  }
if (mine==2){  //------------- 2 ------------------------------------------------------
// 2 an
pixels.setPixelColor(a + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(j + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(k + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(l + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(m + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 51, pixels.Color(0,255,0)); 
pixels.show();
  }
if (mine==3){  //--------- 3 -------------------------------------------------------------
// 3 an
pixels.setPixelColor(a + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 51, pixels.Color(0,255,0)); 
pixels.show();
  }
if (mine==4){   //------------------------- 4 -------------------------------
// 4 an
pixels.setPixelColor(a + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 51, pixels.Color(0,255,0)); 
pixels.show();
  }
if (mine==5){  //--------------- 5 -------------------------------------------
// 5 an
pixels.setPixelColor(d + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 51, pixels.Color(0,255,0)); 
pixels.show();
  }
if (mine==6){  //-------------------- 6 -------------------------------------
// 6 an
pixels.setPixelColor(d + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(j + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(k + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(l + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(m + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 51, pixels.Color(0,255,0)); 
pixels.show();
  }
if (mine==7){ //---------------- 7 ----------------------------------
// 7 an
pixels.setPixelColor(a + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 51, pixels.Color(0,255,0)); 
pixels.show();  
  }
if (mine==8){  //------------------ 8 -----------------------------
// 8 an
pixels.setPixelColor(a + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(j + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(k + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(l + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(m + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 51, pixels.Color(0,255,0)); 
pixels.show();
  }
if (mine==9){  //-------------------- 9 --------------------------
// 9 an
pixels.setPixelColor(a + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 51, pixels.Color(0,255,0));  
pixels.setPixelColor(n + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 51, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 51, pixels.Color(0,255,0)); 
pixels.show();
  }


//================= Minuten-Zehner ==============================================
// alles aus
pixels.setPixelColor(a + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(b + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(c + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(d + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(e + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(f + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(g + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(h + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(i + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(j + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(k + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(l + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(m + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(n + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(o + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(p + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(q + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(r + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(s + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(t + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(u + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(v + 76, pixels.Color(0,0,0)); 
pixels.setPixelColor(w + 76, pixels.Color(0,0,0)); 
pixels.show();

if (minz==0){     //----------------- 0 -----------------------------------------------
// 0 an
pixels.setPixelColor(a + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(j + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(k + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(l + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(m + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 76, pixels.Color(0,255,0)); 
pixels.show();
  }
if (minz==1){    //---------------- 1 --------------------------------------------------
// 1 an
pixels.setPixelColor(a + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 76, pixels.Color(0,255,0)); 
pixels.show();
  }
if (minz==2){  //------------- 2 ------------------------------------------------------
// 2 an
pixels.setPixelColor(a + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(j + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(k + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(l + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(m + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 76, pixels.Color(0,255,0)); 
pixels.show();
  }
if (minz==3){  //--------- 3 -------------------------------------------------------------
// 3 an
pixels.setPixelColor(a + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 76, pixels.Color(0,255,0)); 
pixels.show();
  }
if (minz==4){   //------------------------- 4 -------------------------------
// 4 an
pixels.setPixelColor(a + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 76, pixels.Color(0,255,0)); 
pixels.show();
  }
if (minz==5){  //--------------- 5 -------------------------------------------
// 5 an
pixels.setPixelColor(d + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 76, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 76, pixels.Color(0,255,0)); 
pixels.show();
  }

//================ Sekunden-Zehner =======================================
// alles aus
pixels.setPixelColor(a + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(b + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(c + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(d + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(e + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(f + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(g + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(h + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(i + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(j + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(k + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(l + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(m + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(n + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(o + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(p + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(q + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(r + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(s + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(t + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(u + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(v + 25, pixels.Color(0,0,0)); 
pixels.setPixelColor(w + 25, pixels.Color(0,0,0)); 
pixels.show();

if (sek==0){     //----------------- 0 -----------------------------------------------
// 0 an
pixels.setPixelColor(a + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(j + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(k + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(l + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(m + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 25, pixels.Color(0,255,0)); 
pixels.show();
  }
if (sek==1){    //---------------- 1 --------------------------------------------------
// 1 an
pixels.setPixelColor(a + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 25, pixels.Color(0,255,0)); 
pixels.show();
  }
if (sek==2){  //------------- 2 ------------------------------------------------------
// 2 an
pixels.setPixelColor(a + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(j + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(k + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(l + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(m + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 25, pixels.Color(0,255,0)); 
pixels.show();
  }
if (sek==3){  //--------- 3 -------------------------------------------------------------
// 3 an
pixels.setPixelColor(a + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(d + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 25, pixels.Color(0,255,0)); 
pixels.show();
  }
if (sek==4){   //------------------------- 4 -------------------------------
// 4 an
pixels.setPixelColor(a + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(b + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(c + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 25, pixels.Color(0,255,0)); 
pixels.show();
  }
if (sek==5){  //--------------- 5 -------------------------------------------
// 5 an
pixels.setPixelColor(d + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(e + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(f + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(g + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(h + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(i + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(n + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(o + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(p + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(q + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(r + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(s + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(t + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(u + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(v + 25, pixels.Color(0,255,0)); 
pixels.setPixelColor(w + 25, pixels.Color(0,255,0)); 
pixels.show();
  }


sek = sek+1;
if (sek==6) {  
  sek=0;
  mine=mine+1;
  if (mine==10){
    mine=0;
    minz=minz+1;
    if (minz==6){
      minz=0;
      stde=stde+1;
      if (stde==10){
        stde=0;
        stdz=stdz+1;
        if (stdz==6){
          stdz=0;
        }
      }
    }
  }
}


//============================ Sekunden-Einser ======================
//----------------- 0 -----------------------------------------------
// 9 aus
pixels.setPixelColor(a, pixels.Color(0,0,0)); 
pixels.setPixelColor(b, pixels.Color(0,0,0)); 
pixels.setPixelColor(c, pixels.Color(0,0,0)); 
pixels.setPixelColor(d, pixels.Color(0,0,0)); 
pixels.setPixelColor(e, pixels.Color(0,0,0)); 
pixels.setPixelColor(f, pixels.Color(0,0,0)); 
pixels.setPixelColor(g, pixels.Color(0,0,0)); 
pixels.setPixelColor(h, pixels.Color(0,0,0)); 
pixels.setPixelColor(i, pixels.Color(0,0,0)); 
pixels.setPixelColor(n, pixels.Color(0,0,0)); 
pixels.setPixelColor(o, pixels.Color(0,0,0)); 
pixels.setPixelColor(p, pixels.Color(0,0,0)); 
pixels.setPixelColor(q, pixels.Color(0,0,0)); 
pixels.setPixelColor(r, pixels.Color(0,0,0)); 
pixels.setPixelColor(s, pixels.Color(0,0,0)); 
pixels.setPixelColor(t, pixels.Color(0,0,0)); 
pixels.setPixelColor(u, pixels.Color(0,0,0)); 
pixels.setPixelColor(v, pixels.Color(0,0,0)); 
pixels.setPixelColor(w, pixels.Color(0,0,0)); 
// 0 an
pixels.setPixelColor(a, pixels.Color(0,255,0)); 
pixels.setPixelColor(b, pixels.Color(0,255,0)); 
pixels.setPixelColor(c, pixels.Color(0,255,0)); 
pixels.setPixelColor(d, pixels.Color(0,255,0)); 
pixels.setPixelColor(e, pixels.Color(0,255,0)); 
pixels.setPixelColor(f, pixels.Color(0,255,0)); 
pixels.setPixelColor(g, pixels.Color(0,255,0)); 
pixels.setPixelColor(h, pixels.Color(0,255,0)); 
pixels.setPixelColor(i, pixels.Color(0,255,0)); 
pixels.setPixelColor(j, pixels.Color(0,255,0)); 
pixels.setPixelColor(k, pixels.Color(0,255,0)); 
pixels.setPixelColor(l, pixels.Color(0,255,0)); 
pixels.setPixelColor(m, pixels.Color(0,255,0)); 
pixels.setPixelColor(n, pixels.Color(0,255,0)); 
pixels.setPixelColor(o, pixels.Color(0,255,0)); 
pixels.setPixelColor(p, pixels.Color(0,255,0)); 
pixels.setPixelColor(q, pixels.Color(0,255,0)); 
pixels.setPixelColor(r, pixels.Color(0,255,0)); 
pixels.setPixelColor(s, pixels.Color(0,255,0)); 
pixels.setPixelColor(t, pixels.Color(0,255,0)); 
pixels.show();

delay (pause); 

  //---------------- 1 --------------------------------------------------
// 0 aus
pixels.setPixelColor(a, pixels.Color(0,0,0)); 
pixels.setPixelColor(b, pixels.Color(0,0,0)); 
pixels.setPixelColor(c, pixels.Color(0,0,0)); 
pixels.setPixelColor(d, pixels.Color(0,0,0)); 
pixels.setPixelColor(e, pixels.Color(0,0,0)); 
pixels.setPixelColor(f, pixels.Color(0,0,0)); 
pixels.setPixelColor(g, pixels.Color(0,0,0)); 
pixels.setPixelColor(h, pixels.Color(0,0,0)); 
pixels.setPixelColor(i, pixels.Color(0,0,0)); 
pixels.setPixelColor(j, pixels.Color(0,0,0)); 
pixels.setPixelColor(k, pixels.Color(0,0,0)); 
pixels.setPixelColor(l, pixels.Color(0,0,0)); 
pixels.setPixelColor(m, pixels.Color(0,0,0)); 
pixels.setPixelColor(n, pixels.Color(0,0,0)); 
pixels.setPixelColor(o, pixels.Color(0,0,0)); 
pixels.setPixelColor(p, pixels.Color(0,0,0)); 
pixels.setPixelColor(q, pixels.Color(0,0,0)); 
pixels.setPixelColor(r, pixels.Color(0,0,0)); 
pixels.setPixelColor(s, pixels.Color(0,0,0)); 
pixels.setPixelColor(t, pixels.Color(0,0,0)); 
// 1 an
pixels.setPixelColor(a, pixels.Color(0,255,0)); 
pixels.setPixelColor(b, pixels.Color(0,255,0)); 
pixels.setPixelColor(c, pixels.Color(0,255,0)); 
pixels.setPixelColor(q, pixels.Color(0,255,0)); 
pixels.setPixelColor(r, pixels.Color(0,255,0)); 
pixels.setPixelColor(s, pixels.Color(0,255,0)); 
pixels.setPixelColor(t, pixels.Color(0,255,0)); 
pixels.show();

delay (pause); 

//------------- 2 ------------------------------------------------------
// 1 aus
pixels.setPixelColor(a, pixels.Color(0,0,0)); 
pixels.setPixelColor(b, pixels.Color(0,0,0)); 
pixels.setPixelColor(c, pixels.Color(0,0,0)); 
pixels.setPixelColor(p, pixels.Color(0,0,0)); 
pixels.setPixelColor(q, pixels.Color(0,0,0)); 
pixels.setPixelColor(r, pixels.Color(0,0,0)); 
pixels.setPixelColor(s, pixels.Color(0,0,0)); 
pixels.setPixelColor(t, pixels.Color(0,0,0)); 
// 2 an
pixels.setPixelColor(a, pixels.Color(0,255,0)); 
pixels.setPixelColor(b, pixels.Color(0,255,0)); 
pixels.setPixelColor(c, pixels.Color(0,255,0)); 
pixels.setPixelColor(d, pixels.Color(0,255,0)); 
pixels.setPixelColor(e, pixels.Color(0,255,0)); 
pixels.setPixelColor(f, pixels.Color(0,255,0)); 
pixels.setPixelColor(j, pixels.Color(0,255,0)); 
pixels.setPixelColor(k, pixels.Color(0,255,0)); 
pixels.setPixelColor(l, pixels.Color(0,255,0)); 
pixels.setPixelColor(m, pixels.Color(0,255,0)); 
pixels.setPixelColor(n, pixels.Color(0,255,0)); 
pixels.setPixelColor(o, pixels.Color(0,255,0)); 
pixels.setPixelColor(p, pixels.Color(0,255,0)); 
pixels.setPixelColor(u, pixels.Color(0,255,0)); 
pixels.setPixelColor(v, pixels.Color(0,255,0)); 
pixels.setPixelColor(w, pixels.Color(0,255,0)); 
pixels.show();

delay (pause); 

//--------- 3 -------------------------------------------------------------
// 2 aus
pixels.setPixelColor(a, pixels.Color(0,0,0)); 
pixels.setPixelColor(b, pixels.Color(0,0,0)); 
pixels.setPixelColor(c, pixels.Color(0,0,0)); 
pixels.setPixelColor(d, pixels.Color(0,0,0)); 
pixels.setPixelColor(e, pixels.Color(0,0,0)); 
pixels.setPixelColor(f, pixels.Color(0,0,0)); 
pixels.setPixelColor(j, pixels.Color(0,0,0)); 
pixels.setPixelColor(k, pixels.Color(0,0,0)); 
pixels.setPixelColor(l, pixels.Color(0,0,0)); 
pixels.setPixelColor(m, pixels.Color(0,0,0)); 
pixels.setPixelColor(n, pixels.Color(0,0,0)); 
pixels.setPixelColor(o, pixels.Color(0,0,0)); 
pixels.setPixelColor(p, pixels.Color(0,0,0)); 
pixels.setPixelColor(u, pixels.Color(0,0,0)); 
pixels.setPixelColor(v, pixels.Color(0,0,0)); 
pixels.setPixelColor(w, pixels.Color(0,0,0)); 
// 3 an
pixels.setPixelColor(a, pixels.Color(0,255,0)); 
pixels.setPixelColor(b, pixels.Color(0,255,0)); 
pixels.setPixelColor(c, pixels.Color(0,255,0)); 
pixels.setPixelColor(d, pixels.Color(0,255,0)); 
pixels.setPixelColor(e, pixels.Color(0,255,0)); 
pixels.setPixelColor(f, pixels.Color(0,255,0)); 
pixels.setPixelColor(n, pixels.Color(0,255,0)); 
pixels.setPixelColor(o, pixels.Color(0,255,0)); 
pixels.setPixelColor(p, pixels.Color(0,255,0)); 
pixels.setPixelColor(q, pixels.Color(0,255,0)); 
pixels.setPixelColor(r, pixels.Color(0,255,0)); 
pixels.setPixelColor(s, pixels.Color(0,255,0)); 
pixels.setPixelColor(t, pixels.Color(0,255,0)); 
pixels.setPixelColor(u, pixels.Color(0,255,0)); 
pixels.setPixelColor(v, pixels.Color(0,255,0)); 
pixels.setPixelColor(w, pixels.Color(0,255,0)); 
pixels.show();

delay (pause); 

//------------------------- 4 -------------------------------
// 3 aus
pixels.setPixelColor(a, pixels.Color(0,0,0)); 
pixels.setPixelColor(b, pixels.Color(0,0,0)); 
pixels.setPixelColor(c, pixels.Color(0,0,0)); 
pixels.setPixelColor(d, pixels.Color(0,0,0)); 
pixels.setPixelColor(e, pixels.Color(0,0,0)); 
pixels.setPixelColor(f, pixels.Color(0,0,0)); 
pixels.setPixelColor(n, pixels.Color(0,0,0)); 
pixels.setPixelColor(o, pixels.Color(0,0,0)); 
pixels.setPixelColor(p, pixels.Color(0,0,0)); 
pixels.setPixelColor(q, pixels.Color(0,0,0)); 
pixels.setPixelColor(r, pixels.Color(0,0,0)); 
pixels.setPixelColor(s, pixels.Color(0,0,0)); 
pixels.setPixelColor(t, pixels.Color(0,0,0)); 
pixels.setPixelColor(u, pixels.Color(0,0,0)); 
pixels.setPixelColor(v, pixels.Color(0,0,0)); 
pixels.setPixelColor(w, pixels.Color(0,0,0)); 
// 4 an
pixels.setPixelColor(a, pixels.Color(0,255,0)); 
pixels.setPixelColor(b, pixels.Color(0,255,0)); 
pixels.setPixelColor(c, pixels.Color(0,255,0)); 
pixels.setPixelColor(g, pixels.Color(0,255,0)); 
pixels.setPixelColor(h, pixels.Color(0,255,0)); 
pixels.setPixelColor(i, pixels.Color(0,255,0)); 
pixels.setPixelColor(q, pixels.Color(0,255,0)); 
pixels.setPixelColor(r, pixels.Color(0,255,0)); 
pixels.setPixelColor(s, pixels.Color(0,255,0)); 
pixels.setPixelColor(t, pixels.Color(0,255,0)); 
pixels.setPixelColor(u, pixels.Color(0,255,0)); 
pixels.setPixelColor(v, pixels.Color(0,255,0)); 
pixels.setPixelColor(w, pixels.Color(0,255,0)); 
pixels.show();

delay (pause); 

//--------------- 5 -------------------------------------------
// 4 aus
pixels.setPixelColor(a, pixels.Color(0,0,0)); 
pixels.setPixelColor(b, pixels.Color(0,0,0)); 
pixels.setPixelColor(c, pixels.Color(0,0,0)); 
pixels.setPixelColor(g, pixels.Color(0,0,0)); 
pixels.setPixelColor(h, pixels.Color(0,0,0)); 
pixels.setPixelColor(i, pixels.Color(0,0,0)); 
pixels.setPixelColor(q, pixels.Color(0,0,0)); 
pixels.setPixelColor(r, pixels.Color(0,0,0)); 
pixels.setPixelColor(s, pixels.Color(0,0,0)); 
pixels.setPixelColor(t, pixels.Color(0,0,0)); 
pixels.setPixelColor(u, pixels.Color(0,0,0)); 
pixels.setPixelColor(v, pixels.Color(0,0,0)); 
pixels.setPixelColor(w, pixels.Color(0,0,0)); 
// 5 an
pixels.setPixelColor(d, pixels.Color(0,255,0)); 
pixels.setPixelColor(e, pixels.Color(0,255,0)); 
pixels.setPixelColor(f, pixels.Color(0,255,0)); 
pixels.setPixelColor(g, pixels.Color(0,255,0)); 
pixels.setPixelColor(h, pixels.Color(0,255,0)); 
pixels.setPixelColor(i, pixels.Color(0,255,0)); 
pixels.setPixelColor(n, pixels.Color(0,255,0)); 
pixels.setPixelColor(o, pixels.Color(0,255,0)); 
pixels.setPixelColor(p, pixels.Color(0,255,0)); 
pixels.setPixelColor(q, pixels.Color(0,255,0)); 
pixels.setPixelColor(r, pixels.Color(0,255,0)); 
pixels.setPixelColor(s, pixels.Color(0,255,0)); 
pixels.setPixelColor(t, pixels.Color(0,255,0)); 
pixels.setPixelColor(u, pixels.Color(0,255,0)); 
pixels.setPixelColor(v, pixels.Color(0,255,0)); 
pixels.setPixelColor(w, pixels.Color(0,255,0)); 
pixels.show();

delay (pause); 

//----------------------- 6 --------------------------------
// 5 aus
pixels.setPixelColor(d, pixels.Color(0,0,0)); 
pixels.setPixelColor(e, pixels.Color(0,0,0)); 
pixels.setPixelColor(f, pixels.Color(0,0,0)); 
pixels.setPixelColor(g, pixels.Color(0,0,0)); 
pixels.setPixelColor(h, pixels.Color(0,0,0)); 
pixels.setPixelColor(i, pixels.Color(0,0,0)); 
pixels.setPixelColor(n, pixels.Color(0,0,0)); 
pixels.setPixelColor(o, pixels.Color(0,0,0)); 
pixels.setPixelColor(p, pixels.Color(0,0,0)); 
pixels.setPixelColor(q, pixels.Color(0,0,0)); 
pixels.setPixelColor(r, pixels.Color(0,0,0)); 
pixels.setPixelColor(s, pixels.Color(0,0,0)); 
pixels.setPixelColor(t, pixels.Color(0,0,0)); 
pixels.setPixelColor(u, pixels.Color(0,0,0)); 
pixels.setPixelColor(v, pixels.Color(0,0,0)); 
pixels.setPixelColor(w, pixels.Color(0,0,0)); 
// 6 an
pixels.setPixelColor(d, pixels.Color(0,255,0)); 
pixels.setPixelColor(e, pixels.Color(0,255,0)); 
pixels.setPixelColor(f, pixels.Color(0,255,0)); 
pixels.setPixelColor(g, pixels.Color(0,255,0)); 
pixels.setPixelColor(h, pixels.Color(0,255,0)); 
pixels.setPixelColor(i, pixels.Color(0,255,0)); 
pixels.setPixelColor(j, pixels.Color(0,255,0)); 
pixels.setPixelColor(k, pixels.Color(0,255,0)); 
pixels.setPixelColor(l, pixels.Color(0,255,0)); 
pixels.setPixelColor(m, pixels.Color(0,255,0)); 
pixels.setPixelColor(n, pixels.Color(0,255,0)); 
pixels.setPixelColor(o, pixels.Color(0,255,0)); 
pixels.setPixelColor(p, pixels.Color(0,255,0)); 
pixels.setPixelColor(q, pixels.Color(0,255,0)); 
pixels.setPixelColor(r, pixels.Color(0,255,0)); 
pixels.setPixelColor(s, pixels.Color(0,255,0)); 
pixels.setPixelColor(t, pixels.Color(0,255,0)); 
pixels.setPixelColor(u, pixels.Color(0,255,0)); 
pixels.setPixelColor(v, pixels.Color(0,255,0)); 
pixels.setPixelColor(w, pixels.Color(0,255,0)); 
pixels.show();

delay (pause); 

// ------------------------- 7 -------------------------------
// 6 aus
pixels.setPixelColor(d, pixels.Color(0,0,0)); 
pixels.setPixelColor(e, pixels.Color(0,0,0)); 
pixels.setPixelColor(f, pixels.Color(0,0,0)); 
pixels.setPixelColor(g, pixels.Color(0,0,0)); 
pixels.setPixelColor(h, pixels.Color(0,0,0)); 
pixels.setPixelColor(i, pixels.Color(0,0,0)); 
pixels.setPixelColor(j, pixels.Color(0,0,0)); 
pixels.setPixelColor(k, pixels.Color(0,0,0)); 
pixels.setPixelColor(l, pixels.Color(0,0,0)); 
pixels.setPixelColor(m, pixels.Color(0,0,0)); 
pixels.setPixelColor(n, pixels.Color(0,0,0)); 
pixels.setPixelColor(o, pixels.Color(0,0,0)); 
pixels.setPixelColor(p, pixels.Color(0,0,0)); 
pixels.setPixelColor(q, pixels.Color(0,0,0)); 
pixels.setPixelColor(r, pixels.Color(0,0,0)); 
pixels.setPixelColor(s, pixels.Color(0,0,0)); 
pixels.setPixelColor(t, pixels.Color(0,0,0)); 
pixels.setPixelColor(u, pixels.Color(0,0,0)); 
pixels.setPixelColor(v, pixels.Color(0,0,0)); 
pixels.setPixelColor(w, pixels.Color(0,0,0)); 
// 7 an
pixels.setPixelColor(a, pixels.Color(0,255,0)); 
pixels.setPixelColor(b, pixels.Color(0,255,0)); 
pixels.setPixelColor(c, pixels.Color(0,255,0)); 
pixels.setPixelColor(d, pixels.Color(0,255,0)); 
pixels.setPixelColor(e, pixels.Color(0,255,0)); 
pixels.setPixelColor(f, pixels.Color(0,255,0)); 
pixels.setPixelColor(q, pixels.Color(0,255,0)); 
pixels.setPixelColor(r, pixels.Color(0,255,0)); 
pixels.setPixelColor(s, pixels.Color(0,255,0)); 
pixels.setPixelColor(t, pixels.Color(0,255,0)); 
pixels.show();

delay (pause); 

//--------------------------- 8 -----------------------------
// 7 aus
pixels.setPixelColor(a, pixels.Color(0,0,0)); 
pixels.setPixelColor(b, pixels.Color(0,0,0)); 
pixels.setPixelColor(c, pixels.Color(0,0,0)); 
pixels.setPixelColor(d, pixels.Color(0,0,0)); 
pixels.setPixelColor(e, pixels.Color(0,0,0)); 
pixels.setPixelColor(f, pixels.Color(0,0,0)); 
pixels.setPixelColor(q, pixels.Color(0,0,0)); 
pixels.setPixelColor(r, pixels.Color(0,0,0)); 
pixels.setPixelColor(s, pixels.Color(0,0,0)); 
pixels.setPixelColor(t, pixels.Color(0,0,0)); 
// 8 an
pixels.setPixelColor(a, pixels.Color(0,255,0)); 
pixels.setPixelColor(b, pixels.Color(0,255,0)); 
pixels.setPixelColor(c, pixels.Color(0,255,0)); 
pixels.setPixelColor(d, pixels.Color(0,255,0)); 
pixels.setPixelColor(e, pixels.Color(0,255,0)); 
pixels.setPixelColor(f, pixels.Color(0,255,0)); 
pixels.setPixelColor(g, pixels.Color(0,255,0)); 
pixels.setPixelColor(h, pixels.Color(0,255,0)); 
pixels.setPixelColor(i, pixels.Color(0,255,0)); 
pixels.setPixelColor(j, pixels.Color(0,255,0)); 
pixels.setPixelColor(k, pixels.Color(0,255,0)); 
pixels.setPixelColor(l, pixels.Color(0,255,0)); 
pixels.setPixelColor(m, pixels.Color(0,255,0)); 
pixels.setPixelColor(n, pixels.Color(0,255,0)); 
pixels.setPixelColor(o, pixels.Color(0,255,0)); 
pixels.setPixelColor(p, pixels.Color(0,255,0)); 
pixels.setPixelColor(q, pixels.Color(0,255,0)); 
pixels.setPixelColor(r, pixels.Color(0,255,0)); 
pixels.setPixelColor(s, pixels.Color(0,255,0)); 
pixels.setPixelColor(t, pixels.Color(0,255,0)); 
pixels.setPixelColor(u, pixels.Color(0,255,0)); 
pixels.setPixelColor(v, pixels.Color(0,255,0)); 
pixels.setPixelColor(w, pixels.Color(0,255,0)); 
pixels.show();

delay (pause); 

//---------------- 9 --------------------------------------------------
// 8 aus
pixels.setPixelColor(a, pixels.Color(0,0,0)); 
pixels.setPixelColor(b, pixels.Color(0,0,0)); 
pixels.setPixelColor(c, pixels.Color(0,0,0)); 
pixels.setPixelColor(d, pixels.Color(0,0,0)); 
pixels.setPixelColor(e, pixels.Color(0,0,0)); 
pixels.setPixelColor(f, pixels.Color(0,0,0)); 
pixels.setPixelColor(g, pixels.Color(0,0,0)); 
pixels.setPixelColor(h, pixels.Color(0,0,0)); 
pixels.setPixelColor(i, pixels.Color(0,0,0)); 
pixels.setPixelColor(j, pixels.Color(0,0,0)); 
pixels.setPixelColor(k, pixels.Color(0,0,0)); 
pixels.setPixelColor(l, pixels.Color(0,0,0)); 
pixels.setPixelColor(m, pixels.Color(0,0,0)); 
pixels.setPixelColor(n, pixels.Color(0,0,0)); 
pixels.setPixelColor(o, pixels.Color(0,0,0)); 
pixels.setPixelColor(p, pixels.Color(0,0,0)); 
pixels.setPixelColor(q, pixels.Color(0,0,0)); 
pixels.setPixelColor(r, pixels.Color(0,0,0)); 
pixels.setPixelColor(s, pixels.Color(0,0,0)); 
pixels.setPixelColor(t, pixels.Color(0,0,0)); 
pixels.setPixelColor(u, pixels.Color(0,0,0)); 
pixels.setPixelColor(v, pixels.Color(0,0,0)); 
pixels.setPixelColor(w, pixels.Color(0,0,0)); 
// 9 an
pixels.setPixelColor(a, pixels.Color(0,255,0)); 
pixels.setPixelColor(b, pixels.Color(0,255,0)); 
pixels.setPixelColor(c, pixels.Color(0,255,0)); 
pixels.setPixelColor(d, pixels.Color(0,255,0)); 
pixels.setPixelColor(e, pixels.Color(0,255,0)); 
pixels.setPixelColor(f, pixels.Color(0,255,0)); 
pixels.setPixelColor(g, pixels.Color(0,255,0)); 
pixels.setPixelColor(h, pixels.Color(0,255,0)); 
pixels.setPixelColor(i, pixels.Color(0,255,0));  
pixels.setPixelColor(n, pixels.Color(0,255,0)); 
pixels.setPixelColor(o, pixels.Color(0,255,0)); 
pixels.setPixelColor(p, pixels.Color(0,255,0)); 
pixels.setPixelColor(q, pixels.Color(0,255,0)); 
pixels.setPixelColor(r, pixels.Color(0,255,0)); 
pixels.setPixelColor(s, pixels.Color(0,255,0)); 
pixels.setPixelColor(t, pixels.Color(0,255,0)); 
pixels.setPixelColor(u, pixels.Color(0,255,0)); 
pixels.setPixelColor(v, pixels.Color(0,255,0)); 
pixels.setPixelColor(w, pixels.Color(0,255,0)); 
pixels.show();

delay (pause); 



}
