void putuint(unsigned int i) {
	*(volatile unsigned int*)0x10000000 = i;
}

void main() {
	unsigned int numero = 0;
	unsigned int contador = 0;
	const unsigned int limite = 1000000;

	while (1) {
		contador = 0;
		putuint(numero++);
		while (contador < limite) {
			contador++;
		}
	}
}
