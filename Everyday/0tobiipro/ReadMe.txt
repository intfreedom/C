1.1在Windows上安装和构建Pro SDK

下载最新版本的Tobii Pro SDK C Binding。 
该软件包包括开发与Tobii Pro眼动仪通信的应用程序所需的所有文件。 提取文件并将它们放在保存开发文件的位置。
1.1.1使用tobii_research构建
Tobii Pro SDK使用Microsoft的Windows 8.1 SDK构建。 在下面的示例中，假设tobii_research头文件安装在path-to-includes，并假定tobii_research库安装在path-to-libs。 
因此，如果您的项目包含一个使用Tobii Pro SDK的simple_project.c文件，那么可以通过键入以下内容来编译和链接：
cl simple_project.c /I path-to-includes path-to-libs \ tobii_research.lib
备注：cl命令，cl /I <dir>是把目录加入include搜录路径中
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
一个SDK，许多应用程序
Pro SDK提供多平台支持（Windows，Linux和Mac），针对多种编程语言（.NET，Python，Matlab / Octave和C）的API绑定以及3D引擎（Unity）的预制件。 
这使得能够开发许多不同类型的分析应用 - 从用于科学研究的定制研究范例到商业应用。 Pro SDK建立在坚实的基础之上，可以在不同的平台和绑定上重用功能。


1.4Tobii Pro Eye Tracker Manager  Tobii Pro眼动仪管理器：
免费软件，帮助管理基于屏幕的眼动仪。 此应用程序有助于设置带或不带屏幕的眼动仪，它有助于用户校准和故障排除。 根据眼动仪型号，您还可以使用它来更改设置和更新固件。
概述：高效的配置和设置
Tobii Pro眼动仪管理器是一个新的配置和设置实用程序，可帮助您管理连接的眼动仪。它是免费提供的，可大大提高Tobii Pro SDK或Tobii Pro Lab用户的工作效率。
Pro Eye Tracker Manager允许研究人员在与眼睛一起使用时轻松配置眼动仪。此应用程序还用于配置场景摄像机设置中的硬件，其中物理对象用作刺激。
对于移动设备支架的用户，Tobii Pro眼动仪管理器提供了一个向导和简化的设置和配置眼动仪的过程，用于测试移动设备。
如果您的眼动仪支持不同的采样频率或眼动追踪模式，则可以使用Pro Eye Tracker Manager更改这些模式。模式适应眼动仪收集凝视数据的方式。
对于Tobii Pro Spectrum和Tobii Pro Nano，Pro Eye Tracker Manager用于更新眼动仪固件。对于其他眼动仪模型，使用眼动仪浏览器工具更新固件。
快速可靠的用户校准
Pro Eye Tracker Manager为Pro SDK用户提供了一个有效的选项，可以进行快速可靠的用户校准。 在校准之前，轨道状态面板指示参与者眼睛在轨道盒内的位置。
如果我们的技术支持团队要求，可以创建和导出诊断数据文件以进行大量故障排除。
使用Tobii Pro眼动仪管理器提高效率
Pro SDK由Pro Eye Tracker Manager补充，这是一款免费软件，可帮助您管理和设置眼动仪。
该工具支持分析眼动追踪应用程序工作流程的常用部分，该工具可以使用调用功能与Pro SDK上构建的分析应用程序无缝集成。 这包括配置显示区域，查看轨道状态（头箱的可视化）以及进行用户校准。
根据眼动仪模型，Pro Eye Tracker Manager还允许您更新固件并更改采样频率。
一个应用程序，支持许多眼动仪和平台
Pro Eye Tracker Manager可用于Tobii Pro的所有基于屏幕的眼动仪，因此相同的应用程序适用于您可能用于研究的各种模型。
该应用程序适用于Windows，Linux和Mac系统。 如果您在Mac或Linux上运行，则支持Tobii Pro X3-120需要EPU。
与您的应用程序集成
Pro Eye Tracker Manager可以使用调用功能与Pro SDK上构建的分析应用程序集成。 Pro SDK仍将为研究人员提供充分的灵活性，但眼动追踪软件应用程序的工作流程的常见部分，
例如配置显示区域，查看轨道状态（头箱的可视化）以及进行用户校准，可以是 使用此工具可轻松完成，减少所需的编码量。 这种无缝集成使研究人员能够轻松高效地创建自己的应用程序。

1.5开源附加组件
为了使Tobii Pro SDK更易于使用，一些更常见的用户场景已作为可选附件实现，可以下载或复制并在代码中使用。 
这些附加组件都是开源的，并在GitHub上托管，因此代码完整可用，任何人都可以自由地提供建议和更改。 
校准验证

在执行眼动追踪研究时，在校准后执行估计性能的验证非常有用。 此步骤通常称为校准验证。 进行校准验证的常用程序是为参与者显示一组新的刺激点，在刺激呈现期间收集凝视数据，并根据凝视数据相对于刺激点的位置计算准确度和精确度的值（ 参与者应该看看）。 
附加组件包括收集注视数据和计算性能结果所需的所有功能。 唯一留给你的是提出刺激点（这样做的方法在很大程度上取决于所使用的表示框架）。

1.5.1对于Windows
将Tobii Pro SDK存档解压缩到addons文件夹根目录中的新目录sdk。
打开Visual Studio并在win32目录中加载解决方案。
构建所需的配置（即Debug / Release和x86 / x64）。
要使用该库，您需要在源或链接中手动加载两个DLL（tobii_research_addons.dll和tobii_research.dll）与其各自的lib文件。 参见示例项目。

1.5.1.1
cl sample.c /I D:\02ability\LearnC\Everyday\0tobiipro\addons20190722\prosdk-addons-c-master\sdk\32\include D:\02ability\LearnC\Everyday\0tobiipro\addons20190722\prosdk-addons-c-master\sdk\32\lib\tobii_research.lib
还是报错；
sample.c
sample.c(1): fatal error C1083: 无法打开包括文件: “stdio.h”: No such file or directory
1.5.1.2 cl命令的作用：（备注：cl命令，cl /I <dir>是把目录加入include搜录路径中）所以是编译和链接（link)的缩写吗？
编译(compilation , compile) 1、利用编译程序从源语言编写的源程序产生目标程序的过程。 2、用编译程序产生目标程序的动作。 
动态库又称动态链接库英文为DLL，是Dynamic Link Library 的缩写形式，DLL是一个包含可由多个程序同时使用的代码和数据的库，DLL不是可执行文件