import requests
import json
from datetime import datetime
url = "https://www.okex.com/api/v5/market/history-index-candles"
date_string = str(input("请输入开始时间：")) #"2023-07-04T00:00:00.000Z"
date = datetime.strptime(date_string, "%Y-%m-%dT%H:%M:%S.%fZ")
date_string1 = str(input("请输入结束时间: "))#"2023-07-05T00:00:00.000Z"
date1 = datetime.strptime(date_string1, "%Y-%m-%dT%H:%M:%S.%fZ")
params = {
    'instId': input("请输入加密货币的类型："), #'BTC-USDT',
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
        for key, value in data.items():
            if key == 'data':
                for i in value:
                    for j in i:
                        if j != '1':
                            print(j, end=' ')
                    print()

