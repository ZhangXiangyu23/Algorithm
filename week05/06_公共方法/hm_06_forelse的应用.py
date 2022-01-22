find_name = "小明"

# 类型为字典的列表
name_list = [
    {"name": "小明"},
    {"name": "小红"}
]

for name in name_list:
    print("当前人的名字为%s" % name["name"])
    if name["name"] == find_name:
        print("找到了%s" % find_name)
        break

else:
    print("找了一圈，没有找到%s" % find_name)
