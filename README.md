# 介绍
C++ 引用LLVM库的最小项目。

项目环境为 [豆包MarsCode](https://www.marscode.cn/dashboard "豆包MarsCode") 提供的debian。

~~目前该项目只是能够编译运行调用了LLVM库的程序，但编辑器依然无法识别LLVM库的头文件，所有引入的LLVM库头文件都会标红报错！~~


**目前项目已经正常识别LLVM库的头文件，并没有任何修改，似乎是云IDE的问题，向官方反应下就好了，如果要在本地vscode中使用则可能还需要自己配置`c_cpp_properties.json`文件让编辑器找到LLVM的头文件的位置**

# 安装llvm环境
```bash
sudo apt-get update
sudo apt-get -y install llvm
```

debian上有一个版本为11的llvm，位于`/usr/lib/llvm11`目录下，但看起来缺文件，上面的命令会在该目录下更新llvm，补全所需的文件。

如果上面的命令报错可以尝试启用新终端，或者关闭标签页重新进一下项目。
安装完后编辑器也需要刷新，需要重新进下项目编辑器才不会标红。

# 运行
打开main.cpp文件
点击左下角的三角形运行即可，点上面的三角形运行不了。
