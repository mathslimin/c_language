# C 函数
函数是一组一起执行一个任务的语句 <br>
每个 C 程序至少有一个函数, 即主函数 `main()` <br>
您可以把代码划分到不同的函数中, 从逻辑上说每个函数只做一件事情 <br>
C 标注库提供大量的程序可以调用内置函数。<br>
例如:
- `strcat()` 用来连接两个字符串
- `memcpy()` 用来复制内存到另一个位置
- .....

# 定义函数

C 语言定义函数格式如下:

```c
return_type function_name( parameter list ) {
    body of the function
}
```
`return_type` : 返回值 (可以无返回指 `void`) <br>
`function_name` : 函数名 <br>
`parameter list` : 参数 (可以无参数，也可以多参数) <br>
`body of the function` : 函数主体

# 实例
```c 
int max( int num1, int num2 ) {
    if ( num1 > num2 ) {
        return num1;
    }
    return num2;
}
```
***等价于*** <br>
```c
int max( int num1, int num2 ) {
    return num1 > num2 ? num1 : num2;
}
```
