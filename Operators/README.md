# C 运算符

运算符是一种告诉编译器执行特定的数学或逻辑操作的符号 <br>
C 供了以下类型的运算符: <br>
- 算术运算符 (加 减 乘 除 ...)
- 关系运算符 (等于 不等于 大于 小于 ...)
- 逻辑运算符 (或 与 非)
- 位运算符
- 赋值运算符
- 杂项运算符

---

# 算术运算符
***x = 1; y = 2;*** <br>
| 运算符 | 描述 | 例如 |
| ------ | ---- | ---- |
| `+`      | 两数相加 | `x + y = 3` |
| `-`      | 两数相减 | `x - y = -1` |
| `*`      | 两数想乘 | `x * y = 2 `|
| `/`      | 两数想除 | `x / y = 0.5 `|
| `%`      | 取模运算符，整除后的余数 | `x % y = 1` |
| `++`     | 自增运算符，整数值增加 1 | `x++ = 2` |
| `--`     | 自减运算符，整数值减少 1 | `x-- = 0` |
***x++ 先赋值再运算 ; ++x 先运算再赋值***

# 关系运算符
***x = 1; y = 2;*** <br>
| 运算符 | 描述 | 例如 |
| ------ | ---- | ---- |
| `==` | 两个操作数的值;<br> 相等为真;不想等为假 | `( x == y )` True |
| `!=` | 两个操作数的值;<br> 相等为假;不想等为真 | `( x != y )` True |
| `>` | 左面大于右面;为真 | `( x > y )` False |
| `<` | 右面大于左面;为真 | `( x < y )` True |
| `>=` | 左面大于或等于右面; 为真 | `( x >= y )` False |
| `<=` | 右面大于或等于左面; 为真 | `( x <= y )` True |

# 逻辑运算符
***x = 1; y = 0;*** <br>
| 运算符 | 描述 | 例如 |
| ------ | ---- | ---- |
| `&&` | 同时为真;*真*;<br>否则 *假* | `( x && y )` False|
| `||` | 有一个为真;*真*;<br>否则 *假* | `( x || y )` True |
| `!` | 真的为假;<br>假的为真; | `!( x && y )` True |

# 位运算符
<!--
***位运算符作用于位，并逐位执行操作***
| `x` | `y` | `x & y` | `x | y` | `x ^ y` |
| :-: | :-: | :-----: | :-----: | :-----: |
| 0 | 0 | 0 | 0 | 0 |
| 0 | 1 | 0 | 1 | 1 |
| 1 | 1 | 1 | 1 | 0 |
| 1 | 0 | 0 | 1 | 1 |
-->
***暂时没弄懂***

# 赋值运算符
| 运算符 | 描述 | 例如 |
| ------ | ---- | ---- |
| `=` | 把右边操作数的值赋给左边操作数 | `z = x + y` |
| `+=` | 把左边操作数加上右边操作数的结果赋值给左边操作数 | `z += x` 相当于 `z = z + x` |
| `-=` | 把左边操作数减去右边操作数的结果赋值给左边操作数 | `z -= x` 相当于 `z = z - x` |
| `*=` | ...........乘以.........结果赋值给左边操作数 | `z *= x` 相当于 `z = z * x` |
| `/=` | ...........除以.........结果赋值给左边操作数 | `z /= x` 相当于 `z = z / x` |
| `%=` | 求两个操作数的模赋值给左边操作数 | `z %= x` 相当于 `z = z % x` |
| .....|...............|........|