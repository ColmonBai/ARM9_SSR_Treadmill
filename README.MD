# 基于ARM9的SSR智能跑步机
### 功能
- 在嵌入式设备界面和旋钮调节跑步机转速
- 在服务器记录速度历史记录
### 硬件
- 博创智联科技ARM9经典教学平台
### 软件
- Qt 4.4.0
- Redhat Linux
- Wampserver(MySQL PHP Apache)
### 使用
- 在虚拟机中安装Qt4.4.0交叉编译环境
- 修改src/ssr_embd/tcp.cpp第五行的ip为你pc机的ip地址
- 将src/ssr_embed目录拷贝到虚拟机的交叉编译目录中
- 使用`mount`命令将嵌入式qt运行目录挂载到ARM9的`/mnt`目录下
- 在ARM9的终端中，输入setup.txt中的命令 设置qt环境 并且校准屏幕
- 在虚拟机中ssr_embed目录执行`make`
- 将编译好的可执行文件ssr复制到嵌入式qt运行目录下
- 修改src/ssr/databases.php中的数据库配置
- 将src/ssr目录拷贝到wamp的www目录下
- 在浏览器运行`127.0.0.1/ssr/index.php`
- 在ARM终端使用`ssr -qws`运行程序
### Contributors
- Casey
- TsHow
