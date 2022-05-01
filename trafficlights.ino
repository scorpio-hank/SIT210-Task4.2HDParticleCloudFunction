int red = D5;
int green = D6;
int blue = D7;

int redFlag = 0;
int blueFlag = 0;
int greenFlag = 0;

void setup()
{

   pinMode(red, OUTPUT);
   pinMode(green, OUTPUT);
   pinMode(blue, OUTPUT);

  Particle.function("led",ledControl);

   digitalWrite(red, LOW);
   digitalWrite(green, LOW);
   digitalWrite(blue, LOW);
    
}

void loop()
{

}

int ledControl(String cmd) {
    
    if (cmd=="red") {
        if(redFlag == 0) {
            digitalWrite(red,HIGH);
            redFlag = 1;
        } else {
            digitalWrite(red,LOW);
            redFlag = 0;
        }
        return 1;
    }
    else if (cmd=="green") {
        if(greenFlag == 0) {
            digitalWrite(green,HIGH);
            greenFlag = 1;
        } else {
            digitalWrite(green,LOW);
            greenFlag = 0;
        }
        return 2;
    }
    else if (cmd=="blue") {
        if(blueFlag == 0) {
            digitalWrite(blue,HIGH);
            blueFlag = 1;
        } else {
            digitalWrite(blue,LOW);
            blueFlag = 0;
        }        
        return 3;
    }
    else {
        return 0;
    }
}

