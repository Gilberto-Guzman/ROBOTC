#pragma config(StandardModel, "RVW SQUAREBOT")

void controlarMotores(int velocidad, int tiempo) {
    motor[rightMotor] = velocidad;
    motor[leftMotor] = velocidad;
    wait1Msec(tiempo);
}

task main() {
    controlarMotores(127, 2000);
    controlarMotores(-127, 2000);
    controlarMotores(127, 4000);
    controlarMotores(-127, 4000);
    controlarMotores(127, 6000);
    controlarMotores(-127, 6000);
}
