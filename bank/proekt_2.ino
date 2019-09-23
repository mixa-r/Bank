const int LED = 9; //Pin for the LED 
const int BUTTON = 10; //Input pin where the 
const int Swet = 8; //pushbutton is connected 
int endbutton = 2;
int valbutton = 0; //Val will be used to store the state 
int valswet = 0; //of the input pin 
int state = 0; 
const int LED1 = 13;


void setup() { 
pinMode(LED, OUTPUT); //tell aurduino LED is an output 
pinMode(LED1, OUTPUT);
pinMode(BUTTON, INPUT); //and BUTTON is an input 
pinMode(endbutton, INPUT);
pinMode(Swet, INPUT); 
} 

void loop(){ 
valbutton = digitalRead(BUTTON); //read input value and store it 
valswet = digitalRead(Swet); 

//check wether the input is HIGH (button pressed) 

if (digitalRead(endbutton) == HIGH && state==0 && valbutton==HIGH) //Если геркон на двери открыт и светит светодиод сигнализации и не перерезан провод сигнализации
{ digitalWrite(LED1, HIGH);                                        // Включается сигнализация, необходим перезапуск игры!!!
}

if (digitalRead (endbutton) == HIGH && valbutton==HIGH)            // Если геркон на двери открыт и не перерезан провод 
{digitalWrite(LED1, HIGH);}                                        // Включается сигнализация, необходим перезапуск игры!!!

if (valswet == LOW) 
{
state = 1; 
digitalWrite(LED, LOW);
} else {
state = 0; 
digitalWrite(LED, HIGH); 
}
}
