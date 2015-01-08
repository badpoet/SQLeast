#ifndef SM_CATALOG_H
#define SM_CATALOG_H

#include "sqleast.h"

namespace sqleast {
    namespace sm {

        struct DataAttrInfo {
            char relName[MAX_NAME_LENGTH + 1];
            char attrName[MAX_NAME_LENGTH + 1];
            int offset;
            AttrType attrType;
            int attrLength;
            int nullable;
            int nullBitOffset;
            int nullBitMask;
            int indexNo;
        };

        struct AttrInfo {
            char *attrName;
            AttrType attrType;
            int attrLength;
            int nullable;
        };

        struct RelInfo {
            char relName[MAX_NAME_LENGTH + 1];
            int tupleLength;
            int bitmapSize;
            int attrCount;
            int indexCount;
        };

    }
}

#endif