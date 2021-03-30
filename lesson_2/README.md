# Answers

2. 
a) `23 56- 3* 1 3 4 / + /`

``` c
int a, b;
Push(23, s);
Push(56, s);
b = Pop(s);
a = Pop(s);
Push(a-b, s);
Push(3, s);
b = Pop(s);
a = Pop(s);
Push(a*b, s);
Push(1, s);
Push(4, s);
Push(3, s);
b = Pop(s);
a = Pop(s);
Push(a/b, s);
b = Pop(s);
a = Pop(s);
Push(a+b, s);
b = Pop(s);
a = Pop(s);
Push(a/b, s);
```

b) `2 4 7 32 / + 7 5 - 3 *- -`

``` c
int a, b;
Push(2, s);
Push(4, s);
Push(7, s);
Push(32, s);
b = Pop(s);
a = Pop(s);
Push(a/b, s);
b = Pop(s);
a = Pop(s);
Push(a+b, s);
Push(7, s);
Push(5, s);
b = Pop(s);
a = Pop(s);
Push(a-b, s);
Push(3, s);
b = Pop(s);
a = Pop(s);
Push(a*b, s);
b = Pop(s);
a = Pop(s);
Push(a-b, s);
b = Pop(s);
a = Pop(s);
Push(a-b, s);
```

c) `2 6 + 4 7 * 5 - / 6 9 / * 4 9 * 5 3 / + -`

``` c
int a, b;
push(2, s);
push(6, s);
b = Pop(s);
a = Pop(s);
Push(a+b, s);
push(4, s);
push(7, s);
b = Pop(s);
a = Pop(s);
push(a*b, s);
push(5, s);
b = Pop(s);
a = Pop(s);
push(a-b, s);
b = Pop(s);
a = Pop(s);
push(a/b, s);
push(6, s);
push(9, s);
b = Pop(s);
a = Pop(s);
push(a/b, s);
b = Pop(s);
a = Pop(s);
push(a*b, s);
push(4, s);
push(9, s);
b = Pop(s);
a = Pop(s);
push(a*b, s);
push(5, s);
push(3, s);
b = Pop(s);
a = Pop(s);
push(a/b, s);
b = Pop(s);
a = Pop(s);
push(a+b, s);
b = Pop(s);
a = Pop(s);
push(a-b, s);
```
