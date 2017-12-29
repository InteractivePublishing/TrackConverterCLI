struct TVHeader {
    char id_string[6];
    short int dim[3];
    float voxel_size[3];
    float origin[3];
    short int n_scalars;
    char scalar_name[10][20];
    short int n_properties;
    char property_name[10][20];
    float vox_to_ras[4][4];
    char reserved[444];
    char voxel_order[4];
    char pad2[4];
    float image_orientation_patient[6];
    char pad1[2];
    unsigned char invert_x;
    unsigned char invert_y;
    unsigned char swap_xy;
    unsigned char swap_yz;
    unsigned char swap_sx;
    int n_count;
    int version;
    int hdr_size;
};

#define TV_TRACK_NUMPTS 3
#define TV_HEADERLEN sizeof(TVHeader)

typedef void TrackVisReader;

extern "C" {
// methods
int tv_reader_load(const char *filename, const char* out);
} // end extern "C"
