#ifndef MESHQUAD_H
#define MESHQUAD_H

#include "mesh.h"


class MeshQuad : public Mesh {

public:
    MeshQuad();
    ~MeshQuad();


    void recreate();

public:
    void createMesh();

};


#endif
