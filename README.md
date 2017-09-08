# lwtnn-examples
Examples showing how to use lwtnn in the `ATLAS` environment

See relevant `README`'s in subdirectories.

Whenever `asetup AnalysisBaseExternals,...` is called, a different environment can be substituted, for example `AnalysisTop`. The reason being that AnalysisBaseExternals forms the base of the pyramid of dependencies (which is where we added `lwtnn`) from which other analysis packages get built on top.

In Addition, we also build `lwtnn` inside `AthenaExternals`, and so doing `asetup <athena project>,...` will also give one access to the `lwtnn` libraries.

This repository currently contains

   * AnalysisBase Keras sequantial API example
   * AnalysisBase Keras functional API example
   
which will also work in an Athena environemnt.
