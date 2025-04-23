---
layout: default
title: AtmosphereParams
parent: Lua API
permalink: lua-api/types/AtmosphereParams
---

{% raw %}

# class AtmosphereParams





[<a href="https://github.com/beyond-all-reason/spring/blob/e02502679d09d2f6505baedaed816b9fc2f50da6/rts/Lua/LuaUnsyncedCtrl.cpp#L3860-L3868" target="_blank">source</a>]





## fields


### AtmosphereParams.fogStart

```lua
AtmosphereParams.fogStart : number
```




### AtmosphereParams.fogEnd

```lua
AtmosphereParams.fogEnd : number
```




### AtmosphereParams.sunColor

```lua
AtmosphereParams.sunColor : rgba {
    [1]: number,
    [2]: number,
    [3]: number,
    [4]: number,
}
```




### AtmosphereParams.skyColor

```lua
AtmosphereParams.skyColor : rgba {
    [1]: number,
    [2]: number,
    [3]: number,
    [4]: number,
}
```




### AtmosphereParams.cloudColor

```lua
AtmosphereParams.cloudColor : rgba {
    [1]: number,
    [2]: number,
    [3]: number,
    [4]: number,
}
```




### AtmosphereParams.skyAxisAngle

```lua
AtmosphereParams.skyAxisAngle : xyzw {
    [1]: number,
    [2]: number,
    [3]: number,
    [4]: number,
}
```



rotation axis and angle in radians of skybox orientation




{% endraw %}