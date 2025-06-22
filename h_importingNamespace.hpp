// namespace called CodecademyMath:

namespace CodecademyMath{
    double square(int num){
        return num * num;
    }

    double cube(int num){
        return num * num * num;
    }

    double pow(int num, int expo){
        int ret = 1;
        for(int i = 0; i < expo; i++){
            ret *= num;
        }
        return ret;
    }
}