//
// Created by cao on 19-10-26.
//

#ifndef CTDET_TRT_CTDETCONFIG_H
#define CTDET_TRT_CTDETCONFIG_H

namespace ctdet{



    constexpr static float visThresh = 0.3;

    constexpr static int inputSize = 512 ;
    constexpr static int channel = 3 ;
    constexpr static int ouputSize = inputSize/4 ;
    constexpr static int kernelSize = 4 ;


    //cthelmet
//    constexpr static int classNum = 2 ;
//    constexpr static float mean[]= {0.485,0.456,0.406};
//    constexpr static float std[] = {0.229,0.224,0.225};
//    constexpr static char *className[]= {(char*)"person",(char*)"helmet"};
    //ctface
    constexpr static int classNum = 1 ;
    constexpr static float mean[]= {0,0,0};
    constexpr static float std[] = {1,1,1};
    constexpr static char *className[]= {(char*)"face"};

}
#endif //CTDET_TRT_CTDETCONFIG_H
