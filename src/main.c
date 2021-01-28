// программа определяет есть ли одинаковые цифры в заданном трехзначном числе
int main()
{
int a;
a = 383; 
int b;
b = a%10;
int c;
c = (a-b)%100/10;
int d;
d = (a-b-c)/100;
if (a == b) return;
  else if (a == c) return;	
  else if (b == c) return;
	return 0;
}
