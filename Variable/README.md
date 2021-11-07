# C 变量

变量其实只不过是程序可操作的存储区的名称 <br>
变量的名称可以由字母、数字和下划线字符组成 <br>
必须以字母或者下划线开头同时大小写敏感 <br>

# C 中的变量定义

变量定义就是告诉编译器在何处创建变量的存储,以及如何创建变量的存储 <br>
变量定义包含 ***数据类型*** 加 一个或多个***变量名*** <br>
```c
type var;
```
***type 必须是一个有效的 C 数据类型*** <br>
例如: <br>
```c
int i, j, k;
char ch, str;
float f, reulst;
double d, l;
```
初始化(赋值)
```c
type var = value;
```
例如: <br>
```c
int i = 1, j = 2, k = 3;
byte z = 22;
char x = 'x';
```

# C 中的变量声明
变量声明向编译器保证变量以指定的类型和名称存在 <br>
变量声明只在编译时有它的意义，在程序连接时编译器需要实际的变量声明 <br>
变量的声明有两种情况:
1. 一种是需要建立存储空间的。例如：int a 在声明的时候就已经建立了存储空间。
2. 另一种是不需要建立存储空间的，通过使用extern关键字声明变量名而不定义它。 例如：extern int a 其中变量 a
   可以在别的文件中定义的。
3. 除非有extern关键字，否则都是变量的定义。
```c
extern int i; // 声明，不是定义
int i; //声明，也是定义
```