Laser Operator
==============

Operator training consists of a demonstration or prompted walkthrough of the power up, job preparation, job execution and power down procedures followed by a test which involves the user being given a DXF file which must be corrected and machined without prompting.

Important Safety Points
-----------------------

Ensure the new user is fully aware of the following:

  -  DO NOT run the CO2 laser without the water pump running (this should be protected by a flow sensor, but don't rely on it)
  -  DO NOT run the CO2 laser with any of the lockable panels removed, they are not interlocked and may expose the HV supply, laser tube and beam path)
  -  DO NOT machine anything metallic or shiny, this may cause beam reflection which may damage the machine or people
  -  DO NOT machine any material containing Chlorine, this damages the machine and anyone anywhere near it
  -  Operators must not remove any locked panel or adjust any of the laser optics or machine configuration

Training Plan
-------------

This is a brief overview of the order in which to go through training with the new user.

  1.  Power up procedure (Laser->Water->EStop->Key)
  2.  Preparing a job in LaserCut5.3 (use UnclosedPolyline_Example.dxf)
    -  Import DXF
    -  Assigning layers
    -  Setting machine modes per layer
    -  Data check and correction
    -  Software simulation
  3.  Machining a job
    -  Download to machine
    -  Moving axis
    -  Focus Z axis
    -  Boundary contour check ("Test" button)
    -  Run procedure (Extractor->Air->Guard->Start)
    -  Stopping jobs
    -  Job completion procedure (Guard->Air Off->Wait (~1min)->Extractor Off)
  4.  Power down procedure (Air Off->Extractor Off->XY Datum->Key Off->Laser Off->Wait (5-15mins)->Water Off)

Test Files
----------

  -  UnclosedPolyline_Example.dxf is a test piece that demonstrates how to correct an unclosed polyline, the octagon should be raster engraved and the enclosing square cut
  -  OperatorTest.dxf is a QR code in a square outline, the new user should be able to machine this part such that the QR code is rater engraved and the outline is cut out of any material that is available
