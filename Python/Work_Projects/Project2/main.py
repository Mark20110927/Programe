import requests
import json
from datetime import datetime
import matplotlib.pyplot as plt
plt.clf()
url = "https://www.okex.com/api/v5/market/history-index-candles"
date_string = "2023-07-05T00:00:00.000Z"#str(input("请输入开始时间：")) #
date = datetime.strptime(date_string, "%Y-%m-%dT%H:%M:%S.%fZ")
date_string1 = "2023-07-06T00:00:00.000Z"#str(input("请输入结束时间: "))#
date1 = datetime.strptime(date_string1, "%Y-%m-%dT%H:%M:%S.%fZ")
params = {
    'instId': 'BTC-USDT',#input("请输入加密货币的类型："), #,
    'start': date.isoformat() + 'Z',
    'end': date1.isoformat() + 'Z',
    'bar': '15m',
}
response = requests.get(url, params=params)
if response.status_code != 200:
    print(f"请求失败，状态码：{response.status_code}")
else:
    data = json.loads(response.text)
    if 'message' in data:
        print(f"API返回错误：{data['message']}")
    else:
        x = []
        for key1, value1 in data.items():
            if key1 == 'data':
                for i in range(len(value1)):
                    x.append(i)
        y1 = []
        y2 = []
        for key, value in data.items():
            if key == 'data':
                for i in value:
                    cnt = 0
                    for j in i:
                        cnt += 1
                        if j != '1':
                            if cnt == 3:
                                y1.append(float(j))
                            if(cnt == 4):
                                y2.append(float(j))
        print(y1)
        print(y2)
        plt.figure()
        plt.subplot(111)
        plt.plot(x, y1, 'o-', label='The Best', markersize=2)
        plt.plot(x, y2, 's-', label='The Worst', markersize=2)
        for i in range(len(x)):
            plt.plot([x[i], x[i]], [y1[i], y2[i]], color='green', linewidth=2)
        plt.ylim(30000, 30200)
        plt.yticks(range(29600, 31000, 40))
        plt.legend()
        plt.show()
