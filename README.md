# oneAPI.MKL
```
Step 1
  - Download oneAPI Base ToolKit
    1. https://www.intel.com/content/www/us/en/developer/tools/oneapi/base-toolkit-download.html
```

```
Step 2
  - C#
    1. Generate the dll file
      a. Open "Developper Command Prompt" from Visual Studio 2019
      b. Console lignes : 
        1). ```
            “C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvarsall.bat” x64
            ```
        2). ```
            cd C:\Program Files (x86)\Intel\oneAPI\mkl\latest\tools\builder
            ```
        3). ```
            nmake intel64 MKLROOT=”C:\Program Files (x86)\Intel\oneAPI\mkl\latest”
            ```
```


```
Step 3
  - C++
```
