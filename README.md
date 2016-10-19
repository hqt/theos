hira

#Prerequisite
1. Rooted Android Device. Using [One King Root](http://www.kingroot.net/wap/download)
2. Installed Xposed Framework. Depend on devices. Using with care.
3. Java SDK. Android SDK, Android Studio.

#XPosed application
Follow this [XPosed tutorial](https://github.com/rovo89/XposedBridge/wiki/Development-tutorial)

1. Copy `XPosedBridge-Api.jar` to libs folder
2. In `build.gradle` depends on device:
    - **provided** fileTree(dir: 'libs', include: ['*.jar'])
    - **compiled** fileTree(dir: 'libs', include: ['*.jar'])
3. In `manifest.xml`
        ```xml
        <meta-data
            android:name="xposedmodule"
            android:value="true" />
        <meta-data
            android:name="xposeddescription"
            android:value="an android daemon to control android root device via outside commands" />
        <meta-data
            android:name="xposedminversion"
            android:value="53" />
         ```
4. create a class that implement interface `IXposedHookLoadPackage`. All hook actions is begun from here. 
5. create file `xposed_init` in `asset` folder, pointing to class at step 4 as entry point for XPose module. 
6. After running app success, enable app in `XPosed Installer` then restart for applying new change. 

#Reverse Engineering android application
1. get apk file.
2. change file type from `apk`to `rar` then extract.
3. convert file `classes.dex` to jar file using [d2j-dex2jar command](http://brewformulas.org/Dex2jar). New file `classes-dex2jar.jar` will be created in same directory.
4. Using this [java-decompiler](http://jd.benow.ca/) for reverse engineering jar file to java file. All reverse android apps currently are stored in `rverse_app` directory.

#Some common problems
TBD

