/*
  Morse code
*/
int dot = 500; // You can change timing for dot. Dash and other timings are relative to this.
int dash = dot * 3;
int between_words = dot * 7;
int between_letters = dot * 3;
int between_symbols = dot; // dot and dashes

void dashfunc(){ 
  digitalWrite(LED_BUILTIN,HIGH);
  delay(dash);
  digitalWrite(LED_BUILTIN,LOW);
}
void dotfunc(){
  digitalWrite(LED_BUILTIN,HIGH);
  delay(dot);
  digitalWrite(LED_BUILTIN, LOW);
}
void morsecode(){
  char word[] = "sos test sos"; //write your text here!!!! Latin letters and/or numbers
  int elements = sizeof(word)/sizeof(word[0]);
  for(int i = 0; i < elements; i++){
    switch(word[i])
    {
      case 'a':
        dotfunc();
        delay(between_symbols);
        dashfunc();
        break;
     case 'b':
        dashfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        break;
     case 'c':
        dashfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dotfunc();
        break;
     case 'd':
        dashfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        break;
     case 'e':
        dotfunc();
        break;
     case 'f':
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dotfunc();
        break;
     case 'g':
        dashfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dotfunc();
        break;
     case 'h':
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        break;
     case 'i':
        dotfunc();
        delay(between_symbols);
        dotfunc();
        break;
     case 'j':
        dotfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dashfunc();
        break;
     case 'k':
        dashfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dashfunc();
        break;
     case 'l':
        dotfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        break;
     case 'm':
        dashfunc();
        delay(between_symbols);
        dashfunc();
        break;
     case 'n':
        dashfunc();
        delay(between_symbols);
        dotfunc();
        break;
     case 'p':
        dotfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dotfunc();
        break;
     case 'q':
         dashfunc();
         delay(between_symbols);
         dashfunc();
         delay(between_symbols);
         dotfunc();
         delay(between_symbols);
         dashfunc();
         break;
     case 'r':
         dotfunc();
         delay(between_symbols);
         dashfunc();
         delay(between_symbols);
         dotfunc();
         break;
     case 's':
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        break;
     case 't':
        dashfunc();
        break;
     case 'o':
        dashfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dashfunc();
        break;
     case 'u':
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dashfunc();
        break;
     case 'v':
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dashfunc();
        break;
     case 'w':
        dotfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dashfunc();
        break;
     case 'x':
        dashfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dashfunc();
        break;
     case 'y':
        dashfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dashfunc();
        break;
     case 'z':
        dashfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        break;
     case '1':
        dotfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dashfunc();
        break;
     case '2':
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dashfunc();
        break;
     case '3':
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dashfunc();
        break;
     case '4':
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dashfunc();
        break;
     case '5':
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        break;
     case '6':
        dashfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        break;
     case '7':
        dashfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        break;
     case '8':
        dashfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dotfunc();
        delay(between_symbols);
        dotfunc();
        break;
     case '9':
        dashfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dotfunc();
        break;
     case '0':
        dashfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dashfunc();
        delay(between_symbols);
        dashfunc();
        break;
     case ' ':
        delay(between_words);   
     default:
        delay(between_words);
        break;
    }
    delay(between_letters);
  }
  
}
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  
  morsecode();
}
