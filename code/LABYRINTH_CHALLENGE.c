#pragma config(StandardModel, "RVW SQUAREBOT")

void controlarMotores(int velocidadDerecha, int velocidadIzquierda, float tiempo) {
	motor[rightMotor] = velocidadDerecha;
	motor[leftMotor] = velocidadIzquierda;
	wait(tiempo);
}

task main() {
	controlarMotores(127, 127, 2.4);
	controlarMotores(127, -127, 0.6);
	controlarMotores(127, 127, 2.9);
	controlarMotores(-127, 127, 0.6);
	controlarMotores(127, 127, 2);
	controlarMotores(-127, 127, 0.6);
	controlarMotores(127, 127, 2.4);
}
