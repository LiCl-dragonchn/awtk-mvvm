# awtk-mvvm

## 一、MVVM 
MVVM(Model-View-ViewModel) 是分离用户界面和业务逻辑的经典模式。

分离用户界面和业务逻辑的好处：

  * 让用户界面可以独立变化。
  * 方便为业务逻辑编写单元测试程序。
  * 方便 UI 设计师和程序员的分工和合作。

MVVM 相比 MVP 和 MVC 的优势：

  * 使用更简单。
  * 分离更彻底。
  * 声明式的编程更容易维护。

MVVM 的核心思想有两个：

* 通过数据绑定实现 View 与 Model 之间的数据交换。
* 通过命令绑定实现 View 事件与 Model 行为之间的关联。

## 二、AWTK-MVVM

AWTK-MVVM 是一套为 [AWTK](https://github.com/zlgopen/awtk) 用 C 语言开发，并支持各种脚本语言的 MVVM 框架，实现了数据绑定、命令绑定和窗口导航等基本功能，使用 AWTK-MVVM 开发应用程序，无需学习 [AWTK](https://github.com/zlgopen/awtk) 本身的 API，只需学习绑定规则和 Model 的实现方式即可。与其它 MVVM 框架相比，其特点有：

* 代码小。
* 性能高。
* 内存开销小。
* 隔离更彻底。
* 可移植到其它 GUI。
* 支持多种编程语言（目前支持 C/JS)。

## 三、使用方法

* 获取 awtk 并编译。

```
git clone https://github.com/zlgopen/awtk.git
cd awtk
scons
```

* 获取 awtk-mvvm 并编译 (awtk 和 awtk-mvvm 处于用一级目录）

```
git clone https://github.com/zlgopen/awtk-mvvm.git
cd awtk-mvvm
git clone https://github.com/jerryscript-project/jerryscript.git 3rd/jerryscript/jerryscript
scons
```

> 编译 linux-fb 版本，请修改 SConstruct

```
#for pc
#sys.path.insert(0, '../awtk/')

#for linux-fb
sys.path.insert(0, '../awtk-linux-fb/')
```

* 运行 demos

```
./bin/demo1
```

> 本文以 Linux/MacOS 为例，Windows 可能会微妙差异，请酌情处理。

## 四、文档
* [介绍](docs/8.intro.md)
* [Model 实现方法](docs/9.model.md)
* [数据绑定](docs/10.data_binding.md)
* [命令绑定](docs/11.command_binding.md)
* [窗口导航器](docs/12.navigate.md)
* [JS 实现 Model](docs/13.js_model.md)
* [高级用法](docs/14.advance_usages.md)

## 五、示例

|  C DEMO  | JS DEMO  | 说明 |
| -------- | -------  | --------------------------------- |
| demo1    | jsdemo1  | 数据绑定基本用法                  |
| demo2    | jsdemo2  | trigger 参数的用法                 |
| demo3    | jsdemo3  | converter 参数的用法               |
| demo4    | jsdemo4  | 显式更新 (Trigger=Explicit) 的用法  |
| demo5    | jsdemo5  | validator 参数的用法               |
| demo6    | jsdemo6  | 命令绑定的基本用法                |
| demo7    | jsdemo7  | 以计算器为例的综合用法            |
| demo8    | jsdemo8  | 以 shape 编辑为例的综合用法         |
| demo9    | jsdemo9  | 多窗口的基本用法                     |
| demo10   | jsdemo10 | 定时器的基本用法                     |
| demo11   | jsdemo11 | 一个视图多个 ViewModel 的用法          |
| demo12   | jsdemo12 | 多窗口之间参数传递                   |
| demo13   | jsdemo13 | 列表视图的基本用法                   |
| demo14   | jsdemo14 | 快捷键的基本用法                     |
| demo15   | （no）   | 自定义导航器处理插件，以及 MVVM 窗口和非 MVVM 窗口的交互 |
| (no)     | jsdemo15 | combox 数据联动                     |
| (no)     | jsdemo16 | 动态界面                            |
| demo16   | (no)     | 集成硬件外设                        |
| demo17   | (no)     | 无 GUI 情况集成硬件外设               |
| (no)     | jsdemo17 | 控制控件的可见性                    |
| (no)     | jsdemo18 | 复杂属性值的表示方法                |
| demo19   | (no)     | 控制动画启停                        |
| demo20   | (no)     | 串口读取数据                        |

完整示例及模板项目：[awtk-mvvm-c-hello](https://github.com/zlgopen/awtk-mvvm-c-hello)
