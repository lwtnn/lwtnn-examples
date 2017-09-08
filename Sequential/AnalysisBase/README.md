# AnalysisBase type example

Setup `AnalysisBaseExternals`:

```
asetup AnalysisBaseExternals,21.2.4,here
```
For a self contained example we overwirte the `CMakeLists.txt` file that was automatically created, then build
the project:
```
cp CMakeExample.txt CMakeLists.txt
mkdir build ; cd build
cmake ../
make
testExec
```

Output should be:
```
NN output = 0.524292
```

