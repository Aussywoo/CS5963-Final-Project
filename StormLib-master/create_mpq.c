#include <StormLib.h>
#include <stdio.h>

int main() {
    // Create new MPQ archive
    HANDLE hMpq;
    if(!SFileCreateArchive("test.mpq", MPQ_CREATE_LISTFILE | MPQ_CREATE_ATTRIBUTES, 1, &hMpq)) {
        printf("Error creating archive\n");
        return 1;
    }

    // Add a small file
    const char* content = "test content";
    if(!SFileAddFile(hMpq, "test.txt", content, MPQ_FILE_COMPRESS | MPQ_FILE_REPLACEEXISTING)) {
        printf("Error adding file\n");
    }

    SFileCloseArchive(hMpq);
    return 0;
}