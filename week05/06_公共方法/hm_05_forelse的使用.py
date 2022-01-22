"""
使用for else
遍历了一遍之后，就会执行else中的语句
如果没有遍历一遍，中途退出了，那么就不会执行else中的语句
"""

for num in [1, 2, 3]:
    print(num)
    if num == 2:
        break
else:
    print("执行我吗？")

print("循环结束")