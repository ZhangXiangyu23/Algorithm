def show_menu():
    print("*" * 50)
    print("欢迎使用【名片管理系统】V 1.0")
    print("")
    print("1.新增名片")
    print("2.显示全部")
    print("3.搜索名片")
    print("")
    print("0.退出系统")
    print("*" * 50)


# 名片列表
card_list = [];


def add_card():
    """新增名片"""
    print("-" * 50)
    print("新增名片")
    # 1.提示输入
    name_str = input("请输入姓名:")
    phone_str = input("请输入电话号:")
    qq_str = input("请输入QQ:")
    email_str = input("请输入邮箱:")
    # 2.将数据存入字典
    card_dict = {"name": name_str,
                 "phone": phone_str,
                 "qq": qq_str,
                 "email": email_str}
    # 3.将字典放入字典列表
    card_list.append(card_dict)
    # 4.输出字典列表内容，并且提示添加成功
    print(card_list)
    print("已经成功添加【%s】的名片" % name_str)


def show_all():
    """展示所有名片"""
    print("-" * 50)
    if len(card_list) == 0:
        print("当前没有名片记录，请使用添加功能进行添加!")
        # return关键字后面不加任何返回，表示执行之后返回到调用函数处，没有任何返回
        # 下方代码不会执行
        return
    print("展示所有名片")
    for name in ["姓名", "电话", "QQ", "邮箱"]:
        print(name, end="\t\t")
    print("")
    print("-" * 50)

    for this_card in card_list:
        print("%s\t\t%s\t\t%s\t\t%s" % (this_card["name"], this_card["phone"], this_card["qq"], this_card["email"]))
    print("-" * 50)


def search_card():
    """搜索名片"""
    print("-" * 50)
    print("搜索名片")
    find_name = input("请输入要搜索的姓名：")
    for card in card_list:
        if card["name"] == find_name:
            print("-" * 50)
            print("姓名\t\t电话\t\tQQ\t\t邮箱")
            print("%s\t\t%s\t\t%s\t\t%s" % (card["name"], card["phone"], card["qq"], card["email"]))
            # 对找到的名片进行删除或者修改
            deal_card(card)
            break
    else:
        print("抱歉，没有找到%s的名片" % find_name)


def deal_card(card):
    """
    处理查找到的名片
    :param card:搜索到的名片（数据类型为字典）
    """
    print(card)
    action_str = input("请选择要执行的操作 "
                       "【1】修改 【2】删除 【0】返回上级菜单")
    if action_str == "1":
        card["name"] = input_card_info(card["name"], "姓名:")
        card["phone"] = input_card_info(card["phone"], "电话:")
        card["qq"] = input_card_info(card["qq"], "QQ:")
        card["email"] = input_card_info(card["email"], "邮箱:")
        print("修改成功")
    elif action_str == "2":
        card_list.remove(card)
        print("删除成功!")


def input_card_info(card_value, info):
    """
    将信息录入名片
    :param card_value:名片中原来的值
    :param info:提示信息
    :return:如果输入新的值就返回新的值，如果什么也不输入就返回原来的值
    """
    new_info = input(info)
    if len(new_info):
        return new_info
    else:
        return card_value
