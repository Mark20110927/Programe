import okex.v5.account_api as account
import okex.v5.market_api as market
import okex.v5.public_api as public
import okex.v5.trade_api as trade
import okex.v5.system_api as system
result = marketAPI.index_candles(instId='BTC-USDT')
print(result)