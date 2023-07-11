import requests
import time
import hmac
import base64
from hashlib import sha256

# 注意替换成你的OKEX API key/secret/passphrase
api_key = 'your-api-key'
api_secret = 'your-api-secret'
api_passphrase = 'your-api-passphrase'

timestamp = str(time.time())
method = 'GET'
request_path = '/api/v5/account/balance'  # 你希望请求的API endpoint
body = ''

# 生成签名
message = timestamp + method + request_path + body
mac = hmac.new(bytes(api_secret, encoding='utf8'), bytes(message, encoding='utf-8'), digestmod=sha256)
d = mac.digest()
signature = base64.b64encode(d)

headers = {
    'OK-ACCESS-KEY': api_key,
    'OK-ACCESS-SIGN': signature,
    'OK-ACCESS-TIMESTAMP': timestamp,
    'OK-ACCESS-PASSPHRASE': api_passphrase,
    'Content-Type': 'application/json'
}

response = requests.get('https://www.okex.com' + request_path, headers=headers)

if response.status_code == 200:
    print(response.json())
else:
    print(f"请求失败，状态码：{response.status_code}, 错误信息：{response.text}")
