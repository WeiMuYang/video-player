# Video  Player 

## 1 简介 

Video  Player是一款借助于FFmpeg视频库，进行视频和音频播放的软件，支持视频和音频的播放传输以及视频的快进，音量调节等功能，同时也会视频WebRTC等实时语音和视频传输，并完成跨平台的支持。

## 2 功能介绍  

1. 开始/暂停  
2. 音量+/-  
3. 视频列表  
4. 视频快进/快退 
5. 播放加速/减速  
6. 视频格式转化  
7. 实时传输WebRTC    
8. 支持Windows，Linux，Android等平台  

## 3 获取仓库   

目前还没有完成，应该使用json文件。`git clone git@github.com:WeiMuYang/video-player.git` 。

打包方式：

```bash
# 使用Qt 5.15.2 (MSVC 2019 32-bit)
cd bin
windeployqt VideoPlayer.exe 
```

## 4 开发计划 

计划开发一套完善的视频播放和传输软件，需要迭代的功能进行了整理，如果有哪些功能见开发文档：[CHANGED-LOG.md](CHANGED-LOG.md)   

## 5 关于作者  

该软件的开发人员是本人一人完成，由于平时工作忙碌，还有其他有待开发的其他功能，而且对于功能的测试还不完善，欢迎感兴趣的coder可以加入进来。也可以通过邮件的方式进行技术交流：863255386@qq.com。  