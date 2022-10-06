```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    printf("Hello, World!\n");
    printf("Welcome to C programming.");
    return 0;
}
```

```C
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    char s[20], sen[100];
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}
```

```C
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int n, m;
    float a, b;
    scanf("%d %d", &n, &m);
    scanf("%f %f", &a, &b);
    int sum_of_ints = n + m;
    float sum_of_floats = a + b;
    int diff_of_ints = n - m;
    float diff_of_floats = a - b;
    printf("%d %d\n", sum_of_ints, diff_of_ints);
    printf("%.1f %.1f", sum_of_floats, diff_of_floats);
    return 0;
}
```

```C
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

// Buat fungsi perbandingan untuk mencari maksimal nilai antara 2 variabel
int max(int a, int b) {
    return a > b ? a : b;    
}

int max_of_four(int a, int b, int c, int d) {
    return max(a, max(b, max(c, d)));
}



int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
```

```C
#include <stdio.h>

void update(int *a,int *b) {
    int sum =*a+*b;
    int diff;
    
    if (*a > *b)
    {
        diff = *a - *b;
    }
    if (*a < *b)
    {
        diff = *b - *a;
    }
    
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
```
