#ifndef RPPI_ARITHMETIC_OPERATIONS
#define RPPI_ARITHMETIC_OPERATIONS
 
#include "rppdefs.h"
#ifdef __cplusplus
extern "C" {
#endif


// ----------------------------------------
// Host absolute_difference functions declaration 
// ----------------------------------------
/* Computes the absolute difference between two images.
*param[in] srcPtr1 input image1
*param[in] srcPtr2 input image2 
*param[in] srcSize dimensions of the images
*param[out] dstPtr output image
*returns a  RppStatus enumeration. 
*retval RPP_SUCCESS : No error succesful completion
*retval RPP_ERROR : Error 
*/

RppStatus
rppi_absolute_difference_u8_pln1_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr);

RppStatus
rppi_absolute_difference_u8_pln3_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr);

RppStatus
rppi_absolute_difference_u8_pkd3_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr);

// ----------------------------------------
// Host accumulate_weighted functions declaration 
// ----------------------------------------
/* Accumulates a weighted value from  input images and stores it in the first input image.
*param[in/out] srcPtr1 input image where the accumulated value will be stored
*param[in] srcPtr2 input image
*param[in] srcSize dimensions of the images
*param[in] alpha weight float value which should range between 0 - 1
*returns a  RppStatus enumeration. 
*retval RPP_SUCCESS : No error succesful completion
*retval RPP_ERROR : Error 
*/

RppStatus
rppi_accumulate_weighted_u8_pln1_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,Rpp64f alpha);

RppStatus
rppi_accumulate_weighted_u8_pln3_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,Rpp64f alpha);

RppStatus
rppi_accumulate_weighted_u8_pkd3_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,Rpp64f alpha);

// ----------------------------------------
// Host accumulate functions declaration 
// ----------------------------------------
/* Computes the accumulation between two input images and stores it in the first input image.
*param[in/out] srcPtr1 input image1
*param[in] srcPtr2 input image2 
*param[in] srcSize dimensions of the images
*returns a  RppStatus enumeration. 
*retval RPP_SUCCESS : No error succesful completion
*retval RPP_ERROR : Error 
*/

RppStatus
rppi_accumulate_u8_pln1_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize);

RppStatus
rppi_accumulate_u8_pln3_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize);

RppStatus
rppi_accumulate_u8_pkd3_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize);

// ----------------------------------------
// Host add functions declaration 
// ----------------------------------------
/* Computes the addition between two images.
*param[in] srcPtr1 input image1
*param[in] srcPtr2 input image2 
*param[in] srcSize dimensions of the images
*param[out] dstPtr output image
*returns a  RppStatus enumeration. 
*retval RPP_SUCCESS : No error succesful completion
*retval RPP_ERROR : Error 
*/

RppStatus
rppi_add_u8_pln1_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr);

RppStatus
rppi_add_u8_pln3_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr);

RppStatus
rppi_add_u8_pkd3_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr);

// ----------------------------------------
// Host subtract functions declaration 
// ----------------------------------------
/* Computes the subtraction between two images.
*param[in] srcPtr1 input image1
*param[in] srcPtr2 input image2 
*param[in] srcSize dimensions of the images
*param[out] dstPtr output image
*returns a  RppStatus enumeration. 
*retval RPP_SUCCESS : No error succesful completion
*retval RPP_ERROR : Error 
*/

RppStatus
rppi_subtract_u8_pln1_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr);

RppStatus
rppi_subtract_u8_pln3_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr);

RppStatus
rppi_subtract_u8_pkd3_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr);

// ----------------------------------------
// Host magnitude functions declaration 
// ----------------------------------------

RppStatus
rppi_magnitude_u8_pln1_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr);

RppStatus
rppi_magnitude_u8_pln3_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr);

RppStatus
rppi_magnitude_u8_pkd3_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr);

// ----------------------------------------
// Host multiply functions declaration 
// ----------------------------------------


RppStatus
rppi_multiply_u8_pln1_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr);

RppStatus
rppi_multiply_u8_pln3_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr);

RppStatus
rppi_multiply_u8_pkd3_host(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr);

// ----------------------------------------
// GPU absolute_difference functions declaration 
// ----------------------------------------
/* Computes the absolute difference between two images.
*param[in] srcPtr1 input image1
*param[in] srcPtr2 input image2 
*param[in] srcSize dimensions of the images
*param[out] dstPtr output image
*param[in] rppHandle OpenCL handle
*returns a  RppStatus enumeration. 
*retval RPP_SUCCESS : No error succesful completion
*retval RPP_ERROR : Error 
*/

RppStatus
rppi_absolute_difference_u8_pln1_gpu(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr, RppHandle_t rppHandle) ;

RppStatus
rppi_absolute_difference_u8_pln3_gpu(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr, RppHandle_t rppHandle) ;

RppStatus
rppi_absolute_difference_u8_pkd3_gpu(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr, RppHandle_t rppHandle) ;

// ----------------------------------------
// Host mean and standard deviation functions declaration 
// ----------------------------------------

RppStatus
rppi_mean_stddev_u8_pln1_host(RppPtr_t srcPtr1,RppiSize srcSize, Rpp32f *mean, Rpp32f *stddev);

RppStatus
rppi_mean_stddev_u8_pln3_host(RppPtr_t srcPtr1,RppiSize srcSize, Rpp32f *mean, Rpp32f *stddev);

RppStatus
rppi_mean_stddev_u8_pkd3_host(RppPtr_t srcPtr1,RppiSize srcSize, Rpp32f *mean, Rpp32f *stddev);

// ----------------------------------------
// GPU accumulate_weighted functions declaration 
// ----------------------------------------
/* Accumulates a weighted value from  input images and stores it in the first input image.
*param[in/out] srcPtr1 input image where the accumulated value will be stored
*param[in] srcPtr2 input image
*param[in] srcSize dimensions of the images
*param[in] alpha weight float value which should range between 0 - 1
*param[in] rppHandle OpenCL handle
*returns a  RppStatus enumeration. 
*retval RPP_SUCCESS : No error succesful completion
*retval RPP_ERROR : Error 
*/

RppStatus
rppi_accumulate_weighted_u8_pln1_gpu(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,Rpp64f alpha, RppHandle_t rppHandle) ;

RppStatus
rppi_accumulate_weighted_u8_pln3_gpu(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,Rpp64f alpha, RppHandle_t rppHandle) ;

RppStatus
rppi_accumulate_weighted_u8_pkd3_gpu(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,Rpp64f alpha, RppHandle_t rppHandle) ;

// ----------------------------------------
// GPU accumulate functions declaration 
// ----------------------------------------
/* Computes the accumulation between two input images and stores it in the first input image.
*param[in/out] srcPtr1 input image1
*param[in] srcPtr2 input image2 
*param[in] srcSize dimensions of the images
*param[in] rppHandle OpenCL handle
*returns a  RppStatus enumeration. 
*retval RPP_SUCCESS : No error succesful completion
*retval RPP_ERROR : Error 
*/

RppStatus
rppi_accumulate_u8_pln1_gpu(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize, RppHandle_t rppHandle) ;

RppStatus
rppi_accumulate_u8_pln3_gpu(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize, RppHandle_t rppHandle) ;

RppStatus
rppi_accumulate_u8_pkd3_gpu(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize, RppHandle_t rppHandle) ;

// ----------------------------------------
// GPU add functions declaration 
// ----------------------------------------
/* Computes the addition between two images.
*param[in] srcPtr1 input image1
*param[in] srcPtr2 input image2 
*param[in] srcSize dimensions of the images
*param[out] dstPtr output image
*param[in] rppHandle OpenCL handle
*returns a  RppStatus enumeration. 
*retval RPP_SUCCESS : No error succesful completion
*retval RPP_ERROR : Error 
*/

RppStatus
rppi_add_u8_pln1_gpu(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr, RppHandle_t rppHandle) ;

RppStatus
rppi_add_u8_pln3_gpu(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr, RppHandle_t rppHandle) ;

RppStatus
rppi_add_u8_pkd3_gpu(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr, RppHandle_t rppHandle) ;

// ----------------------------------------
// GPU subtract functions declaration 
// ----------------------------------------
/* Computes the subtraction between two images.
*param[in] srcPtr1 input image1
*param[in] srcPtr2 input image2 
*param[in] srcSize dimensions of the images
*param[out] dstPtr output image
*param[in] rppHandle OpenCL handle
*returns a  RppStatus enumeration. 
*retval RPP_SUCCESS : No error succesful completion
*retval RPP_ERROR : Error 
*/

RppStatus
rppi_subtract_u8_pln1_gpu(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr, RppHandle_t rppHandle) ;

RppStatus
rppi_subtract_u8_pln3_gpu(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr, RppHandle_t rppHandle) ;

RppStatus
rppi_subtract_u8_pkd3_gpu(RppPtr_t srcPtr1,RppPtr_t srcPtr2,RppiSize srcSize,RppPtr_t dstPtr, RppHandle_t rppHandle) ;
 
#ifdef __cplusplus
}
#endif
#endif
