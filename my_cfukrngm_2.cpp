//
// my_cfukrngm_2.cpp
//
//

// Include files
#include "my_cfukrngm_2.h"
#include "KerGauss.h"
#include "UPhi.h"
#include "abs.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "gamma.h"
#include "indexShapeCheck.h"
#include "mean.h"
#include "mldivide.h"
#include "mpower.h"
#include "mtimes.h"
#include "my_cfukrngm_2_data.h"
#include "my_cfukrngm_2_types.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    17,              // lineNo
    "my_cfukrngm_2", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    25,              // lineNo
    "my_cfukrngm_2", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    26,              // lineNo
    "my_cfukrngm_2", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    30,              // lineNo
    "my_cfukrngm_2", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    34,              // lineNo
    "my_cfukrngm_2", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    35,              // lineNo
    "my_cfukrngm_2", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    42,              // lineNo
    "my_cfukrngm_2", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    45,              // lineNo
    "my_cfukrngm_2", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    47,              // lineNo
    "my_cfukrngm_2", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pathName
};

static emlrtRSInfo j_emlrtRSI{
    49,              // lineNo
    "my_cfukrngm_2", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    56,              // lineNo
    "my_cfukrngm_2", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    62,              // lineNo
    "my_cfukrngm_2", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    63,              // lineNo
    "my_cfukrngm_2", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    64,              // lineNo
    "my_cfukrngm_2", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pathName
};

static emlrtRSInfo p_emlrtRSI{
    11,      // lineNo
    "confa", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "confa.m" // pathName
};

static emlrtRSInfo q_emlrtRSI{
    18,      // lineNo
    "confa", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "confa.m" // pathName
};

static emlrtRSInfo t_emlrtRSI{
    94,                  // lineNo
    "eml_mtimes_helper", // fcnName
    "D:\\MATLABR2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m" // pathName
};

static emlrtRSInfo u_emlrtRSI{
    69,                  // lineNo
    "eml_mtimes_helper", // fcnName
    "D:\\MATLABR2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m" // pathName
};

static emlrtRSInfo uc_emlrtRSI{
    11,      // lineNo
    "confd", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "confd.m" // pathName
};

static emlrtRSInfo vc_emlrtRSI{
    18,      // lineNo
    "confd", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "confd.m" // pathName
};

static emlrtRSInfo
    wc_emlrtRSI{
        34,               // lineNo
        "rdivide_helper", // fcnName
        "D:\\MATLABR2022b\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
        "helper.m" // pathName
    };

static emlrtRSInfo xc_emlrtRSI{
    51,                                                             // lineNo
    "div",                                                          // fcnName
    "D:\\MATLABR2022b\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" // pathName
};

static emlrtBCInfo emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    64,              // lineNo
    56,              // colNo
    "x0",            // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    64,              // lineNo
    52,              // colNo
    "x0",            // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtECInfo emlrtECI{
    2,               // nDims
    64,              // lineNo
    21,              // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtBCInfo c_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    64,              // lineNo
    42,              // colNo
    "x0",            // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    64,              // lineNo
    38,              // colNo
    "x0",            // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo e_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    64,              // lineNo
    29,              // colNo
    "Xb0",           // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    64,              // lineNo
    25,              // colNo
    "Xb0",           // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    63,              // lineNo
    46,              // colNo
    "x0",            // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    63,              // lineNo
    44,              // colNo
    "x0",            // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtECInfo b_emlrtECI{
    2,               // nDims
    63,              // lineNo
    21,              // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtBCInfo i_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    63,              // lineNo
    36,              // colNo
    "x0",            // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo j_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    63,              // lineNo
    34,              // colNo
    "x0",            // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo k_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    63,              // lineNo
    27,              // colNo
    "Xb0",           // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo l_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    63,              // lineNo
    25,              // colNo
    "Xb0",           // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo m_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    53,              // lineNo
    17,              // colNo
    "data",          // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtECInfo c_emlrtECI{
    1,               // nDims
    45,              // lineNo
    5,               // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtBCInfo n_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    45,              // lineNo
    20,              // colNo
    "x1",            // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo o_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    45,              // lineNo
    18,              // colNo
    "x1",            // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtECInfo d_emlrtECI{
    2,               // nDims
    42,              // lineNo
    5,               // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtECInfo e_emlrtECI{
    1,               // nDims
    42,              // lineNo
    5,               // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtECInfo f_emlrtECI{
    1,               // nDims
    26,              // lineNo
    12,              // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtBCInfo p_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    26,              // lineNo
    29,              // colNo
    "x1",            // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo q_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    26,              // lineNo
    27,              // colNo
    "x1",            // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo r_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    17,              // lineNo
    13,              // colNo
    "x0",            // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtDCInfo emlrtDCI{
    17,              // lineNo
    13,              // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    1               // checkKind
};

static emlrtBCInfo s_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    17,              // lineNo
    11,              // colNo
    "x0",            // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo t_emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    18,      // lineNo
    12,      // colNo
    "x",     // aName
    "confa", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "confa.m", // pName
    0          // checkKind
};

static emlrtBCInfo u_emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    18,      // lineNo
    14,      // colNo
    "x",     // aName
    "confa", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "confa.m", // pName
    0          // checkKind
};

static emlrtDCInfo b_emlrtDCI{
    8,       // lineNo
    16,      // colNo
    "confa", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "confa.m", // pName
    1          // checkKind
};

static emlrtDCInfo c_emlrtDCI{
    8,       // lineNo
    16,      // colNo
    "confa", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "confa.m", // pName
    4          // checkKind
};

static emlrtDCInfo d_emlrtDCI{
    29,              // lineNo
    15,              // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    4               // checkKind
};

static emlrtDCInfo e_emlrtDCI{
    29,              // lineNo
    20,              // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    4               // checkKind
};

static emlrtDCInfo f_emlrtDCI{
    8,       // lineNo
    4,       // colNo
    "confa", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "confa.m", // pName
    1          // checkKind
};

static emlrtBCInfo v_emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    11,      // lineNo
    15,      // colNo
    "xishu", // aName
    "confa", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "confa.m", // pName
    0          // checkKind
};

static emlrtBCInfo w_emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    11,      // lineNo
    17,      // colNo
    "xishu", // aName
    "confa", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "confa.m", // pName
    0          // checkKind
};

static emlrtDCInfo g_emlrtDCI{
    29,              // lineNo
    1,               // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    4               // checkKind
};

static emlrtBCInfo x_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    35,              // lineNo
    75,              // colNo
    "z",             // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo y_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    35,              // lineNo
    80,              // colNo
    "z",             // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo ab_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    34,              // lineNo
    13,              // colNo
    "omega",         // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo bb_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    34,              // lineNo
    18,              // colNo
    "omega",         // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo cb_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    53,              // lineNo
    7,               // colNo
    "Xb",            // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo db_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    58,              // lineNo
    15,              // colNo
    "Xb",            // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo eb_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    58,              // lineNo
    7,               // colNo
    "Xb",            // aName
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m", // pName
    0               // checkKind
};

static emlrtBCInfo fb_emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    11,      // lineNo
    17,      // colNo
    "xishu", // aName
    "confd", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "confd.m", // pName
    0          // checkKind
};

static emlrtBCInfo gb_emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    11,      // lineNo
    19,      // colNo
    "xishu", // aName
    "confd", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "confd.m", // pName
    0          // checkKind
};

static emlrtRTEInfo j_emlrtRTEI{
    13,                     // lineNo
    27,                     // colNo
    "assertCompatibleDims", // fName
    "D:\\MATLABR2022b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\assertCompatibleDims.m" // pName
};

static emlrtRTEInfo m_emlrtRTEI{
    8,       // lineNo
    4,       // colNo
    "confa", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "confa.m" // pName
};

static emlrtRTEInfo n_emlrtRTEI{
    25,              // lineNo
    4,               // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtRTEInfo o_emlrtRTEI{
    27,              // lineNo
    1,               // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtRTEInfo p_emlrtRTEI{
    29,              // lineNo
    1,               // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtRTEInfo q_emlrtRTEI{
    42,              // lineNo
    5,               // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtRTEInfo r_emlrtRTEI{
    45,              // lineNo
    5,               // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtRTEInfo s_emlrtRTEI{
    49,              // lineNo
    16,              // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtRTEInfo t_emlrtRTEI{
    49,              // lineNo
    5,               // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtRTEInfo u_emlrtRTEI{
    51,              // lineNo
    6,               // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtRTEInfo v_emlrtRTEI{
    62,              // lineNo
    13,              // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtRTEInfo w_emlrtRTEI{
    7,       // lineNo
    5,       // colNo
    "confd", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "confd.m" // pName
};

static emlrtRTEInfo x_emlrtRTEI{
    63,              // lineNo
    21,              // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtRTEInfo y_emlrtRTEI{
    63,              // lineNo
    41,              // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtRTEInfo ab_emlrtRTEI{
    52,                                                             // lineNo
    9,                                                              // colNo
    "div",                                                          // fName
    "D:\\MATLABR2022b\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" // pName
};

static emlrtRTEInfo bb_emlrtRTEI{
    64,              // lineNo
    21,              // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtRTEInfo cb_emlrtRTEI{
    64,              // lineNo
    49,              // colNo
    "my_cfukrngm_2", // fName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pName
};

static emlrtRTEInfo sb_emlrtRTEI{
    76,                  // lineNo
    13,                  // colNo
    "eml_mtimes_helper", // fName
    "D:\\MATLABR2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m" // pName
};

static emlrtRSInfo id_emlrtRSI{
    27,              // lineNo
    "my_cfukrngm_2", // fcnName
    "C:"
    "\\Users\\Desktop\\\xe8\xae\xba\xe6\x96\x87\xe5\x9f\xb9\xe8\xae\xad"
    "\\\xe5\x8d\x81\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\\"
    "n"
    "ew "
    "code\\code\\\xe6\x96\xb0\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\\"
    "my_"
    "cfukrngm_2.m" // pathName
};

// Function Declarations
static void
binary_expand_op(const emlrtStack *sp, coder::array<real_T, 2U> &in1,
                 const emlrtRSInfo in2, const coder::array<real_T, 2U> &in3,
                 const coder::array<real_T, 2U> &in4, int32_T in5, int32_T in6);

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 1U> &in2, int32_T in3,
                             int32_T in4, const coder::array<real_T, 2U> &in5,
                             int32_T in6, int32_T in7);

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const emlrtRSInfo in2,
                             const coder::array<real_T, 2U> &in3,
                             const coder::array<real_T, 2U> &in4, int32_T in5);

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 1U> &in2, int32_T in3,
                             const coder::array<real_T, 2U> &in4, int32_T in5);

static void binary_expand_op(
    const emlrtStack *sp, coder::array<real_T, 1U> &in1, const emlrtRSInfo in2,
    const coder::array<real_T, 2U> &in3, const coder::array<real_T, 2U> &in4,
    const coder::array<real_T, 1U> &in5, int32_T in6, int32_T in7, int32_T in8);

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 1U> &in2, int32_T in3,
                             int32_T in4, int32_T in5);

// Function Definitions
static void
binary_expand_op(const emlrtStack *sp, coder::array<real_T, 2U> &in1,
                 const emlrtRSInfo in2, const coder::array<real_T, 2U> &in3,
                 const coder::array<real_T, 2U> &in4, int32_T in5, int32_T in6)
{
  coder::array<real_T, 2U> b_in3;
  emlrtStack st;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if ((in6 - in5) + 1 == 1) {
    i = in3.size(1);
  } else {
    i = (in6 - in5) + 1;
  }
  b_in3.set_size(&ab_emlrtRTEI, sp, 1, i);
  stride_0_1 = (in3.size(1) != 1);
  stride_1_1 = ((in6 - in5) + 1 != 1);
  if ((in6 - in5) + 1 == 1) {
    loop_ub = in3.size(1);
  } else {
    loop_ub = (in6 - in5) + 1;
  }
  for (i = 0; i < loop_ub; i++) {
    b_in3[i] = in3[i * stride_0_1] / in4[in5 + i * stride_1_1];
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::b_abs(&st, b_in3, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 1U> &in2, int32_T in3,
                             int32_T in4, const coder::array<real_T, 2U> &in5,
                             int32_T in6, int32_T in7)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  if (in7 - in6 == 1) {
    i = in4 - in3;
  } else {
    i = in7 - in6;
  }
  in1.set_size(&bb_emlrtRTEI, sp, 1, i);
  stride_0_1 = (in4 - in3 != 1);
  stride_1_1 = (in7 - in6 != 1);
  if (in7 - in6 == 1) {
    loop_ub = in4 - in3;
  } else {
    loop_ub = in7 - in6;
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = in2[in3 + i * stride_0_1] - in5[in6 + i * stride_1_1];
  }
}

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const emlrtRSInfo in2,
                             const coder::array<real_T, 2U> &in3,
                             const coder::array<real_T, 2U> &in4, int32_T in5)
{
  coder::array<real_T, 2U> b_in3;
  emlrtStack st;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in5 + 1 == 1) {
    i = in3.size(1);
  } else {
    i = in5 + 1;
  }
  b_in3.set_size(&ab_emlrtRTEI, sp, 1, i);
  stride_0_1 = (in3.size(1) != 1);
  stride_1_1 = (in5 + 1 != 1);
  if (in5 + 1 == 1) {
    loop_ub = in3.size(1);
  } else {
    loop_ub = in5 + 1;
  }
  for (i = 0; i < loop_ub; i++) {
    b_in3[i] = in3[i * stride_0_1] / in4[i * stride_1_1];
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::b_abs(&st, b_in3, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 1U> &in2, int32_T in3,
                             const coder::array<real_T, 2U> &in4, int32_T in5)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  if (in5 == 1) {
    i = in3;
  } else {
    i = in5;
  }
  in1.set_size(&x_emlrtRTEI, sp, 1, i);
  stride_0_1 = (in3 != 1);
  stride_1_1 = (in5 != 1);
  if (in5 == 1) {
    loop_ub = in3;
  } else {
    loop_ub = in5;
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = in2[i * stride_0_1] - in4[i * stride_1_1];
  }
}

static void binary_expand_op(
    const emlrtStack *sp, coder::array<real_T, 1U> &in1, const emlrtRSInfo in2,
    const coder::array<real_T, 2U> &in3, const coder::array<real_T, 2U> &in4,
    const coder::array<real_T, 1U> &in5, int32_T in6, int32_T in7, int32_T in8)
{
  coder::array<real_T, 2U> b_in3;
  coder::array<real_T, 1U> b_in5;
  emlrtStack st;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in4.size(0) == 1) {
    i = in3.size(0);
  } else {
    i = in4.size(0);
  }
  if (in4.size(1) == 1) {
    i1 = in3.size(1);
  } else {
    i1 = in4.size(1);
  }
  b_in3.set_size(&q_emlrtRTEI, sp, i, i1);
  stride_0_0 = (in3.size(0) != 1);
  stride_0_1 = (in3.size(1) != 1);
  stride_1_0 = (in4.size(0) != 1);
  stride_1_1 = (in4.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in4.size(1) == 1) {
    loop_ub = in3.size(1);
  } else {
    loop_ub = in4.size(1);
  }
  for (i = 0; i < loop_ub; i++) {
    int32_T b_loop_ub;
    i1 = in4.size(0);
    if (i1 == 1) {
      b_loop_ub = in3.size(0);
    } else {
      b_loop_ub = i1;
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_in3[i1 + b_in3.size(0) * i] =
          in3[i1 * stride_0_0 + in3.size(0) * aux_0_1] +
          in4[i1 * stride_1_0 + in4.size(0) * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  if (in8 == 1) {
    i = in7 - in6;
  } else {
    i = in8;
  }
  b_in5.set_size(&r_emlrtRTEI, sp, i);
  stride_0_0 = (in7 - in6 != 1);
  stride_1_0 = (in8 != 1);
  if (in8 == 1) {
    loop_ub = in7 - in6;
  } else {
    loop_ub = in8;
  }
  for (i = 0; i < loop_ub; i++) {
    b_in5[i] = in5[in6 + i * stride_0_0] - in5[i * stride_1_0];
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::mldivide(&st, b_in3, b_in5, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 1U> &in2, int32_T in3,
                             int32_T in4, int32_T in5)
{
  coder::array<real_T, 2U> r;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in5 == 1) {
    i = in4 - in3;
  } else {
    i = in5;
  }
  r.set_size(&sb_emlrtRTEI, sp, 1, i);
  stride_0_1 = (in4 - in3 != 1);
  stride_1_1 = (in5 != 1);
  if (in5 == 1) {
    loop_ub = in4 - in3;
  } else {
    loop_ub = in5;
  }
  for (i = 0; i < loop_ub; i++) {
    r[i] = 0.5 * (in2[in3 + i * stride_0_1] + in2[i * stride_1_1]);
  }
  in1.set_size(&o_emlrtRTEI, sp, 1, r.size(1) + 1);
  in1[0] = 0.0;
  loop_ub = r.size(1);
  for (i = 0; i < loop_ub; i++) {
    in1[i + 1] = r[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void my_cfukrngm_2(const emlrtStack *sp, const struct0_T *param,
                   const coder::array<real_T, 2U> &x0, real_T n,
                   real_T *mapefit, real_T *mapepre,
                   coder::array<real_T, 1U> &Xb0)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  coder::array<real_T, 2U> In_1;
  coder::array<real_T, 2U> Xb;
  coder::array<real_T, 2U> b_a;
  coder::array<real_T, 2U> b_xishu;
  coder::array<real_T, 2U> r;
  coder::array<real_T, 2U> xishu;
  coder::array<real_T, 2U> z;
  coder::array<real_T, 1U> X;
  coder::array<real_T, 1U> x1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T a;
  real_T beta_tmp;
  real_T beta_tmp_tmp;
  real_T d;
  real_T sigma;
  real_T temp;
  real_T theta;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T b_i;
  int32_T b_n;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T k;
  int32_T loop_ub;
  int32_T tao;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  input:
  //     x0: 原始数据
  //     n: 用于建模的数据个数
  //     param：模型的超参数
  //  output:
  //      mape: 模型的mape误差
  //      Xb0：预测的数据，包括拟合和往后预测的数据
  //  Note that:
  //   这里是把数据分为两部分，即前面n个和后面的length(data)-n个
  //   这样做的目的是：后面留下来的数据是用于模型检验的，也就是说，我们用前面n个数据来建立模型，
  //   然后往后面预测length(data)-n步，以此来检验模型的预测精度
  //   param（1）是KerGauss核函数的sigma
  //   param（2）模型的惩罚参数gamma
  if (n < 1.0) {
    i = 0;
  } else {
    i = x0.size(0) * x0.size(1);
    if (i < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i, &s_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (n != static_cast<int32_T>(muDoubleScalarFloor(n))) {
      emlrtIntegerCheckR2012b(n, &emlrtDCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(n) < 1) || (static_cast<int32_T>(n) > i)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(n), 1, i, &r_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = static_cast<int32_T>(n);
  }
  iv[0] = 1;
  iv[1] = i;
  iv1[0] = (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&x0)->size())[0];
  iv1[1] = (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&x0)->size())[1];
  st.site = &emlrtRSI;
  coder::internal::indexShapeCheck(&st, iv1, iv);
  if ((x0.size(0) == 0) || (x0.size(1) == 0)) {
    b_n = 0;
  } else {
    i1 = x0.size(0);
    i2 = x0.size(1);
    b_n = muIntScalarMax_sint32(i1, i2);
  }
  sigma = param->sigma;
  theta = param->theta;
  //  累加
  //  x1 = cumsum(data);
  st.site = &b_emlrtRSI;
  // %% CFA conformable fractional accumulation
  // %% n--建模数据，r--分数阶, x--原始数据，这里x为列向量
  // function  confa(x,n,r)
  // ==========================================================================
  beta_tmp_tmp = muDoubleScalarCeil(param->alpha);
  beta_tmp = beta_tmp_tmp - param->alpha;
  // --------------------------------------------------------------------------
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &c_emlrtDCI, &st);
  }
  a = static_cast<int32_T>(muDoubleScalarFloor(n));
  if (n != a) {
    emlrtIntegerCheckR2012b(n, &b_emlrtDCI, &st);
  }
  xishu.set_size(&m_emlrtRTEI, &st, static_cast<int32_T>(n),
                 static_cast<int32_T>(n));
  if (n != a) {
    emlrtIntegerCheckR2012b(n, &f_emlrtDCI, &st);
  }
  loop_ub = static_cast<int32_T>(n) * static_cast<int32_T>(n);
  for (i1 = 0; i1 < loop_ub; i1++) {
    xishu[i1] = 0.0;
  }
  i1 = static_cast<int32_T>(n);
  for (b_i = 0; b_i < i1; b_i++) {
    // 行
    for (loop_ub = 0; loop_ub <= b_i; loop_ub++) {
      // 列
      a = (beta_tmp_tmp + (static_cast<real_T>(b_i) + 1.0)) -
          (static_cast<real_T>(loop_ub) + 1.0);
      coder::b_gamma(&a);
      temp = static_cast<real_T>(b_i - loop_ub) + 1.0;
      coder::b_gamma(&temp);
      d = beta_tmp_tmp;
      coder::b_gamma(&d);
      if ((b_i + 1 < 1) || (b_i + 1 > xishu.size(0))) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, xishu.size(0), &v_emlrtBCI,
                                      &st);
      }
      if ((loop_ub + 1 < 1) || (loop_ub + 1 > xishu.size(1))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, xishu.size(1),
                                      &w_emlrtBCI, &st);
      }
      b_st.site = &p_emlrtRSI;
      xishu[b_i + xishu.size(0) * loop_ub] =
          a /
          (temp * d *
           coder::mpower(&b_st, static_cast<real_T>(loop_ub) + 1.0, beta_tmp));
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  // --------------------------------------------------------------------------
  //  Aceilr=rats(xishu);
  // ==========================================================================
  if (n < 1.0) {
    loop_ub = 0;
  } else {
    if (i < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i, &t_emlrtBCI, &st);
    }
    if ((static_cast<int32_T>(n) < 1) || (static_cast<int32_T>(n) > i)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(n), 1, i, &u_emlrtBCI,
                                    &st);
    }
    loop_ub = static_cast<int32_T>(n);
  }
  b_st.site = &q_emlrtRSI;
  X.set_size(&n_emlrtRTEI, &b_st, loop_ub);
  for (i1 = 0; i1 < loop_ub; i1++) {
    X[i1] = x0[i1];
  }
  c_st.site = &u_emlrtRSI;
  coder::dynamic_size_checks(&c_st, xishu, X, xishu.size(1), loop_ub);
  c_st.site = &t_emlrtRSI;
  coder::internal::blas::mtimes(&c_st, xishu, X, x1);
  if (x1.size(0) < 2) {
    i1 = 0;
    i2 = 0;
  } else {
    i1 = 1;
    i2 = x1.size(0);
  }
  iv[0] = 1;
  loop_ub = i2 - i1;
  iv[1] = loop_ub;
  st.site = &c_emlrtRSI;
  coder::internal::indexShapeCheck(&st, x1.size(0), iv);
  if (x1.size(0) - 1 < 1) {
    i3 = 0;
  } else {
    if (x1.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, x1.size(0), &q_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if ((x1.size(0) - 1 < 1) || (x1.size(0) - 1 > x1.size(0))) {
      emlrtDynamicBoundsCheckR2012b(x1.size(0) - 1, 1, x1.size(0), &p_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i3 = x1.size(0) - 1;
  }
  iv[0] = 1;
  iv[1] = i3;
  st.site = &c_emlrtRSI;
  coder::internal::indexShapeCheck(&st, x1.size(0), iv);
  if ((loop_ub != i3) && ((loop_ub != 1) && (i3 != 1))) {
    emlrtDimSizeImpxCheckR2021b(loop_ub, i3, &f_emlrtECI, (emlrtConstCTX)sp);
  }
  if (loop_ub == i3) {
    z.set_size(&o_emlrtRTEI, sp, 1, loop_ub + 1);
    z[0] = 0.0;
    for (i2 = 0; i2 < loop_ub; i2++) {
      z[i2 + 1] = 0.5 * (x1[i1 + i2] + x1[i2]);
    }
  } else {
    st.site = &id_emlrtRSI;
    binary_expand_op(&st, z, x1, i1, i2, i3);
  }
  //  omega
  if (!(n - 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n - 1.0, &d_emlrtDCI, (emlrtConstCTX)sp);
  }
  xishu.set_size(&p_emlrtRTEI, sp, static_cast<int32_T>(n - 1.0),
                 xishu.size(1));
  if (!(n - 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n - 1.0, &e_emlrtDCI, (emlrtConstCTX)sp);
  }
  xishu.set_size(&p_emlrtRTEI, sp, xishu.size(0),
                 static_cast<int32_T>(n - 1.0));
  if (!(n - 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n - 1.0, &g_emlrtDCI, (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(n - 1.0) * static_cast<int32_T>(n - 1.0);
  for (i1 = 0; i1 < loop_ub; i1++) {
    xishu[i1] = 0.0;
  }
  st.site = &d_emlrtRSI;
  coder::eye(&st, n - 1.0, n - 1.0, In_1);
  i1 = static_cast<int32_T>(n);
  for (b_i = 0; b_i <= i1 - 2; b_i++) {
    i2 = static_cast<int32_T>(n);
    for (loop_ub = 0; loop_ub <= i2 - 2; loop_ub++) {
      st.site = &f_emlrtRSI;
      b_st.site = &r_emlrtRSI;
      if ((b_i + 2 < 1) || (b_i + 2 > z.size(1))) {
        emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, z.size(1), &x_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if ((loop_ub + 2 < 1) || (loop_ub + 2 > z.size(1))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub + 2, 1, z.size(1), &y_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if ((b_i + 1 < 1) || (b_i + 1 > xishu.size(0))) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, xishu.size(0), &ab_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if ((loop_ub + 1 < 1) || (loop_ub + 1 > xishu.size(1))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, xishu.size(1),
                                      &bb_emlrtBCI, (emlrtConstCTX)sp);
      }
      st.site = &e_emlrtRSI;
      xishu[b_i + xishu.size(0) * loop_ub] =
          ((((KerGauss(static_cast<real_T>(b_i) + 2.0,
                       static_cast<real_T>(loop_ub) + 2.0, sigma) +
              KerGauss((static_cast<real_T>(b_i) + 2.0) - 1.0,
                       static_cast<real_T>(loop_ub) + 2.0, sigma)) +
             KerGauss(static_cast<real_T>(b_i) + 2.0,
                      (static_cast<real_T>(loop_ub) + 2.0) - 1.0, sigma)) +
            KerGauss((static_cast<real_T>(b_i) + 2.0) - 1.0,
                     (static_cast<real_T>(loop_ub) + 2.0) - 1.0, sigma)) +
           4.0 * (theta * theta)) /
              4.0 +
          z[b_i + 1] * z[loop_ub + 1];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //
  //  I1 = ones(1, n-1)';
  //
  // A = [0, I1'; I1, omega+(gama^(-1))*In_1];
  st.site = &g_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  a = 1.0 / param->gama;
  loop_ub = In_1.size(0) * In_1.size(1);
  for (i1 = 0; i1 < loop_ub; i1++) {
    In_1[i1] = a * In_1[i1];
  }
  if ((xishu.size(0) != In_1.size(0)) &&
      ((xishu.size(0) != 1) && (In_1.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(xishu.size(0), In_1.size(0), &e_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if ((xishu.size(1) != In_1.size(1)) &&
      ((xishu.size(1) != 1) && (In_1.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(xishu.size(1), In_1.size(1), &d_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  //  Y
  //  Y = data(2:end)';
  if (x1.size(0) < 2) {
    i1 = 0;
    i2 = 0;
  } else {
    i1 = 1;
    i2 = x1.size(0);
  }
  iv[0] = 1;
  loop_ub = i2 - i1;
  iv[1] = loop_ub;
  st.site = &h_emlrtRSI;
  coder::internal::indexShapeCheck(&st, x1.size(0), iv);
  if (x1.size(0) - 1 < 1) {
    i3 = 0;
  } else {
    if (x1.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, x1.size(0), &o_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if ((x1.size(0) - 1 < 1) || (x1.size(0) - 1 > x1.size(0))) {
      emlrtDynamicBoundsCheckR2012b(x1.size(0) - 1, 1, x1.size(0), &n_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i3 = x1.size(0) - 1;
  }
  iv[0] = 1;
  iv[1] = i3;
  st.site = &h_emlrtRSI;
  coder::internal::indexShapeCheck(&st, x1.size(0), iv);
  if ((loop_ub != i3) && ((loop_ub != 1) && (i3 != 1))) {
    emlrtDimSizeImpxCheckR2021b(loop_ub, i3, &c_emlrtECI, (emlrtConstCTX)sp);
  }
  //  AX = Y
  if ((xishu.size(0) == In_1.size(0)) && (xishu.size(1) == In_1.size(1)) &&
      (loop_ub == i3)) {
    b_xishu.set_size(&q_emlrtRTEI, sp, xishu.size(0), xishu.size(1));
    b_i = xishu.size(0) * xishu.size(1);
    for (i2 = 0; i2 < b_i; i2++) {
      b_xishu[i2] = xishu[i2] + In_1[i2];
    }
    for (i2 = 0; i2 < loop_ub; i2++) {
      x1[i2] = x1[i1 + i2] - x1[i2];
    }
    x1.set_size(&r_emlrtRTEI, sp, loop_ub);
    st.site = &i_emlrtRSI;
    coder::mldivide(&st, b_xishu, x1, X);
  } else {
    st.site = &i_emlrtRSI;
    binary_expand_op(&st, X, i_emlrtRSI, xishu, In_1, x1, i1, i2, i3);
  }
  //  sum_lambda = sum(X(2:end))
  if (X.size(0) < 1) {
    loop_ub = 0;
  } else {
    loop_ub = X.size(0);
  }
  iv[0] = 1;
  iv[1] = loop_ub;
  st.site = &j_emlrtRSI;
  coder::internal::indexShapeCheck(&st, X.size(0), iv);
  if (z.size(1) < 2) {
    i1 = -1;
    i2 = -1;
  } else {
    i1 = 0;
    i2 = z.size(1) - 1;
  }
  b_i = i2 - i1;
  r.set_size(&s_emlrtRTEI, sp, 1, b_i);
  for (i2 = 0; i2 < b_i; i2++) {
    r[i2] = z[(i1 + i2) + 1];
  }
  st.site = &j_emlrtRSI;
  b_a.set_size(&t_emlrtRTEI, &st, 1, loop_ub);
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_a[i1] = -X[i1];
  }
  b_st.site = &u_emlrtRSI;
  if (b_a.size(1) != b_i) {
    if ((b_a.size(1) == 1) || (b_i == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &b_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  if (b_a.size(1) < 1) {
    a = 0.0;
  } else {
    n_t = (ptrdiff_t)b_a.size(1);
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    a = ddot(&n_t, &b_a[0], &incx_t, &r[0], &incy_t);
  }
  //
  Xb.set_size(&u_emlrtRTEI, sp, 1, b_n);
  for (k = 0; k < b_n; k++) {
    if (i < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i, &m_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (k + 1 > Xb.size(1)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, Xb.size(1), &cb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Xb[k] =
        x0[0] * muDoubleScalarExp(-a * ((static_cast<real_T>(k) + 1.0) - 1.0));
    temp = 0.0;
    for (tao = 0; tao < k; tao++) {
      b_i = (k - tao) - 1;
      st.site = &k_emlrtRSI;
      temp += 0.5 *
              (muDoubleScalarExp(-a * static_cast<real_T>(b_i)) *
                   UPhi(&st, X, static_cast<real_T>(tao) + 2.0, theta, sigma) +
               muDoubleScalarExp(-a * (static_cast<real_T>(b_i) + 1.0)) *
                   UPhi(&st, X, (static_cast<real_T>(tao) + 2.0) - 1.0, theta,
                        sigma));
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if (k + 1 > Xb.size(1)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, Xb.size(1), &db_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (k + 1 > Xb.size(1)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, Xb.size(1), &eb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Xb[k] = Xb[k] + temp;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  % Xb0 = FAGOI(Xb, param(6))';
  //  Xb0 = [data(1), Xb(2:end) - Xb(1:end-1)];
  st.site = &l_emlrtRSI;
  X.set_size(&v_emlrtRTEI, &st, Xb.size(1));
  loop_ub = Xb.size(1);
  for (i = 0; i < loop_ub; i++) {
    X[i] = Xb[i];
  }
  // %% CFD conformable fractional differential
  // %% n--建模数据，r--分数阶, x--原始数据，这里x为列向量
  // function  confd(x,n,r)
  // ==========================================================================
  xishu.set_size(&w_emlrtRTEI, &st, b_n, b_n);
  loop_ub = b_n * b_n;
  for (i = 0; i < loop_ub; i++) {
    xishu[i] = 0.0;
  }
  for (b_i = 0; b_i < b_n; b_i++) {
    //  row
    for (loop_ub = 0; loop_ub <= b_i; loop_ub++) {
      //  column
      // xishu(i,j)=((-1)^(j-i))*gamma(ceil(r)+1)/(gamma(j-i+1)*gamma(ceil(r)-j+i+1));
      a = beta_tmp_tmp + 1.0;
      coder::b_gamma(&a);
      temp = static_cast<real_T>(b_i - loop_ub) + 1.0;
      coder::b_gamma(&temp);
      d = ((beta_tmp_tmp - (static_cast<real_T>(b_i) + 1.0)) +
           (static_cast<real_T>(loop_ub) + 1.0)) +
          1.0;
      coder::b_gamma(&d);
      if (b_i + 1 > xishu.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, xishu.size(0), &fb_emlrtBCI,
                                      &st);
      }
      if (loop_ub + 1 > xishu.size(1)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, xishu.size(1),
                                      &gb_emlrtBCI, &st);
      }
      b_st.site = &uc_emlrtRSI;
      xishu[b_i + xishu.size(0) * loop_ub] =
          coder::mpower(&b_st, -1.0, static_cast<real_T>(b_i - loop_ub)) * a *
          coder::mpower(&b_st, static_cast<real_T>(b_i) + 1.0, beta_tmp) /
          (temp * d);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  // --------------------------------------------------------------------------
  //  Dceilr=rats(xishu);
  b_st.site = &vc_emlrtRSI;
  c_st.site = &u_emlrtRSI;
  coder::dynamic_size_checks(&c_st, xishu, X, xishu.size(1), X.size(0));
  c_st.site = &t_emlrtRSI;
  coder::internal::blas::mtimes(&c_st, xishu, X, Xb0);
  // --------------------------------------------------------------------------
  if (n < 1.0) {
    loop_ub = 0;
  } else {
    if (Xb0.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, Xb0.size(0), &l_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(n) < 1) ||
        (static_cast<int32_T>(n) > Xb0.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(n), 1, Xb0.size(0),
                                    &k_emlrtBCI, (emlrtConstCTX)sp);
    }
    loop_ub = static_cast<int32_T>(n);
  }
  iv[0] = 1;
  iv[1] = loop_ub;
  st.site = &m_emlrtRSI;
  coder::internal::indexShapeCheck(&st, Xb0.size(0), iv);
  if (n < 1.0) {
    i = 0;
  } else {
    i = x0.size(0) * x0.size(1);
    if (i < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i, &j_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(n) < 1) || (static_cast<int32_T>(n) > i)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(n), 1, i, &i_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = static_cast<int32_T>(n);
  }
  iv[0] = 1;
  iv[1] = i;
  iv1[0] = (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&x0)->size())[0];
  iv1[1] = (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&x0)->size())[1];
  st.site = &m_emlrtRSI;
  coder::internal::indexShapeCheck(&st, iv1, iv);
  if ((loop_ub != i) && ((loop_ub != 1) && (i != 1))) {
    emlrtDimSizeImpxCheckR2021b(loop_ub, i, &b_emlrtECI, (emlrtConstCTX)sp);
  }
  if (n < 1.0) {
    b_i = 0;
  } else {
    i1 = x0.size(0) * x0.size(1);
    if (i1 < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i1, &h_emlrtBCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(n) < 1) || (static_cast<int32_T>(n) > i1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(n), 1, i1, &g_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_i = static_cast<int32_T>(n);
  }
  iv[0] = 1;
  iv[1] = b_i;
  iv1[0] = (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&x0)->size())[0];
  iv1[1] = (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&x0)->size())[1];
  st.site = &m_emlrtRSI;
  coder::internal::indexShapeCheck(&st, iv1, iv);
  st.site = &m_emlrtRSI;
  if (loop_ub == i) {
    z.set_size(&x_emlrtRTEI, &st, 1, loop_ub);
    for (i = 0; i < loop_ub; i++) {
      z[i] = Xb0[i] - x0[i];
    }
  } else {
    b_st.site = &m_emlrtRSI;
    binary_expand_op(&b_st, z, Xb0, loop_ub, x0, i);
  }
  b_st.site = &wc_emlrtRSI;
  b_a.set_size(&y_emlrtRTEI, &b_st, 1, b_i);
  for (i = 0; i < b_i; i++) {
    b_a[i] = x0[i];
  }
  c_st.site = &xc_emlrtRSI;
  if ((z.size(1) != 1) && (b_a.size(1) != 1) && (z.size(1) != b_a.size(1))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &j_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  if (z.size(1) == b_i) {
    b_a.set_size(&ab_emlrtRTEI, sp, 1, z.size(1));
    loop_ub = z.size(1);
    for (i = 0; i < loop_ub; i++) {
      b_a[i] = z[i] / x0[i];
    }
    st.site = &m_emlrtRSI;
    coder::b_abs(&st, b_a, r);
  } else {
    st.site = &m_emlrtRSI;
    binary_expand_op(&st, r, m_emlrtRSI, z, x0, b_i - 1);
  }
  st.site = &m_emlrtRSI;
  *mapefit = coder::mean(&st, r);
  if (static_cast<uint32_T>(n) + 1U > static_cast<uint32_T>(Xb0.size(0))) {
    i = 0;
    i1 = 0;
  } else {
    if ((static_cast<int32_T>(static_cast<uint32_T>(n) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(n) + 1U) > Xb0.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(n) + 1U), 1, Xb0.size(0),
          &f_emlrtBCI, (emlrtConstCTX)sp);
    }
    i = static_cast<int32_T>(static_cast<uint32_T>(n));
    if (Xb0.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(Xb0.size(0), 1, Xb0.size(0), &e_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i1 = Xb0.size(0);
  }
  iv[0] = 1;
  loop_ub = i1 - i;
  iv[1] = loop_ub;
  st.site = &n_emlrtRSI;
  coder::internal::indexShapeCheck(&st, Xb0.size(0), iv);
  i2 = x0.size(0) * x0.size(1);
  if (n + 1.0 > i2) {
    b_n = 0;
    i2 = 0;
  } else {
    i3 = x0.size(0) * x0.size(1);
    if ((static_cast<int32_T>(static_cast<uint32_T>(n) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(n) + 1U) > i3)) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(n) + 1U), 1, i3,
          &d_emlrtBCI, (emlrtConstCTX)sp);
    }
    b_n = static_cast<int32_T>(static_cast<uint32_T>(n));
    if (i2 > i3) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i3, &c_emlrtBCI, (emlrtConstCTX)sp);
    }
  }
  iv[0] = 1;
  i3 = i2 - b_n;
  iv[1] = i3;
  iv1[0] = (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&x0)->size())[0];
  iv1[1] = (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&x0)->size())[1];
  st.site = &n_emlrtRSI;
  coder::internal::indexShapeCheck(&st, iv1, iv);
  if ((loop_ub != i3) && ((loop_ub != 1) && (i3 != 1))) {
    emlrtDimSizeImpxCheckR2021b(loop_ub, i3, &emlrtECI, (emlrtConstCTX)sp);
  }
  k = x0.size(0) * x0.size(1);
  if (n + 1.0 > k) {
    tao = 0;
    k = 0;
  } else {
    b_i = x0.size(0) * x0.size(1);
    if ((static_cast<int32_T>(static_cast<uint32_T>(n) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(n) + 1U) > b_i)) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(n) + 1U), 1, b_i,
          &b_emlrtBCI, (emlrtConstCTX)sp);
    }
    tao = static_cast<int32_T>(static_cast<uint32_T>(n));
    if (k > b_i) {
      emlrtDynamicBoundsCheckR2012b(k, 1, b_i, &emlrtBCI, (emlrtConstCTX)sp);
    }
  }
  iv[0] = 1;
  b_i = k - tao;
  iv[1] = b_i;
  iv1[0] = (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&x0)->size())[0];
  iv1[1] = (*(int32_T(*)[2])((coder::array<real_T, 2U> *)&x0)->size())[1];
  st.site = &n_emlrtRSI;
  coder::internal::indexShapeCheck(&st, iv1, iv);
  st.site = &n_emlrtRSI;
  if (loop_ub == i3) {
    z.set_size(&bb_emlrtRTEI, &st, 1, loop_ub);
    for (i1 = 0; i1 < loop_ub; i1++) {
      z[i1] = Xb0[i + i1] - x0[b_n + i1];
    }
  } else {
    b_st.site = &n_emlrtRSI;
    binary_expand_op(&b_st, z, Xb0, i, i1, x0, b_n, i2);
  }
  b_st.site = &wc_emlrtRSI;
  b_a.set_size(&cb_emlrtRTEI, &b_st, 1, b_i);
  for (i = 0; i < b_i; i++) {
    b_a[i] = x0[tao + i];
  }
  c_st.site = &xc_emlrtRSI;
  if ((z.size(1) != 1) && (b_a.size(1) != 1) && (z.size(1) != b_a.size(1))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &j_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  if (z.size(1) == b_i) {
    b_a.set_size(&ab_emlrtRTEI, sp, 1, z.size(1));
    loop_ub = z.size(1);
    for (i = 0; i < loop_ub; i++) {
      b_a[i] = z[i] / x0[tao + i];
    }
    st.site = &n_emlrtRSI;
    coder::b_abs(&st, b_a, r);
  } else {
    st.site = &n_emlrtRSI;
    binary_expand_op(&st, r, n_emlrtRSI, z, x0, tao, k - 1);
  }
  st.site = &n_emlrtRSI;
  *mapepre = coder::mean(&st, r);
  //  tol = 1*n;
  //  smapefit = zeros(tol,1);
  //  for i = 1:tol
  //      randomNumber = randi([1, N]); % 随机选择1到N之间的一个整数
  //      % randomNumber = randi(N,1,2)
  //      smapefit(i) =
  //      mean(abs((Xb0(randomNumber)-x0(randomNumber))./x0(randomNumber)));%随机MAPE
  //      mapefit = mean(smapefit);
  //  end
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}
