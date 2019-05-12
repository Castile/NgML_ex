/*
 * _coder_squareThisNumber_info.c
 *
 * Code generation for function '_coder_squareThisNumber_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "squareThisNumber.h"
#include "_coder_squareThisNumber_info.h"
#include "squareThisNumber_data.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 1);
  emlrtSetField(xEntryPoints, 0, "Name", mxCreateString("squareThisNumber"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", mxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", mxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", mxCreateString("9.0.0.341360 (R2016a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "CoverageInfo", covrtSerializeInstanceData
                (&emlrtCoverageInstance));
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[13] = {
    "789ced5ccd6f1b45149fa0242a8700273e04a284036a1535db0f09a19e9296b871952611b82252549cf57a6c8f989d31bbebd4b9591c508f1cf9533871408213"
    "471037c41f810a080eccec47bc9e6c7736fbe1d8ed5b69e53c7bdeccfbfaedbc37331bb4507f80c4f58ab8bffd1ca165f17949dc2fa1e05a0ae905715f0e3f83",
    "ef17d14a487f256e8b330f0fbde04766da1845579bdb8499cc6b9cf43172b0cbe9316efbbf7408c50d62e31d1e23b68920ec5aeca75342fee4f4dcd39e118d13"
    "c125f57882c67a2c26e8f130a6c76b217db8f5a876dbb04fa418ae619b1e355be2c3ea1186af516c3a8cb0ee353cbc91fca5bcdd2f07a6831b3de2ee0eec1676",
    "d6ed509e8f34f22c2bf248daeef3c7d8c9c6bfa4f04b9a30efd6cd70fca1867f5be197f4617de760ebd1c7b78d7d87771dd37eafe61be6c1666367f38ef1c9cd"
    "eb373e340d8f73dae24303dbd4a0a415998df785057df9d76d55fee584f11762e3bf1c7e8fd0e8bfab6ffdba999f3fb86681ff4a8c7f21811fc53ef3b4bf68ff",
    "ee6bc6bfac8c2f698bb705bb8852ec3093ae13f7ce8050afce0474b043ac52e25ef71c3850f80ff2d845de6bbe36c65aa48ea1aa530407e8cda73fff0238c8d0"
    "fe45c541d2fcd1e68316c58003c0c1d9f6d39cef93c6bfa48c2f69e28ace1c322ce3b93fd2f0ef28fc3b05f5c754fc61441af8695f9138f917f21e88f32ccff5",
    "91861fe21ce27c1a719ef43c0ecbd7a9d4aff714fe7b25e81faa5f203e467ffeb80ff15d467c57ed5fa85f216f071c40fd0a38980d1c7c83d2fddd4493fe9674"
    "49385835296d32ce18ee9a1e39c64d190a5d91c948b9b63572bdaec825e933f8301f0a22ffbec079f2ff3d857f2f8f9d9e810b5f8d62f9d1d2ef23c0c33ce321",
    "4f7ed3a19c67ad0b8ac67f5de1af17b40ba69d01337c0d82e237418f73c4cfca950fa03ec8d27e8466c3cf901f417e047818cba1c3c3db8a1c9256f0e05a2635"
    "9df5685608fabd9ed26f74c5fb8df87438483cf7510a0ed6023d62362a90173d8575d1f9c2c191468eab8a1c92567060f6fbf4e4533f886a03667984b33adba7",
    "a68563e36c68c679551947d29db0b766cf646d3161f8e7bc34fdb4947e5a79ec96889367ab1919b440dc7dffd32dc04d96f6b3eeffaae695aaf32c985f9e2f9c"
    "8c50babff7d1a4bf255d56dd2d5cefff9965dde90d450e4927e261ab5bcabec454ec928883488d4275c6df3fec41fccf4cfc67f0f386468e15450e4913970525",
    "a9278f9d97b30fadb34729ebadf279d02143dcee7331b631a147a1f556f40f3cf7e72beef39d2fea10319df4a611eff715fefb79ec7026de03f94ba80720de33"
    "b6d7e5b5d5ad1f8ee37db5431cd7eb902cf9ffbb8a3c9216ddcbbd8966873b2247ee37f9317644b6fcb869f5b0f545b17525ddfecb91c27794c73ef17586c05c",
    "29fa147aaf06cedd656cff1d4af7fbd768d2ef92aedaefabe90d9a3d4cfbd17b6369f1be107e37967fd19f3b4aaa37086be3619d7999ceb5d494fe6a79eda8cc"
    "23720e81f9e3e2cf2d55eddf0dcdf859eb83f3e2c5ea990ed405c1350bfc301fa4cf0779d63f45d7b639ac161fa5d51193ef29f89297504740be94b1fd8b8a0f",
    "c2e6151f84013ec6fc55e3e3094af7f3b4ebecbcf541d5eff3403d00713e0f719e341fc4f78b21ce9fef381fa174ff4e6b7ff84023c7fb8a1c92d69f3f1aebb9"
    "a1e93febb923dd3aeaa1d2cf611e7b653d7712263e05d6517f83f346d9dacfaadf4b3a678487fd4d4ab995e88f2adefb6c28fc8dd2ec1557a7f0fbfd7fc13c52",
    "4ebe346d7f97309fc43bdee577833db8247fe4c1c7c53d4f12d42a3e8ffcb1bb08382903279fa149bf4bbaac7c2ba82c9a51da854ada27837379e8348ee05c5e"
    "c6f6b386035d1ef58e228fa4151c0c984bba0cb7ef52d375233df3aea7eaec53dd39ed09350a9ed386fc695ef100fb6cb08f00f19e9eb7c0ff01388d1bf83f00",
    "19daff0f577e72a9", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 24232U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_squareThisNumber_info.c) */
