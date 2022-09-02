/* Programmer: Per Stoor
 * Date: 2022-09-02
 * Last changed: 2022-09-02
 * Type of program: Happy Birthday wishes to Cait!
 * */

#include <stdio.h>

void happy_function();
void birthday_function();
void cait_function();

int main(int argc, char *argv[]){

	happy_function();
	birthday_function();
	cait_function();

return 0;
}

void happy_function(){
	printf("H   H       A       P P P   P P P   Y     Y\n");
	printf("H   H      A A      P    P  P    P   Y   Y \n");
	printf("H H H     A   A     P P P   P P P     Y Y  \n");
	printf("H   H    A A A A    P       P          Y   \n");
	printf("H   H   A       A   P       P          Y   \n");
	printf("H   H  A         A  P       P          Y   \n");
	printf("\n");
}

void birthday_function(){
	printf("B B B    I I I I  R R R   T T T T  H   H  D D D         A       Y     Y\n");
	printf("B    B     I I    R    R     T     H   H  D    D       A A       Y   Y \n");
	printf("B B B      I I    R R R      T     H H H  D     D     A   A       Y Y  \n");
	printf("B    B     I I    RR         T     H   H  D     D    A A A A       Y   \n");
	printf("B    B     I I    R  R       T     H   H  D    D    A       A      Y   \n");
	printf("B B B    I I I I  R    R     T     H   H  D D D    A         A     Y   \n");
	printf("\n");
}

void cait_function(){
	printf("  C C C         A       I I I I  T T T T\n");
	printf("C      C       A A        I I       T   \n");
	printf("C             A   A       I I       T   \n");
	printf("C            A A A A      I I       T   \n");
	printf("C      C    A       A     I I       T   \n");
	printf("  C C C    A         A  I I I I     T   \n");
	printf("\n");
}
