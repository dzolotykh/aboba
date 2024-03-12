#ifndef SBC_ABSTRACTCHUNKER_H
#define SBC_ABSTRACTCHUNKER_H

#include <vector>
#include "Chunk.h"

namespace SBC {
    class AbstractChunker {
        virtual ChunkBatch get_batch() = 0;
    };
}

#endif
