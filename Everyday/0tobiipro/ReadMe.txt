1.1在Windows上安装和构建Pro SDK

下载最新版本的Tobii Pro SDK C Binding。 
该软件包包括开发与Tobii Pro眼动仪通信的应用程序所需的所有文件。 提取文件并将它们放在保存开发文件的位置。
1.1.1使用tobii_research构建
Tobii Pro SDK使用Microsoft的Windows 8.1 SDK构建。 在下面的示例中，假设tobii_research头文件安装在path-to-includes，并假定tobii_research库安装在path-to-libs。 
因此，如果您的项目包含一个使用Tobii Pro SDK的simple_project.c文件，那么可以通过键入以下内容来编译和链接：
cl simple_project.c / Ipath-to-includes path-to-libs \ tobii_research.lib
1.1.2运行使用tobii_research构建的应用程序
要使用Tobii Pro SDK运行应用程序，例如上一节中构建的simple_project，您需要添加path-to-libs作为应用程序的搜索路径。 一种方法是将path-to-libs添加到环境变量PATH。

1.2不管任何语言的通用概念：http://developer.tobiipro.com/commonconcepts.html

1.3 SDK主页面：https://www.tobiipro.com/product-listing/tobii-pro-sdk/
对应的中文网站：https://www.tobiipro.com/zh/product-listing/tobii-pro-sdk/#%25E6%258A%2580%25E6%259C%25AF%25E8%25A7%2584%25E6%25A0%25BC

1.3.1Tobii Pro SDK
免费软件开发套件，用于构建分析应用程序，以与Tobii Pro的眼动仪配合使用。 为多种编程语言和3D引擎预制件提供多平台支持。
产品特点：
用于开发分析应用程序的综合工具包
Tobii Pro SDK是一个全面的工具包，可帮助研究人员和软件合作伙伴轻松构建用于研究的分析应用程序，使用Tobii的基于屏幕的眼动仪。 它专为开发分析注视数据的应用程序而设计。
该套件支持Tobii Pro基于屏幕的眼动仪的整个产品组合。 查看支持的眼动仪的详细信息。（Tobii Pro的以下眼动仪默认与Pro SDK兼容：Tobii Pro Nano）
