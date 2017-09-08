# AnalysisBase type example

## General notes

This is an example of a basic neural network. It is a feed forward type NN with 6 inputs variables and a single output.

## Running the code
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

