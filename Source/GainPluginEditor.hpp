// Copyrights (c) 2018 Jeremy Savonet

#ifndef GAIN_PLUGIN_EDITOR_HPP_
#define GAIN_PLUGIN_EDITOR_HPP_

#include "../JuceLibraryCode/JuceHeader.h"

namespace CustomPlugin {

class GainPluginProcessor;

class GainPluginEditor
    : public AudioProcessorEditor
    , private Slider::Listener
    , private Button::Listener
{
public:
    GainPluginEditor( GainPluginProcessor& processor );

    void paint( Graphics& graphic ) override;
    void resized() override;

private:
    void sliderValueChanged( Slider* slider ) override;

    void buttonStateChanged( Button* button ) override;
    void buttonClicked( Button* button ) override;

    void initControls();
    void paintControls( Graphics& graphic );

private:
    GainPluginProcessor& _processor;

    // Control panel
    GroupComponent _potGroup;
    Slider _pot1; // Drive
    Slider _pot2; // Threshold
    Slider _pot3; // Mix

    Label _pot1Label;
    Label _pot2Label;
    Label _pot3Label;

    ToggleButton _btn1;
    Label _btn1Label;

    // Master panel
    Slider _gain; // Unused now

    Label _gainLabel;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR( GainPluginEditor )
};

}

#endif // GAIN_PLUGIN_EDITOR_HPP_
