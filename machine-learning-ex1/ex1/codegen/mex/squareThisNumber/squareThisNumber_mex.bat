@echo off
set MATLAB=D:\Program Files\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="D:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=squareThisNumber_mex
set MEX_NAME=squareThisNumber_mex
set MEX_EXT=.mexw64
call "D:\Program Files\MATLAB\R2016a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for squareThisNumber > squareThisNumber_mex.mki
echo COMPILER=%COMPILER%>> squareThisNumber_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> squareThisNumber_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> squareThisNumber_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> squareThisNumber_mex.mki
echo LINKER=%LINKER%>> squareThisNumber_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> squareThisNumber_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> squareThisNumber_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> squareThisNumber_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> squareThisNumber_mex.mki
echo BORLAND=%BORLAND%>> squareThisNumber_mex.mki
echo OMPFLAGS= >> squareThisNumber_mex.mki
echo OMPLINKFLAGS= >> squareThisNumber_mex.mki
echo EMC_COMPILER=lcc64>> squareThisNumber_mex.mki
echo EMC_CONFIG=optim>> squareThisNumber_mex.mki
"D:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f squareThisNumber_mex.mk
