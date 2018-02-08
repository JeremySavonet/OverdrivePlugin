// Copyrights (c) 2018 Jeremy Savonet

#ifndef DISTORTION_HPP_
#define DISTORTION_HPP_

namespace CustomPlugin {

class Distortion
{
public:
    Distortion();

    float processSample( float sample );

    void setDrive( float drive );
    void setVolume( float threshold );
    void setMix( float mix );

private:
    float _drive;
    float _volume;
    float _mix;
};

}

#endif // DISTORTION_HPP_
