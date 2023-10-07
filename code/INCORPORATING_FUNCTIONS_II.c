#pragma config(StandardModel, "RVW SQUAREBOT")
void Adelante() {
	motor[rightMotor] = 127;
	motor[leftMotor] = 127;
}
void Derecha() {
	motor[rightMotor] = -127;
	motor[leftMotor] = 127;
}
void Izquierda() {
	motor[rightMotor] = 127;
	motor[leftMotor] = -127;
}
task main() {
	Adelante();
	wait(4.1);
	Izquierda();
	wait(.6);
	Adelante();
	wait(1.5);
	Izquierda();
	wait(.65);
	Adelante();
	wait(5);
	Derecha();
	wait(.6);
	Adelante();
	wait(2);
	Derecha();
	wait(.65);
	Adelante();
	wait(6.2);
	Derecha();wait(.65);
	Adelante();
	wait(3.2);
	Izquierda();
	wait(.65);
	Adelante();
	wait(2);
	Izquierda();
	wait(.65);
	Adelante();
	wait(3);
}
