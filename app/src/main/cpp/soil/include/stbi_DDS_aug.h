/*
	adding DDS loading support to stbi
*/

#ifndef HEADER_STB_IMAGE_DDS_AUGMENTATION
#define HEADER_STB_IMAGE_DDS_AUGMENTATION

//	is it a DDS file?
extern int      stbi_dds_test_memory      (stbi_uc const *buffer, int len);

extern stbi_uc *stbi_dds_load             (AAssetManager *mgr, char *filename, int *x, int *y, int *comp, int req_comp);
extern stbi_uc *stbi_dds_load_from_memory (stbi_uc const *buffer, int len, int *x, int *y, int *comp, int req_comp);
#ifndef STBI_NO_STDIO
extern int      stbi_dds_test_file        (AAsset *asset);
extern stbi_uc *stbi_dds_load_from_file   (AAsset *asset,         int *x, int *y, int *comp, int req_comp);
#endif

//
//
////   end header file   /////////////////////////////////////////////////////
#endif // HEADER_STB_IMAGE_DDS_AUGMENTATION
