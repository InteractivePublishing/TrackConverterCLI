Design
======

- "stand-alone" (i.e. super-buildable, no Slicer dependency) library for reading common tractography formats
- we will have a dependency on DCMTK and VTK.
- formats we intend to support, initially:
    - [DICOM supplement 181](ftp://medical.nema.org/medical/dicom/final/sup181_ft_TractographyResultsStorage.pdf)
    - [TrackVis format](http://www.trackvis.org/docs/?subsect=fileformat)
    - Slicer-style VTK polydata with tensors [TODO: doc the property conventions in use]
    - (maybe support: DiPy HDF5 "dpy" format. Very minimalist format, not sure if widely-used)

- C API is a "nice-to-have", but not imperative.
