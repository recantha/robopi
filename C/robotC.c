#include <stdio.h>
#include <wiringPi.h>

int m1a = 0;
int m1b = 1;
int m2a = 3;
int m2b = 4;

void forwards() {
	digitalWrite(m1a, HIGH);
	digitalWrite(m1b, LOW);
	digitalWrite(m2a, HIGH);
	digitalWrite(m2b, LOW);
}
void stop() {
	digitalWrite(m1a, LOW);
	digitalWrite(m1b, LOW);
	digitalWrite(m2a, LOW);
	digitalWrite(m2b, LOW);
}

void reverse() {
	digitalWrite(m1a, LOW);
	digitalWrite(m1b, HIGH);
	digitalWrite(m2a, LOW);
	digitalWrite(m2b, HIGH);
}

void left() {
	digitalWrite(m1a, LOW);
	digitalWrite(m1b, HIGH);
	digitalWrite(m2a, HIGH);
	digitalWrite(m2b, LOW);
}

void right() {
	digitalWrite(m1a, HIGH);
	digitalWrite(m1b, LOW);
	digitalWrite(m2a, LOW);
	digitalWrite(m2b, HIGH);
}


int main(void) {
	wiringPiSetup();
	pinMode(m1a, OUTPUT);
	pinMode(m1b, OUTPUT);
	pinMode(m2a, OUTPUT);
	pinMode(m2b, OUTPUT);

	for (;;) {
		printf("forwards");
		forwards();
		delay(500);

		printf("stop");
		stop();
		delay(500);

		printf("reverse");
		reverse();
		delay(500);

		printf("stop");
		stop();
		delay(500);

		printf("left");
		left();
		delay(500);

		printf("stop");
		stop();
		delay(500);

		printf("right");
		right();
		delay(500);

		printf("stop");
		stop();
		delay(500);
	}

	return 0;
}

