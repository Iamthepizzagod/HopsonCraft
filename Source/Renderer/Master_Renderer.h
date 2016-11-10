#ifndef MASTER_RENDERER_H
#define MASTER_RENDERER_H

#include "Chunk_Renderer.h"
#include "Water_Renderer.h"
#include "Flora_Renderer.h"

class Chunk;
class Camera;

class Master_Renderer
{
    public:
        void processChunk (const Chunk& chunk);

        void render (const Camera& camera);

    private:
        Chunk_Renderer m_chunkRenderer;
        Water_Renderer m_waterRenderer;
        Flora_Renderer m_floraRender;
};

#endif // MASTER_RENDERER_H
