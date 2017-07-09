#include "ft_printf.h"
int main()
{
  unsigned long num = 184467440767890;
  long value = 2147483;
  short s_val = 32000;
  intmax_t r = 182839128198310;
  int d = 23;
  int n = -4242;


  printf("Integers numbers tests:\n\n");

  ft_printf("-->%07d<--\n",-4242);
  printf("-->%07d<--\n",-4242);
  ft_printf("-->%07d<--\n",4242);
  printf("-->%07d<--\n",4242);

  ft_printf("1.-->%025ld<--\n",num);
    printf("1.-->%025ld<--\n",num);
  ft_printf("2.-->%0.8ld<--\n", value);
    printf("2.-->%0.8ld<--\n", value);
  ft_printf("3.-->%0hd<--\n", s_val);
    printf("3.-->%0hd<--\n", s_val);
  ft_printf("4.-->%02jd<--\n", r);
    printf("4.-->%02jd<--\n", r);
  ft_printf("5.-->%+4ld<--\n", value);
    printf("5.-->%+4ld<--\n", value);
  ft_printf("6.-->% hd<--\n", s_val);
    printf("6.-->% hd<--\n", s_val);
  ft_printf("-->%ld<--\n", 2147483648);
   printf("-->%ld<--\n", 2147483648);
  ft_printf("-->%5d<--\n", -42);
   printf("-->%5d<--\n", -42);
  ft_printf("-->%-5d<--\n", 42);
   printf("-->%-5d<--\n", 42);
  ft_printf("-->%-5d<--\n", 42);
   printf("-->%-5d<--\n", 42);
  ft_printf("-->%-5d<--\n", -42);
   printf("-->%-5d<--\n", -42);
  ft_printf("-->%-5d<--\n", -42);
   printf("-->%-5d<--\n", -42);
  ft_printf("-->%-10.5d<--\n", 4242);
   printf("-->%-10.5d<--\n", 4242);
  ft_printf("-->% 10.5d<--\n", 4242);
   printf("-->% 10.5d<--\n", 4242);
  ft_printf("-->%-+10.5d<--\n", 4242);
   printf("-->%-+10.5d<--\n", 4242);
  ft_printf("%.4d\n", -424242);
   printf("%.4d\n", -424242);
  ft_printf("%15.4d\n", -424242);
   printf("%15.4d\n", -424242);
  ft_printf("-->% -3.5d<--\n", -6);
   printf("-->% -3.5d<--\n", -6);
  ft_printf("-->%d<--\n", 2147483647);
    printf("-->%d<--\n", 2147483647);
  ft_printf("1.-->%09d<--\n", d);
   printf("1.-->%09d<--\n", d);
  ft_printf("2.-->%0.9d<--\n", d);
   printf("2.-->%0.9d<--\n", d);
  ft_printf("3.-->%+0.4d<--\n", d);
   printf("3.-->%+0.4d<--\n", d);
  ft_printf("4.-->%4d<--\n", -4242);
   printf("4.-->%4d<--\n", -4242);
  ft_printf("5.-->% 4.5d<--\n", n);
   printf("5.-->% 4.5d<--\n", n);
  ft_printf("6.-->%+4d<--\n", n);
   printf("6.-->%+4d<--\n", n);
  ft_printf("7.-->%d<--\n", -424);
   printf("7.-->%d<--\n", -424);
  ft_printf("-->%+3d<--\n", -42433);
   printf("-->%+3d<--\n", -42433);
  ft_printf("-->%+7d<--\n", -4242);
   printf("-->%+7d<--\n", -4242);

  ft_printf("-->% 10.5d<--\n", 4242);
   printf("-->% 10.5d<--\n", 4242);

  ft_printf("-->%5d<--\n", -42);
   printf("-->%5d<--\n", -42);

  ft_printf("-->%-7d<--<--\n", 34);
   printf("-->%-7d<--<--\n", 34);

  ft_printf("-->%-.6d<--\n", 3);
   printf("-->%-.6d<--\n", 3);

  ft_printf("-->% -10d<--\n", -23);
   printf("-->% -10d<--\n", -23);

  ft_printf("-->%04.2d<--\n", 1);
   printf("-->%04.2d<--\n", 1);

  ft_printf("-->%03.2d<--\n", 0);
   printf("-->%03.2d<--\n", 0);

  ft_printf("-->%-d<--\n", 0);
    printf("-->%-d<--\n", 0);

  ft_printf("-->%+7d<--\n", 0);
    printf("-->%+7d<--\n", 0);

  ft_printf("-->% -10d<--\n", -23);
    printf("-->% -10d<--\n", -23);

  ft_printf("-->%-6d<--\n", -23);
    printf("-->%-6d<--\n", -23);

  ft_printf("-->%+d<--\n", 42);
    printf("-->%+d<--\n", 42);

  ft_printf("-->%+d<--\n", 42);
    printf("-->%+d<--\n", 42);

  ft_printf("-->%+d<--\n", 42);
    printf("-->%+d<--\n", 42);

  ft_printf("-->%+d<--\n", 42);
    printf("-->%+d<--\n", 42);

  ft_printf("-->%-5d<--\n", 42);
    printf("-->%-5d<--\n", 42);

  ft_printf("-->%-5d<--\n", 42);
    printf("-->%-5d<--\n", 42);

  ft_printf("-->%-5d<--\n", -42);
    printf("-->%-5d<--\n", -42);

  ft_printf("-->%-5d<--\n", -42);
    printf("-->%-5d<--\n", -42);

  ft_printf("-->%-10.5d<--\n", 4242);
    printf("-->%-10.5d<--\n", 4242);


  ft_printf("-->%d<--\n", 0);
    printf("-->%d<--\n",0);

  sleep(20);
  printf("-----------------------------------<--\n");

	// printf("Unsigned Integers:<--\n<--\n");
  //
	// ft_printf("0.-->%u<--\n", 66567898798);
	// printf("0.-->%u<--\n", 66567898798);
  //
	// ft_printf("1.-->%020lu<--\n",num);
	// printf("1.-->%020lu<--\n",num);
  //
	// ft_printf("2.-->%010lu<--\n", value);
	// printf("2.-->%010lu<--\n", value);
  //
	// ft_printf("3.-->%03.6hu<--\n", s_val);
	// printf("3.-->%03.6hu<--\n", s_val);
  //
	// ft_printf("4.-->%02lu<--\n", num);
	// printf("4.-->%02lu<--\n", num);
  //
	// ft_printf("5.-->%0.4lu<--\n", value);
	// printf("5.-->%0.4lu<--\n", value);
  //
	// ft_printf("6.-->%.8hu<--\n", s_val);
	// printf("6.-->%.8hu<--\n", s_val);
  //
	// ft_printf("7.-->%04ju<--\n", 767676);
	// printf("7.-->%04ju<--\n", 767676);
  //
	// ft_printf("7.-->%zu<--\n", 767676);
	// printf("7.-->%zu<--\n", 767676);
  //
	// printf("---------------------------------------<--\n");
	printf("hex numbers<--\n<--\n");



	ft_printf("1.-->%10x<--\n", 42);
	printf("1.-->%10x<--\n", 42);

	ft_printf("2.-->%10x<--\n", 56);
	printf("2.-->%10x<--\n", 56);

	ft_printf("3.-->%jx<--\n", -4294967296);
	printf("3.-->%jx<--\n", -4294967296);

	ft_printf("4.-->%jx<--\n", -4294967297);
	printf("4.-->%jx<--\n", -4294967297);

	ft_printf("5.-->%15x<--\n", 542);
	printf("5.-->%15x<--\n", 542);

	ft_printf("6.-->%#x<--\n", 0);
	printf("6.-->%#x<--\n", 0);

	ft_printf("7.-->%#08x<--\n", 42);
	printf("7.-->%#08x<--\n", 42);

	ft_printf("8.-->%#8x<--\n", 42);
	printf("8.-->%#8x<--\n", 42);

	ft_printf("@moulitest: -->%#.x -->%#.0x<--\n", 0, 0);
	printf("@moulitest: -->%#.x -->%#.0x<--\n", 0, 0);

	ft_printf("9.-->%05d<--\n", -42);
	printf("9.-->%05d<--\n", -42);

	ft_printf("10.-->%10.5d<--\n", 4242);
	printf("10.-->%10.5d<--\n", 4242);

	ft_printf("11.-->%+10.5d<--\n", 4242);
	printf("11.-->%+10.5d<--\n", 4242);

	ft_printf("12.-->%x<--\n", -4565);
	printf("12.-->%x<--\n", -4565);

	ft_printf("13.-->%10x<--\n", -567898);
	printf("13.-->%10x<--\n", -567898);

	ft_printf("-->%010x<--\n", 542);
	printf("-->%010x<--\n", 542);




	printf("---------------------------------------<--\n");
	printf("octal numbers<--\n<--\n");
	int octal = 7;



	ft_printf("3.-->%#.10o<--\n", octal);
	printf("3.-->%#.10o<--\n", octal);

	ft_printf("4.-->%#8o<--\n", octal);
	printf("4.-->%#8o<--\n", octal);

	ft_printf("5.-->%08o<--\n", octal);
	printf("5.-->%08o<--\n", octal);

	ft_printf("6.-->%#o<--\n", octal);
	printf("6.-->%#o<--\n", octal);

	ft_printf("7.-->%07o<--\n", 4779);
	printf("7.-->%07o<--\n", 4779);

	ft_printf("8.-->%0.7o<--\n", 4779);
	printf("8.-->%.7o<--\n", 4779);

	ft_printf("9.-->%#2o<--\n", 4779);
	printf("9.-->%#2o<--\n", 4779);


	ft_printf("10.-->%07X<--\n", 4779);
	printf("10.-->%07X<--\n", 4779);


	ft_printf("11.-->%7x<--\n", 4779);
	printf("11.-->%7x<--\n", 4779);

	printf("NEW TESTS 6 april:<--\n");



	ft_printf("-->%-#7.5x<--\n", 23);
	printf("-->%-#7.5x<--\n", 23);


	ft_printf("-->% -4.6d<--\n", -42);
	printf("-->% -4.6d<--\n", -42);


	ft_printf("-->%.6o<--\n", 42);
	printf("-->%.6o<--\n", 42);


	ft_printf("-->% -3.5d<--\n", -6);
	printf("-->% -3.5d<--\n", -6);

	printf("---------------------------------------<--\n");


	ft_printf("-->%-10x<--\n", 42);
	printf("-->%-10x<--\n", 42);

	ft_printf("-->%jx<--\n", -4294967296);
	printf("-->%jx<--\n", -4294967296);

	ft_printf("-->%-15x<--\n", 542);
	printf("-->%-15x<--\n", 542);

	ft_printf("-->%#-08x<--\n", 42);
	printf("-->%#-8x<--\n", 42);

	ft_printf("-->%-5o<--\n", 2500);
	printf("-->%-5o<--\n", 2500);

	ft_printf("-->%-#6o<--\n", 2500);
	printf("-->%-#6o<--\n", 2500);

	ft_printf("-->%-5o<--\n", 2500);
	printf("-->%-5o<--\n", 2500);

	ft_printf("-->%-10.5o<--\n", 2500);
	printf("-->%-10.5o<--\n", 2500);

	printf("--------------------------------\n");


	ft_printf("-->%-6x<--\n",23);
	printf("-->%-6x<--\n",23);

	ft_printf("-->%-#7.5x<--\n", 23);
	printf("-->%-#7.5x<--\n", 23);

	ft_printf("-->% -4.6d<--\n", -42);
	printf("-->% -4.6d<--\n", -42);

	ft_printf("-->%-.6o<--\n", 42);
	printf("-->%-.6o<--\n", 42);



	 ft_printf("-->%#08x<--\n", 42);
	 printf("-->%#08x<--\n", 42);

	 ft_printf("-->%#-8x<--\n", 42);
	 printf("-->%#-8x<--\n", 42);

	 ft_printf("-->%-5o<--\n", 2500);
	 printf("-->%-5o<--\n", 2500);

	 ft_printf("-->%-#6o<--\n", 2500);
	 printf("-->%-#6o<--\n", 2500);

	 ft_printf("-->%05o<--\n", 2500);
	 printf("-->%05o<--\n", 2500);

	 ft_printf("-->%-10.5o<--\n", 2500);
	 printf("-->%-10.5o<--\n", 2500);



	 char *s = "hello";


	 ft_printf("%s\n", s);
	 printf("%s\n", s);



	 ft_printf("-->%5%<--\n");
	 printf("-->%5%<--\n");

	 ft_printf("-->%-5%<--\n");
	 printf("-->%-5%<--\n");

	 ft_printf("-->%-10s<-- is a string\n", "this");
	 printf("-->%-10s<-- is a string\n", "this");

	 ft_printf("-->%-5.2s<-- is a string\n", "this");
	 printf("-->%-5.2s<-- is a string\n", "this");

	 ft_printf("-->%2c<--\n", '\0');
	 printf("-->%2c<--\n", '\0');

	 ft_printf("-->%c<--\n", 42);
	 printf("-->%c<--\n", 42);

	 ft_printf("-->%5c<--\n", 42);
	 printf("-->%5c<--\n", 42);

	 ft_printf("-->%-5c<--\n", 42);
	 printf("-->%-5c<--\n", 42);

	 ft_printf("-->%2c<--\n", 0);
	 printf("-->%2c<--\n", 0);

	 ft_printf("null -->%c<-- and text\n", 0);
	 printf("null -->%c<-- and text\n", 0);

	 ft_printf("-->%c<--\n", 0);
	 printf("-->%c<--\n", 0);

	 ft_printf("-->%s<--\n", "4294967296");
	 printf("-->%s<--\n", "4294967296");

	 ft_printf("-->%s<--\n", "4294967296");
	 printf("-->%s<--\n", "4294967296");
  //
  //
  //
	//  ft_printf("The minimum value of INT = %d\n", INT_MIN);
	//  printf("The minimum value of INT = %d\n", INT_MIN);
 // 	 ft_printf("The maximum value of INT = %d\n", INT_MAX);
 // 	 printf("The maximum value of INT = %d\n", INT_MAX);
  //
	//  ft_printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
	//  printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
 // 	 ft_printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
 // 	 printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
  //
 // 	 ft_printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);
 // 	 printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);
 // 	 ft_printf("The maximum value of UNSIGNED SHORT = %d\n", USHRT_MAX); // fail
 // 	 printf("The maximum value of UNSIGNED SHORT = %d\n", USHRT_MAX);
  //
  //  ft_printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
  //  printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
  //  ft_printf("The maximum value of SHORT INT = %d\n", SHRT_MAX);
  //  printf("The maximum value of SHORT INT = %d\n", SHRT_MAX);
  //
 // 	ft_printf("The minimum value of INT = %d\n", INT_MIN);
 // 	printf("The minimum value of INT = %d\n", INT_MIN);
 // 	ft_printf("The maximum value of INT = %d\n", INT_MAX);
 // 	printf("The maximum value of INT = %d\n", INT_MAX);
  //
 // 	ft_printf("The maximum value of UINT = %u\n", UINT_MAX);
 // 	printf("The maximum value of UINT = %u\n", UINT_MAX);
  //
  //
 // 	ft_printf("The minimum value of CHAR = %d\n", CHAR_MIN);
 // 	printf("The minimum value of CHAR = %d\n", CHAR_MIN);
 // 	ft_printf("The maximum value of CHAR = %d\n", CHAR_MAX);
 // 	printf("The maximum value of CHAR = %d\n", CHAR_MAX);
  //
 // 	ft_printf("The minimum value of LONG = %ld\n", LONG_MIN);
 // 	printf("The minimum value of LONG = %ld\n", LONG_MIN);
 // 	ft_printf("The maximum value of LONG = %ld\n", LONG_MAX); //fail
 // 	printf("The maximum value of LONG = %ld\n", LONG_MAX);
  //
 // 	ft_printf("The minimum value of LLONG = %lld\n", LLONG_MIN); //fail
 // 	printf("The minimum value of LLONG = %lld\n", LLONG_MIN);
 // 	ft_printf("The maximum value of LLONG = %lld\n", LLONG_MAX);
 // 	printf("The maximum value of LLONG = %lld\n", LLONG_MAX);
  //
	// ft_printf("The maximum value of ULONG = %lu\n", ULONG_MAX); //fail
 // 	printf("The maximum value of ULONG = %lu\n", ULONG_MAX);
 // 	ft_printf("The maximum value of ULLONG = %llu\n", ULLONG_MAX);
 // 	printf("The maximum value of ULLONG = %llu\n", ULLONG_MAX);
  //
  //
	// ft_printf ("%0\n", LONG_MAX);
	// printf ("%0\n", LONG_MAX);
	// ft_printf("%hU\n", 4294967296);
	// printf("%hU\n", 4294967296);
	// ft_printf("%U\n", ULONG_MAX / 2);
	// printf("%U\n", ULONG_MAX / 2);
	// ft_printf("%hhD, %hhD\n", 0, USHRT_MAX);
	// printf("%hhD, %hhD\n", 0, USHRT_MAX);
	// ft_printf("-->%+c<--\n", 0);
	// printf("-->%+c<--\n", 0);
	// ft_printf("%ho, %ho\n", 0, USHRT_MAX);
	// printf("%ho, %ho\n", 0, USHRT_MAX);
	// ft_printf("-->%9.2p<--\n", 1234);
	// printf("-->%9.2p<--\n", 1234);
	// ft_printf("%o, %ho, %hho\n", -42, -42, -42);
	// printf("%o, %ho, %hho\n", -42, -42, -42);
	// ft_printf("%zd\n", LLONG_MAX);
	// printf("%zd\n", LLONG_MAX);
	// ft_printf("%zi\n", LLONG_MIN);
	// printf("%zi\n", LLONG_MIN);
	// ft_printf("%D\n", LONG_MAX);
	// printf("%D\n", LONG_MAX);
  //
	// 	ft_printf("%S\n", L"米");
	// 	printf("%S\n", L"米");
  //
	// 	ft_printf("%S\n", L"我是一只猫。");
	// 	printf("%S\n", L"我是一只猫。");
  //
	// 	ft_printf("%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S\n",
	// 	L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
	// 	L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L"");
	// 	printf("%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S\n",
	// 	L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
	// 	L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L"");
  //
	// 	ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \
	// 	%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	// 	%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
	// 	' ', '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-',
	// 	'.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';',
	// 	'<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
	// 	'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
	// 	'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e',
	// 	'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
	// 	't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}');
  //
	// 	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \
	// 	%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
	// 	%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
	// 	' ', '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-',
	// 	'.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';',
	// 	'<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
	// 	'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
	// 	'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e',
	// 	'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
	// 	't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}');
  //
	// 	ft_printf("a%Sb%sc%S\n", L"我", "42", L"猫");
	// 	printf("a%Sb%sc%S\n", L"我", "42", L"猫");
	// 	ft_printf("{%S}\n", NULL);
	// 	printf("{%S}\n", NULL);
	// 	ft_printf("{%-30S}\n", L"我是一只猫。");
	// 	printf("{%-30S}\n", L"我是一只猫。");
	// 	ft_printf("{%30S}\n", L"我是一只猫。");
	// 	printf("{%30S}\n", L"我是一只猫。");
	// 	ft_printf("{%10R}\n");
	// 	printf("{%10R}\n");
	// 	ft_printf("%hhX, %hhX\n", 0, UCHAR_MAX);
	// 	printf("%hhX, %hhX\n", 0, UCHAR_MAX);
	// 	ft_printf("{%-15Z}\n", 123);
	// 	printf("{%-15Z}\n", 123);
	// 	ft_printf("%c\n", 'c');
	// 	printf("%c\n", 'c');
	// 	ft_printf("%c%c\n", '4', '2');
	// 	printf("%c%c\n", '4', '2');
	// 	ft_printf("%lc, %lc\n", L'ÊM-^ZM-^V', L'ÿ≠');
	// 	printf("%lc, %lc\n", L'ÊM-^ZM-^V', L'ÿ≠');
	// 	ft_printf("%s %C %d %p %x %% %S\n", "bonjour ", L'該', 42, &free, 42, L"لحم خنزير");
	// 	printf("%s %C %d %p %x %% %S\n", "bonjour ", L'該', 42, &free, 42, L"لحم خنزير");
	// 	char c;
	// 	ft_printf("%s%d%p%%%S%D%i%o%O%u%U%x%X%c%C","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
	// 	printf("%s%d%p%%%S%D%i%o%O%u%U%x%X%c%C","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
  //
  //
	// 	ft_printf("%hhd\n", CHAR_MAX + 42);
	// 	printf("%hhd\n", CHAR_MAX + 42);
	// 	ft_printf("%hx, %hx\n", 0, USHRT_MAX);
	// 	printf("%hx, %hx\n", 0, USHRT_MAX);
	// 	ft_printf("%hhi%hhi\n", 0, 42);
	// 	printf("%hhi%hhi\n", 0, 42);
	// 	ft_printf("{%s}\n", 0);
	// 	printf("{%s}\n", 0);
	// 	ft_printf("{%3c}\n", 0);
	// 	printf("{%3c}\n", 0);
	// 	ft_printf("%c\n", 0);
	// 	printf("%c\n", 0);
	// 	ft_printf("%+c\n", 0);
	// 	printf("%+c\n", 0);
	// 	ft_printf("%+C\n", 0);
	// 	printf("%+C\n", 0);
	// 	ft_printf("%C\n", 'c');
	// 	printf("%C\n", 'c');
	// 	ft_printf("%C\n", L'δ');
	// 	printf("%C\n", L'δ');
	// 	ft_printf("[%+s]\n", 0);
	// 	printf("%C\n", L'猫');
	// 	ft_printf("%C\n", L'猫');
	// 	printf("[%+s]\n", 0);
	// 	ft_printf("{%05.c}\n", 0);
	// 	printf("{%05.c}\n", 0);
	// 	ft_printf("{%05.s}\n", 0);
	// 	printf("{%05.s}\n", 0);
  //
	// 	ft_printf("%#O\n", 1);
	// 	printf("%#O\n", 1);
	// 	ft_printf("%#c\n", 0);
	// 	printf("%#c\n", 0);
	// 	ft_printf("%c\n", 200);
	// 	printf("%c\n", 200);
  //
	// 	ft_printf("{%05p}\n", 0);
	// 	printf("{%05p}\n", 0);
	// 	ft_printf("{%05s}\n", "abc");
	// 	printf("{%05s}\n", "abc");
	// 	ft_printf("{%03c}\n", 0);
	// 	printf("{%03c}\n", 0);
	// 	ft_printf("%zi\n",-9223372036854775808);
	// 	printf("%zi\n",-9223372036854775808);
	// 	ft_printf("%\n");
	// 	printf("%\n");
	// 	ft_printf("% Zoooo\n");
	// 	printf("% Zoooo\n");
  //
	// 	ft_printf("%hhx, %hhx\n", 0, UCHAR_MAX);
	// 	printf("%hhx, %hhx\n", 0, UCHAR_MAX);
  //
	// 	ft_printf("{%030S}\n", L"我是一只猫。");
	// 	printf("{%030S}\n", L"我是一只猫。");
  //
	// 	ft_printf("{%10R}\n");
	// 	printf("{%10R}\n");
	// 	printf("%d\n", ft_printf("%"));
	// 	printf("%d\n", printf("%"));
	// 	ft_printf("%lc, %lc\n", L'ÊM-^ZM-^V', L'ÿ≠');
	// 	printf("%lc, %lc\n", L'ÊM-^ZM-^V', L'ÿ≠');
  //
  //
  //   //ASTERIX TESTS:
  //
	// 	ft_printf("1.-->%#.*d<--\n",4, 42);
	// 	printf("1.-->%#.*d<--\n\n",4, 42);
  //
	// 	ft_printf("2.-->%*.6d<--\n",5, 42);
	// 	printf("2.-->%*.6d<--\n\n",5, 42);
  //
	// 	ft_printf("3.-->% *.d<--\n",7, 42);
	// 	printf("3.-->% *.d<--\n\n",7, 42);
  //
	// 	ft_printf("4.-->%#*.d<--\n",4, -42);
	// 	printf("4.-->%#*.d<--\n\n",4, -42);
  //
	// 	ft_printf("5.-->% *.6d<--\n",5, -42);
	// 	printf("5.-->% *.6d<--\n\n",5, -42);
  //
	// 	ft_printf("6.-->%0*d<--\n",7, 42);
	// 	printf("6.-->%0*d<--\n\n",7, 42);
  //
	// 	ft_printf("6.-->%07d<--\n", 42);
	// 	printf("6.-->%07d<--\n\n", 42);
  //
	// 	ft_printf("7.-->% 0.*d<--\n",7, 42);
	// 	printf("7.-->% 0.*d<--\n\n",7, 42);
  //
	// 	ft_printf("8.-->%+0*.d<--\n",7, -42);
	// 	printf("8.-->%+0*.d<--\n\n",7, -42);
  //
	// 	ft_printf("9.-->%-*.d<--\n",4, 42);
	// 	printf("9.-->%-*.d<--\n\n",4, 42);
  //
	// 	ft_printf("10.-->%-*d<--\n",5, 42);
	// 	printf("10.-->%-*d<--\n\n",5, 42);
  //
	// 	ft_printf("11.-->%+*.d<--\n",7, 42);
	// 	printf("11.-->%+*.d<--\n\n",7, 42);
  //
	// 	ft_printf("12.-->%-*.d<--\n",0, -42);
	// 	printf("12.-->%-*.d<--\n\n",0, -42);
  //
	// 	ft_printf("13.-->% *.6d<--\n",5, -42);
	// 	printf("13.-->% *.6d<--\n\n",5, -42);
  //
	// 	// ft_printf("14.-->% -0.*d<--\n",7, 42);
	// 	// printf("14.-->% -0.*d<--\n\n",7, 42);
  //
	// 	ft_printf("15.-->%0*.d<--\n",7, 42);
	// 	printf("15.-->%0*.d<--\n\n",7, 42);
  //
	// 	ft_printf("16.-->% 0*.d<--\n",7, 0);
	// 	printf("16.-->% 0*.d<--\n\n",7, 0);
  //
	// 	//FLOAT TESTS
  //
	// 		ft_printf("1.-->%0f<--\n", -6.5);
	// 		printf("1.-->%0f<--\n\n", -6.5);
  //
	// 		ft_printf("2.-->%f<--\n", 5.6543453);
	// 		printf("2.-->%f<--\n\n", 5.6543453);
  //
	// 		ft_printf("3.-->%.f<--\n", 6.56);
	// 		printf("3.-->%.f<--\n\n", 6.56);
  //
	// 		ft_printf("1.-->%6f<--\n", -6.5);
	// 		printf("1.-->%6f<--\n\n", -6.5);
  //
	// 		ft_printf("2.-->% f<--\n", 5.6543453);
	// 		printf("2.-->% f<--\n\n", 5.6543453);
  //
	// 		ft_printf("3.-->%.6f<--\n", 6.56);
	// 		printf("3.-->%.6f<--\n\n", 6.56);
  //
	// 		ft_printf("4.-->% 5f<--\n", -6.34567);
	// 		printf("4.-->% 5f<--\n\n", -6.34567);
  //
	// 		ft_printf("5.-->%+4.3f<--\n", 6.5);
	// 		printf("5.-->%+4.3f<--\n\n", 6.5);
  //
	// 		ft_printf("6.-->%0*f<--\n",10, 5.6543453);
	// 		printf("6.-->%0*f<--\n\n",10, 5.6543453);
  //
	// 		ft_printf("7.-->%6.4f<--\n", 6.56);
	// 		printf("7.-->%6.4f<--\n\n", 6.56);
  //
	// 		ft_printf("8.-->%*.7f<--\n",10, 6.34567);
	// 		printf("8.-->%*.7f<--\n\n",10, 6.34567);
  //
	// 		ft_printf("9.-->%0.1f<--\n", 5.6543453);
	// 		printf("9.-->%0.1f<--\n\n", 5.6543453);
  //
	// 		ft_printf("10.-->%+.4f<--\n", 6.78);
	// 		printf("10.-->%+.4f<--\n\n", 6.78);
  //
	// 		ft_printf("11.-->%+5.7f<--\n", -6.34567);
	// 		printf("11.-->%+5.7f<--\n\n", -6.34567);
  //
	// 		ft_printf("11.-->%+7.2f<--\n", -6.3456);
	// 		printf("11.-->%+7.2f<--\n\n", -6.3456);
  //
  //
	// 		ft_printf("%f\n", -42.0);
	// 		printf("%f\n\n", -42.0);
  //
	// 		ft_printf("%f\n", -42.42);
	// 		printf("%f\n\n", -42.42);
  //
	// 		ft_printf("%6f\n", -42.42);
	// 		printf("%6f\n\n", -42.42);
  //
	// 		ft_printf("7.-->%6.4f<--\n", -6.56);
	// 		printf("7.-->%6.4f<--\n\n", -6.56);
  //
	// 		ft_printf("8.-->%f<--\n", -6.34567);
	// 		printf("8.-->%f<--\n\n", -6.34567);
  //
  //
	// 		ft_printf("{%f}{%F}\n", 1.42, 1.42);
	// 		printf("{%f}{%F}\n\n", 1.42, 1.42);
  //
	// 		ft_printf("{%f}{%F}\n", -1.42, -1.42);
	// 		printf("{%f}{%F}\n\n", -1.42, -1.42);
  //
	// 		ft_printf("{%f}{%F}\n", 1444565444646.6465424242242, 1444565444646.6465424242242);
	// 		printf("{%f}{%F}\n\n", 1444565444646.6465424242242, 1444565444646.6465424242242);
  //
	// 		ft_printf("{%f}{%F}\n", -1444565444646.6465424242242454654, -1444565444646.6465424242242454654);
	// 		printf("{%f}{%F}\n\n", -1444565444646.6465424242242454654, -1444565444646.6465424242242454654);

			return (0);
		}
