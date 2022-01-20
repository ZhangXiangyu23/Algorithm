def print_line(char, times):
    """
    打印单行分割线
    :param char:分割线字符
    :param times:字符次数
    """
    print(char * times)


def print_lines(char, times):
    """
    打印五行分隔线
    :param char:分割线的字符
    :param times:每行字符的个数
    """
    row = 0
    while row < 5:
        print_line(char, times)
        row = row + 1


name = "黑马程序员"
