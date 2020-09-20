import random
#四则运算
from fractions import Fraction
def f(f):#分数的转换
    a=f.numerator #分子
    b=f.denominator #分母
    if a%b==0:#为整数
        return '%d'%(a/b)
    elif a<b:#为真分数
        return '%d%s%d' % (a,'/',b)
    else:#为带分数
        c=int(a/b)
        a = a - c * b
        return '%d%s%d%s%d' % (c,'’',a,'/',b)
def szys():
    sym = ['＋', '－', '×', '÷']
    f= random.randint(0, 3)
    n1 = random.randint(1, 99)
    n2 = random.randint(1, 99)
    result = 0
    if f== 0:#加法
       result  = n1 + n2
    elif f == 1:#减法，要先比较大小，防止输出负数
        n1, n2 = max(n1, n2), min(n1, n2)
        result  = n1 - n2
    elif f== 2:#乘法
        result  = n1 * n2
    elif f == 3:#除法，要比较大小
        result =Fraction(n1, n2)
    print(n1, sym[f], n2, '= ', end='')
    return result
print('请输入555进行四则运算') 
n=int(input())
#当输入555时，进行四则运算，调用函数szys()
if n==555:
    while True:
        result  = szys()
        j= input()
       
        if j== f(result ):
            print('Bingo~恭喜你答对了！')
        else:
            print('很遗憾你答错了，继续加油哟~ 正确答案是：', result )
