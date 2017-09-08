# AnalysisBase type example

## General notes

This example is of a more complex neural network.
It's comprised of 3 inputs: tracks, vertex infomation and a further 3 variables from a previous NN
as well as 3 outputs.

When initiating the `graph` an output also needs to be given. In this basic example, `DL1_shared_0`
is used (see `test_NN.json` for node, input and output names.).

Another thing to note is that normal inputs take the form of `std::map<std::string, std::map<std::string, double> > inputs`
whereas sequence inputs take the form of `std::map<std::string, std::map<std::string, std::vector<double>> > input_sequences`.

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
```

Output should be:
```
DL1_shared_0:
out_0 0.114999
out_1 0.782717
out_2 0.0374819
out_3 0.064802
```

