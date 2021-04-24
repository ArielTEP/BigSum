# BigSum

Compute sum(sum(sum(4444^4444))).

## Run

```
g++ -O3 bigSum.cpp -o bigSum -std=c++11 && ./bigSum
```

Note: -O3 and -std=c++11 are optional.

## Disclaimer
The most expensive method here is computing the power method, which is O(n^2); however, if you already have the input number (4444^4444) calculated in string format, the whole solution becomes O(n). We can get help from third-party libreries (e.g. gmplib.org), or the gcc compiler optimization, though. I know, it's slow, and apologies for that, but I couldn't think of a faster way at this moment. 

Hope it helps for those cases where you cannot install extra libraries on your, or someone else's system where your code is going to run. Have fun! :3


