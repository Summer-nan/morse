#开源实战大作业

> Summer-nan

> 2019/07/02-2019/07/05

因为最开始上传的文件较乱，所以重新上传了一次

#### 7月3号
将字母以Morse电码的形式传出
 #### 7月4号
 在数码管上显示数字
#### 7月5号
 将Morse电码在仿真平台上模拟
 
 
 # Summary.md
 
 ## 第一天 入门介绍
 
 - 了解了什么是开源，什么是开源软件。
 - 知道了几个常用的网站，软件
 #### arduino
 ![](img/arduino.png)
 
 #### processing
 ![](img/processing.png)
 
 #### fritzing
 ![](img/fritizing.png)
 
 ## 第二天 软件操作
 - 安装了几个重要的软件
 - 学习了他们的基本操作
 - 作业：morse
  morse.h
 ''' cpp
  #ifndef _MORSE_H
 #define _MORSE_H
 class Morse
 {
  public:
    Morse(int word);
    void dot();
    void dash();
    void c_space();
    void w_space();
  private:
    int _word; 
};
'''

#endif /*_MORSE_H*/
 ## 第三天 元器件以及电路图
 - 认识了数码显像管
 - 通过在线仿真模拟完成了数字的显示
 
 ## 第四天 总结归纳
 - 学会了一种新的写文档的形式
