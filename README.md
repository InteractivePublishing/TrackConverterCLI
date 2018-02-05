TrackConverterCLI
=================

Command-line tool to convert track files (*.trk) to VTK polydata.

This code was adapted from [prior work](https://github.com/ihnorton/TractIO) done by Isaiah Norton.

## How to build ?

### Using an existing Slicer build

Assuming Slicer is built with Qt5 support enabled (which implicitly means C++11 is enabled), the following could
be done:

```
cd TrackConverterCLI-Release
cmake -DSlicer_DIR:PATH=/path/to/Slicer-Release/Slicer-build
cmake --build . --config Release
```

### Using existing SlicerExecutionModel and VTK builds

Assuming SlicerExecutionModel and VTK are built with c++11, the following could be
done:

```
cd TrackConverterCLI-Release
cmake \
  -DSlicerExecutionModel_DIR:PATH=/path/to/SlicerExecutionModel-build \
  -DVTK_DIR:PATH=/path/to/VTKv9-build \
  ../TrackConverterCLI
cmake --build . --config Release
```

## Usage

```
USAGE:

   TrackIOConverter  [--returnparameterfile
                     <std::string>]
                     [--processinformationaddress
                     <std::string>] [--xml] [--echo]
                     [--deserialize <std::string>]
                     [--serialize <std::string>] [--]
                     [--version] [-h] <std::string>
                     <std::string>


Where:

   --returnparameterfile <std::string>
     Filename in which to write simple return parameters (int, float,
     int-vector, etc.) as opposed to bulk return parameters (image,
     geometry, transform, measurement, table).

   --processinformationaddress <std::string>
     Address of a structure to store process information (progress, abort,
     etc.). (value: 0)

   --xml
     Produce xml description of command line arguments (value: 0)

   --echo
     Echo the command line arguments (value: 0)

   --deserialize <std::string>
     Restore the module's parameters that were previously archived.

   --serialize <std::string>
     Store the module's parameters to a file.

   --,  --ignore_rest
     Ignores the rest of the labeled arguments following this flag.

   --version
     Displays version information and exits.

   -h,  --help
     Displays usage information and exits.

   <std::string>
     (required)  Track (*.trk) file.

   <std::string>
     (required)  Output track model


   Description: Convert a tract file to a VTK model.

   Author(s): Isaiah Norton (MIT), Johan Andruejol (Kitware
   Inc.)

   Acknowledgements: MIT, Kitware Inc.
```

