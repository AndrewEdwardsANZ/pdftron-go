<div align="center">
  
  
  <h1>PDFTron GO</h1>
  
  <p>
    
  </p>

  <h3>
    <a href="https://www.pdftron.com">Website</a>
    <span> • </span>
    <a href="https://www.pdftron.com">Docs</a>
    <span> • </span>
    <a href="https://www.pdftron.com">Slack Channel</a>
  </h3>

</div>

<hr/>

Supported platforms: Linux , Mac, Windows

# Running PDFTronGo from Linux

1. cd $HOME/go 
2. go get github.com/rachmatgithub/pdftrongosharedlib
3. mv src/github.com/rachmatgithub/pdftrongosharedlib/src_linux/pdftron/ src/
4. cd $HOME/go/src/pdftron/Samples/AddImageTest/GO
5. ./RunTest.sh 


# Running PDFTronGo from Mac

1. cd $HOME/go 
2. export GO111MODULE=off
2. go get github.com/rachmatgithub/pdftrongosharedlib
3. mv src/github.com/rachmatgithub/pdftrongosharedlib/src_mac/pdftron/ src/
4. install_name_tool -id "@rpath/libpdftron.dylib" $HOME/go/src/pdftron/PDFNetC/Lib/libpdftron.dylib
5. cd $HOME/go/src/pdftron/Samples/AddImageTest/GO
6. ./RunTest.sh 

Alternatively you can also do the following to run the samples:

1. export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:../../../PDFNetC/Lib
2. go run AddImageTest.go


And we are done. First time running RunTest.sh will take some time, but after that execution should be quick. 

Output file will be in $HOME/go/src/pdftron/Samples/TestFiles/Output

Bin file will be in $HOME/go/src/pdftron/Samples/bin

# Running PDFTronGo from Windows 

Prerequisites:
1. Github
2. Go 1.15:
   https://golang.org/doc/install?download=go1.15.11.windows-amd64.msi.
3. mingw-64 :
   http://mingw-w64.org/doku.php/download/mingw-builds.
   Make sure to choose x86_64 architecture during installation.


Steps to run PDFTronGo for Windows 

4. Run mingw-w64.bat from "C:\Program Files\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0" to open command prompt
5. cd %HOMEPATH%
6. go get github.com/rachmatgithub/pdftrongosharedlib
7. xcopy /E /I go\src\github.com\rachmatgithub\pdftrongosharedlib\src_win go\src
8. cd %HOMEPATH%\go\src\pdftron\Samples\AddImageTest\GO and call RunTest.bat


<hr/>

