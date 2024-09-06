/* Tiga Saklar Tekan Push Button Untuk mengontrol mmasing-masing satu LED
*/

int inputPins[] = {2,4,6}; // buat array untuk 3 pin input
int ledPins[] = {10,11,12}; // buat array untuk pin output LED

void setup(){
	for(int index = 0; index < 3; index++)
	{
		pinMode(ledPins[index], OUTPUT); // set LED sebagai ouput
		pinMode(inputPins[index], INPUT); // set saklar tekan sbg input
		digitalWrite(inputPins[index], HIGH); // pull-up resistors
	}
}

void loop(){
	for(int index = 0; index < 3; index++)
	{
		int val = digitalRead(inputPins[index]); // baca nilai input
		if (val == HIGH) // cek jika saklar ditekan
		{
			digitalWrite(ledPins[index], HIGH); // LED ON jika saklar ditekan
		}
		else
		{
			digitalWrite(ledPins[index], LOW); // LED OFF
		}
	}
}
