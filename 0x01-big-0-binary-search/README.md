# 0x01. C - Big O & binary search

System programming & Algorithm ― Data structures and Algorithms

### Task  0 - [Big O #0](BO-0)

Time complexity of the function/algorithm:

```c
void f(int n)
{
    printf("n = %d\n", n);
}
```

### Task  1 - [Big O #1](BO-1)

Time complexity of the function/algorithm:

```c
void f(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("[%d]\n", i);
    }
}
```

### Task  2 - [Big O #2](BO-2)

Time complexity of the function/algorithm:

```c
void f(int n)
{
    int i;

    for (i = 0; i < n; i += 98)
    {
        printf("[%d]\n", i);
    }
}
```

### Task  3 - [Big O #3](BO-3)

Time complexity of the function/algorithm:

```c
void f(unsigned int n)
{
    int i;

    for (i = 1; i < n; i = i * 2)
    {
        printf("[%d]\n", i);
    }
}
```

### Task  4 - [Big O #4](BO-4)

Time complexity of the function/algorithm:

```c
var factorial = function(n) {
    if(n == 0) {
        return 1
    } else {
        return n * factorial(n - 1);
    }
}
```

### Task  5 - [Big O #5](BO-5)

Time complexity of the function/algorithm:

```php
foreach($numbers as $number)
{
    echo $number;
}
```

### Task  6 - [Big O #6](BO-6)

Time complexity of the function/algorithm:

```c
void f(unsigned int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j = j * 2)
        {
            printf("[%d] [%d]\n", i, j);
        }
    }
}
```

### Task  7 - [Big O #7](BO-7)

Time complexity of the function/algorithm:

```c
void f(int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 1; j < n; j = j * 2)
            {
                printf("[%d] [%d]\n", i, j);
            }
        }
        else
        {
            for (j = 0; j < n; j = j + 2)
            {
                printf("[%d] [%d]\n", i, j);
            }
        }
    }
}
```

### Task  8 - [Big O #8](BO-8)

Time complexity of the function/algorithm:

```c
int Fibonacci(int number)
{
    if (number <= 1) return number;

    return Fibonacci(number - 2) + Fibonacci(number - 1);
}
```

### Task  9 - [Big O #9](BO-9)

Time complexity of the function/algorithm:

```python
def func(n):
    a=5
    b=6
    c=10
    for i in range(n):
        for j in range(n):
            x = i * i
            y = j * j
            z = i * j
    for k in range(n):
        w = a*k + 45
        v = b*b
    d = 33
```

### Task 10 - [Big O #10](BO-10)

Time complexity of the function/algorithm:

```c
void f(int n)
{
     int i;
     int j;

     for (i = 0; i < n; i++)
     {
          for (j = i + 1; j < n; j++)
          {
               printf("[%d] [%d]\n", i, j);
          }
     }
}
```

### Task 11 - [Big O #Singly linked lists](BO-11)

### Task 12 - [Big O #Doubly linked lists](BO-12)

### Task 13 - [Big O #Stacks](BO-13)

### Task 14 - [Big O #Queues](BO-14)

### Task 15 - [Big O #Hash tables](BO-15)

### Task 16 - [Big O #16](BO-16)

### Task 17 - [Linear search](0-linear.c)

### Task 18 - [Binary search](1-binary.c)
