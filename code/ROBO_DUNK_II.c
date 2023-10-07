#pragma config(StandardModel, "RVW CLAWBOT")

void LECMove01() {
    while (SensorValue[leftEncoder] < 985) {
        motor[leftMotor] = 65;
        motor[rightMotor] = 65;
    }
}

void stopAllMotorsCustom() {
    motor[leftMotor] = 0;
    motor[rightMotor] = 0;
}

void StopMotorsAndWait() {
    stopAllMotorsCustom();
    wait1Msec(1000);
}

void ClearEncoderCounts() {
    SensorValue[leftEncoder] = 0;
    SensorValue[rightEncoder] = 0;
}

void RoboTurn1() {
    ClearEncoderCounts();
    StopMotorsAndWait();
    while (SensorValue[leftEncoder] < 543) {
        motor[leftMotor] = 65;
        motor[rightMotor] = 0;
    }
}

void RoboTurn2() {
    ClearEncoderCounts();
    StopMotorsAndWait();
    while (SensorValue[rightEncoder] < 543) {
        motor[leftMotor] = 0;
        motor[rightMotor] = 65;
    }
}

void RoboTurn3() {
    ClearEncoderCounts();
    StopMotorsAndWait();
    while (SensorValue[rightEncoder] < 40) {
        motor[leftMotor] = -65;
        motor[rightMotor] = 65;
    }
    ClearEncoderCounts();
    StopMotorsAndWait();
    while (SensorValue[rightEncoder] < 1100) {
        motor[leftMotor] = 65;
        motor[rightMotor] = 65;
    }
}

task main() {
    wait1Msec(2000);
    ClearEncoderCounts();
    LECMove01();
    StopMotorsAndWait();
    ClearEncoderCounts();

    motor[armMotor] = 23;
    wait1Msec(100);
    StopMotorsAndWait();

    motor[clawMotor] = 29;
    wait1Msec(1000);
    motor[armMotor] = 0;
    RoboTurn1();
    StopMotorsAndWait();
    motor[armMotor] = 0;
    RoboTurn2();
    StopMotorsAndWait();
    motor[armMotor] = 0;
    RoboTurn3();
    StopMotorsAndWait();

    motor[clawMotor] = -30;

    wait1Msec(1000);
}
