import requests
import json
from datetime import datetime

# OKEX K线数据的URL
url = "https://www.okex.com/api/v5/market/history-index-candles"

date_string = "2023-07-04T00:00:00.000Z"
date = datetime.strptime(date_string, "%Y-%m-%dT%H:%M:%S.%fZ")  # 转换日期字符串为datetime对象

date_string1 = "2023-07-05T00:00:00.000Z"
date1 = datetime.strptime(date_string1, "%Y-%m-%dT%H:%M:%S.%fZ")  # 转换日期字符串为datetime对象

# 请求参数
params = {
    'instId': 'BTC-USDT',
    'start': date.isoformat() + 'Z',  # 开始时间
    'end': date1.isoformat() + 'Z',  # 结束时间
    'bar': '15m',
}

# 发起请求
response = requests.get(url, params=params)

# 检查HTTP状态码
if response.status_code != 200:
    print(f"请求失败，状态码：{response.status_code}")
else:
    # 获取数据
    data = json.loads(response.text)

    # 如果API返回错误
    if 'message' in data:
        print(f"API返回错误：{data['message']}")
    else:
        # 打印数据
        print(data)
