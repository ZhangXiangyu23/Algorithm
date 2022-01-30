import matplotlib.pyplot as plt
import numpy as np

plt.rcParams['font.sans-serif']=['SimHei'] #用来正常显示中文标签
real_names = ["我不是药神", "末代皇帝", "霸王别姬"]

# 第一天的票房
real_num1 = [2203, 3200, 4320]
# 第二天
real_num2 = [2803, 5200, 5320]
real_num3 = [7203, 6200, 6320]


width = 0.3
x = np.arange(len(real_names))
# 第一天
plt.bar(x, real_num1, alpha=0.5, width=width, label="第一天")
# 第二天
plt.bar([i+width for i in x], real_num2, alpha=0.5, width=width, label="第二天")
plt.bar([i+2*width for i in x], real_num3, alpha=0.5, width=width, label="第三天")

# 设置x轴的标签
plt.xticks([i+width for i in x], real_names)

# 设置y轴的标签
plt.ylabel("票房数")

# 设置标题
plt.title("票房记录")
# 设置图例
plt.legend();

plt.show()