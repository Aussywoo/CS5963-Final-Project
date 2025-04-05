#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "StormLib.h"

int main(int argc, char *argv[])
{
   char *fuzzData = argv[1];

   HANDLE SFileOpenArchivevar0;
    memset(&SFileOpenArchivevar0, 0, (sizeof SFileOpenArchivevar0));

   bool SFileOpenArchiveval1 = SFileOpenArchive(fuzzData, strlen(fuzzData), 0, &SFileOpenArchivevar0);
    if(strcmp(argv[1], fuzzData)){
        fprintf(stderr, "err");
        exit(0);    }
    if(SFileOpenArchiveval1 < 1){
        fprintf(stderr, "err");
        exit(0);    }
   bool SFileAddWaveval1 = SFileAddWave(SFileOpenArchivevar0, fuzzData, fuzzData, strlen(fuzzData), 1);
    if(strcmp(argv[1], fuzzData)){
        fprintf(stderr, "err");
        exit(0);    }
    if(SFileAddWaveval1 < 1){
        fprintf(stderr, "err");
        exit(0);    }
   bool SFileRemoveFileval1 = SFileRemoveFile(SFileOpenArchivevar0, fuzzData, strlen(fuzzData));
    if(strcmp(argv[1], fuzzData)){
        fprintf(stderr, "err");
        exit(0);    }
    if(SFileRemoveFileval1 < 1){
        fprintf(stderr, "err");
        exit(0);    }
   DWORD SFileVerifyArchiveval1 = SFileVerifyArchive(SFileOpenArchivevar0);
    if(SFileVerifyArchiveval1 < 0){
        fprintf(stderr, "err");
        exit(0);    }
   return 0;
}