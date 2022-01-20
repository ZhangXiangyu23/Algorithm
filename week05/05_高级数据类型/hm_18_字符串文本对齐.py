poem = [
    "登鹳雀楼",
    "王之涣\t",
    "白日依山尽\r",
    "黄河入海流\n",
    "欲穷千里目",
    "更上一层楼"
]

# strip方法是去除空白字符
for word in poem:
    print("|%s|" %word.strip().center(10,"　"))



# print(poem)