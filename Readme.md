# Boost lib install
## Instructions
  1. Download [boost](https://www.boost.org/users/download/)
  1. Extract in *C:\Program Files\boost\boost_1_76_0*
  1. Build the locale library
     1. In the extracted directory, run bootstrap.bat as an administrator, this will create b2.exe
	 1. In an elevated command prompt, run .\b2 --with-locale
  1. In Visual Studio, right click the project in the Solutions Explorer window, select Protperties
     1. Select Configuration Properties -> VC++ Directories
	 1. Add *C:\Program Files\boost\boost_1_76_0* in External Include Directories *C:\Program Files\boost\boost_1_76_0\stage\lib* in Library Directories