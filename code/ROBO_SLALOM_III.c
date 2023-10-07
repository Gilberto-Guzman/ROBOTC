#pragma config(StandardModel, "RVW SQUAREBOT")

task main() {
	int limite = 1000;

	while (1 == 1) {
		if (SensorValue(rightLineFollower) > limite) {
			motor(leftMotor) = 127;
			motor(rightMotor) = 0;
		}
		if (SensorValue(centerLineFollower) > limite) {
			motor(leftMotor) = 40;
			motor(rightMotor) = 40;
		}
		if (SensorValue(leftLineFollower) > limite) {
			motor(leftMotor) = 0;
			motor(rightMotor) = 127;
		}
	}
}
