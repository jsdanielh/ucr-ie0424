
void putuint(unsigned int i) {
	*(volatile unsigned int*)0x10000000 = i;
}

void main() {
	unsigned int number_to_display = 0;
	unsigned int counter = 0;
	const unsigned int limit = 1000000;

	while (1) {
		counter = 0;
		putuint(number_to_display++);
		while (counter < limit) {
			counter++;
		}
	}
}
