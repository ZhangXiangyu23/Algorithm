import cards_tools
while True:
    # 1.展示菜单
    cards_tools.show_menu()
    action = input("请输入您选择的操作:")
    print("您输入的选项是【%s】" % action)
    if action == "1":
        print("新增名片")
        cards_tools.add_card()
    elif action == "2":
        print("展示全部")
        cards_tools.show_all()
    elif action == "3":
        print("搜索名片")
        cards_tools.search_card()
    elif action == "0":
        print("退出系统成功,欢迎再次使用【名片管理系统】")
        break
    else:
        print("您输入的选项不正确，请重新输入")
