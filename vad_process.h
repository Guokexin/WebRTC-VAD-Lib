/*************************************************************************************/
/********************Author Kevin.Guo*************************************************/
/********************Date: 2019.8.8 **************************************************/
/********************Des: libvad *****************************************************/
/*************************************************************************************/


//读取wav文件
int16_t *wavRead_int16(char *filename, uint32_t *sampleRate, uint64_t *totalSampleCount);
//读取PCM文件
int16_t *pcmRead_int16(char* filename, uint32_t* sampleRate, uint64_t* totalSampleCount);
int vadProcess(int16_t *buffer, uint32_t sampleRate, size_t samplesCount, int16_t vad_mode, int per_ms_frames);
void vad(char *in_file, char* type);

