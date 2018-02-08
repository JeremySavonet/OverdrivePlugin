// Copyrights (c) 2018 Jeremy Savonet

#ifndef GAIN_PLUGIN_PROCESSOR_HPP_
#define GAIN_PLUGIN_PROCESSOR_HPP_

#include "../JuceLibraryCode/JuceHeader.h"

#include "Distortion.hpp"

namespace CustomPlugin {

class GainPluginProcessor : public AudioProcessor
{
public:
    GainPluginProcessor();

    void prepareToPlay( double sampleRate, int samplesPerBlock ) override;
    void releaseResources() override;

#ifndef JucePlugin_PreferredChannelConfigurations

    bool isBusesLayoutSupported( const BusesLayout& layouts ) const override;

#endif
    bool isInputChannelStereoPair( int index ) const override;
    bool isOutputChannelStereoPair( int index ) const override;


    void processBlock(
        AudioSampleBuffer& sampleBuffer,
        MidiBuffer& midiBuffer ) override;

    AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    const String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool isMidiEffect () const override;
    double getTailLengthSeconds() const override;

    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram( int index ) override;
    const String getProgramName( int index ) override;
    void changeProgramName( int index, const String& newName ) override;

    void getStateInformation( MemoryBlock& destData ) override;
    void setStateInformation( const void* data, int sizeInBytes ) override;

    void setDrive( float drive );
    void setVolume( float threshold );
    void setMix( float mix );

private:
    ScopedPointer< Distortion > _processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR( GainPluginProcessor )
};

}

#endif // GAIN_PLUGIN_PROCESSOR_HPP_
