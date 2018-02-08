// Copyrights (c) 2018 Jeremy Savonet

#include <cmath>

#include "Distortion.hpp"

using namespace CustomPlugin;

Distortion::Distortion()
    : _drive( 1.0f )
    , _volume( 0.0f )
    , _mix( 0.0f )
{
}

float Distortion::processSample( float sample )
{
    float output;

    if( sample < 0.0f )
    {
        output = ( ( ( -sqrt( -sample ) - sample ) * _drive ) + sample ) * ( 1.0 - ( ( _drive / 4.0 ) * 0.5f ) );
    }
    else
    {
        output = ( ( ( sqrt( sample ) - sample ) * _drive ) + sample ) * ( 1.0 - ( ( _drive / 4.0 ) * 0.5f ) );
    }

    output *= _volume;

    return ( 1.f - _mix ) * sample + _mix * output;
}

void Distortion::setDrive( float drive )
{
    _drive = drive;
}

void Distortion::setVolume( float volume )
{
    _volume = volume;
}

void Distortion::setMix( float mix )
{
    _mix = mix;
}
