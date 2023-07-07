import requests
import pandas as pd

def get_okex_kline(symbol, interval, size=200):
    base_url = "https://www.okex.com/api/spot/v3/instruments/"
    url = f"{base_url}{symbol}/candles?granularity={interval}&size={size}"
    response = requests.get(url)

    if response.status_code == 200:
        data = response.json()
        df = pd.DataFrame(data, columns=['time', 'open', 'high', 'low', 'close', 'volume'])
        return df
    else:
        print(f"请求失败，状态码：{response.status_code}")
        return None

# 先获取最近的200条数据
df1 = get_okex_kline('BTC-USDT', 60)

# 再获取200条较早的数据
df2 = get_okex_kline('BTC-USDT', 60)

# 合并两组数据并取出最新的300条
df = pd.concat([df1, df2])
df = df.iloc[:300]

print(df)
