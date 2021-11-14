# C enum(枚举)

枚举是 C 语言中的一种基本数据类型，它可以让数据更简洁，更易读 <br>
定义格式为: <br>
```c
enum　枚举名　{枚举元素1,枚举元素2,……};
```
***注意:*** 第一个枚举成员的默认值为整型的 0，后续枚举成员的值在前一个成员上加 1。 <br>

# 枚举变量的定义
以下三种方式来定义枚举变量 <br>
1. 先定义枚举类型，再定义枚举变量
```c
enum DAY {
    MON=1, TUE, WED, THU, FRI, SAT, SUN
};
enum DAY day;
```
2. 定义枚举类型的同时定义枚举变量
```c
enum DAY {
    MON=1, TUE, WED, THU, FRI, SAT, SUN
} day;
```
3. 省略枚举名称，直接定义枚举变量
```c
enum {
    MON=1, TUE, WED, THU, FRI, SAT, SUN
} day;
```
