# Ft_printf 

ft_printf is an implementation of few of C `printf` functionality with extended features

**Formaters**

1. %s  "for strings"
2. %d or %i "for integers"
3. %f  "for floating point numbers"
4. %u "for unsigned integers"
5. %o or %O  "for octal numbers"
6. %p "for pointers"
7. %c "for printing single characters" 
8. %x or %X "for hexadecimal numbers"

**Modifiers**
1. hh "signed char - d, i" || "unsigned char - o, u, x, X"
2. h "short - d, i" || unsigned short - o, u, x, X"
3. l "long - d, i" || unsigned long - o, u, x, X"
4. l "long long - d, i" || unsigned long long - o, u, x, X"
5. j "intmax_t - d, i" || uintmax_t - o, u, x, X"
6. z "size_t - d, i" || size_t - o, u, x, X"

**Flags**<br />
**'#'** - For x and X conversions, a non-zero result has the string `0x' (or `0X' for X conversions) prepended to it.<br />
**'0'** - zero padding. The converted value is padded on the left with zeros rather than blanks.<br />
**'-'** - A negative field width flag; the converted value is to be left adjusted on the field boundary.<br />
**' '** - (space)  A blank should be left before a positive number produced by a signed conversion.<br />
**'+'** - A sign must always be placed before a number produced by a signed conversion.<br />

**'%'** - A % is written.  No argument is converted.  The complete conversion specification is '%%'.<br />



**NOTE**

if an invalid replacement string is specified for any formater, an error will be throwed
source : man 3 printf
