// Copyrights (c) 2018 Jeremy Savonet

#include <iostream>

#include "GainPluginEditor.hpp"
#include "GainPluginProcessor.hpp"

using namespace CustomPlugin;

GainPluginProcessor::GainPluginProcessor()
     : AudioProcessor(
        BusesProperties()
            .withInput( "Input", AudioChannelSet::stereo(), true )
            .withOutput( "Output", AudioChannelSet::stereo(), true ) )
{
    _processor = new Distortion();
}

const String GainPluginProcessor::getName() const
{
    return "Test Controls - V1.0";
}

bool GainPluginProcessor::acceptsMidi() const
{
    return false;
}

bool GainPluginProcessor::producesMidi() const
{
    return false;
}

bool GainPluginProcessor::isMidiEffect() const
{
    return false;
}

double GainPluginProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

int GainPluginProcessor::getNumPrograms()
{
    return 1;
}

int GainPluginProcessor::getCurrentProgram()
{
    return 0;
}

void GainPluginProcessor::setCurrentProgram( int index )
{
}

const String GainPluginProcessor::getProgramName( int index )
{
    return "Test Controls - V1.0";
}

void GainPluginProcessor::changeProgramName( int index, const String& newName )
{
}

void GainPluginProcessor::prepareToPlay(
    double sampleRate,
    int samplesPerBlock )
{
}

void GainPluginProcessor::releaseResources()
{
}

bool GainPluginProcessor::isBusesLayoutSupported(
    const BusesLayout& layouts ) const
{
    return
        ( layouts.getMainInputChannelSet() == layouts.getMainOutputChannelSet()
        && ( ! layouts.getMainInputChannelSet().isDisabled() ) );
}

bool GainPluginProcessor::isInputChannelStereoPair( int index ) const
{
    return false;
}

bool GainPluginProcessor::isOutputChannelStereoPair( int index ) const
{
    return false;
}

void GainPluginProcessor::processBlock(
    AudioSampleBuffer& buffer,
    MidiBuffer& midiMessages )
{
    int numSamples = buffer.getNumSamples();

    // Distortion plugin
    for( int i = 0; i < numSamples; ++i )
    {
        float sample = *buffer.getReadPointer( 1, i );

        sample = _processor->processSample( sample );

        for( int j = 0; j < buffer.getNumChannels(); ++j )
        {
            *buffer.getWritePointer( j, i ) = sample;
        }
    }
}

bool GainPluginProcessor::hasEditor() const
{
    return true;
}

AudioProcessorEditor* GainPluginProcessor::createEditor()
{
    return new GainPluginEditor( *this );
}

void GainPluginProcessor::getStateInformation( MemoryBlock& destData )
{
}

void GainPluginProcessor::setStateInformation(
    const void* data, int sizeInBytes )
{
}

// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new GainPluginProcessor();
}

void GainPluginProcessor::setDrive( float drive )
{
    _processor->setDrive( drive );
}

void GainPluginProcessor::setVolume( float volume )
{
    _processor->setVolume( volume );
}

void GainPluginProcessor::setMix( float mix )
{
    _processor->setMix( mix );
}
