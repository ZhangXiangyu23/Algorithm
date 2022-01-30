import matplotlib.pyplot as plt
import numpy as np
plt.rcParams['font.sans-serif']=['SimHei'] #用来正常显示中文标签

x = np.linspace(0, 10, 100)

plt.plot(x, x, '--g', label="正比例函数")
plt.plot(x, x+1, '-.r', label="张翔宇" )
plt.plot(x, x+2, ':b', label="张翔宇")
plt.plot(x, x+3, '.k', label="张翔宇")
plt.plot(x, x+4, ',c', label="张翔宇")
plt.plot(x, x+5, '*y', label="张翔宇")

# 添加图例
# 默认是放在左上角
# 还有边框、透明度、阴影、边框的宽度
plt.legend(loc="upper right", fancybox=True, framealpha=0.6, shadow=True, borderpad=2)



plt.show()
