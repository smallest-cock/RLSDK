# RLSDK
Unofficial Rocket League SDK

Generated with [RLSDK-Generator](https://github.com/smallest-cock/RLSDK-Generator)

### To support precompiled headers
Add `USE_PCH` to your project's compile definitions, or just define it before SDK headers are included. For example, in a `pch.h`:
```cpp
#define USE_PCH
#define USE_GMALLOC
#include "RLSDK/RLSDK/SdkHeaders.hpp"
```
