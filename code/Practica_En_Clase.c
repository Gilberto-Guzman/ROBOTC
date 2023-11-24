#pragma config(StandardModel, "RVW CLAWBOT")

void controlarMotores(int velocidadDerecha, int velocidadIzquierda, float tiempo) {
    motor[rightMotor] = velocidadDerecha;
    motor[leftMotor] = velocidadIzquierda;
    wait(tiempo);
}

task main() {
    controlarMotores(127, 127, 0.7);
    controlarMotores(127, -127, 0.4);
    controlarMotores(127, 127, 0.7);
    controlarMotores(-127, 127, 0.4);
    controlarMotores(127, 127, 0.9);
    controlarMotores(-127, 127, 0.4);
    controlarMotores(127, 127, 0.7);
    controlarMotores(127, -127, 0.4);
    controlarMotores(127, 127, 1.1);
    controlarMotores(127, -127, 0.5);
    controlarMotores(127, 127, 1.1);
    controlarMotores(127, -127, 0.5);
    controlarMotores(0, 0, 0);
}
