// Copyrights (c) 2018 Jeremy Savonet

#include "GainPluginEditor.hpp"
#include "GainPluginProcessor.hpp"

using namespace CustomPlugin;

GainPluginEditor::GainPluginEditor(
    GainPluginProcessor& processor )
    : AudioProcessorEditor( & processor )
    , _processor( processor )
{
    // Plugin windows size
    setSize( 450, 500 );

    initControls();
}

void GainPluginEditor::paint( Graphics& g )
{
    paintControls( g );
}

void GainPluginEditor::resized()
{
    const int gainH = getHeight() - 80;
    _gain.setBounds( 40, 30, 20, gainH );

    const int potH = 80;
    const int potW = 80;
    const int height = gainH - _gain.getY() - 10;

    _potGroup.setBounds( 110, height - 30, 300, 130 );

    _pot1.setBounds( 120, height - 10, potH, potW );
    _pot2.setBounds( _pot1.getWidth() + _pot1.getX() + 20, height - 10, potH, potW );
    _pot3.setBounds( _pot2.getWidth() + _pot2.getX() + 20, height - 10, potH, potW );

    _btn1.setBounds( getWidth() - 50, 0, 60, 60 );
}

//
// Private methods
//

void GainPluginEditor::sliderValueChanged( Slider* slider )
{
    if( slider == & _pot1 )
    {
        _processor.setDrive(  slider->getValue() );
    }

    if( slider == & _pot2 )
    {
        _processor.setVolume( slider->getValue() );
    }

    if( slider == & _pot3 )
    {
        _processor.setMix( slider->getValue() );
    }
}
void GainPluginEditor::buttonStateChanged( Button* button )
{
    // DO NOTHING
}

void GainPluginEditor::buttonClicked( Button* button )
{
    // DO NOTHING
}

void GainPluginEditor::initControls()
{
    // Init listeners
    _pot1.addListener( this );
    _pot2.addListener( this );
    _pot3.addListener( this );
    _gain.addListener( this );
    _btn1.addListener( this );

    // Create the knob group
    _potGroup.setText( "Overdrive controls" );
    _potGroup.addChildComponent( _pot1 );
    _potGroup.addChildComponent( _pot2 );
    _potGroup.addChildComponent( _pot3 );

    // Attach labels
    _pot1Label.setText( "Drive", dontSendNotification );
    _pot1Label.attachToComponent( & _pot1, false );
    _pot1Label.setJustificationType( Justification::centred );
    _pot1Label.setCentrePosition( _pot1.getX() + ( _pot1.getWidth() / 2 ), _pot1.getY() + _pot1.getHeight() + 10 );

    _pot2Label.setText( "Volume", dontSendNotification );
    _pot2Label.attachToComponent( & _pot2, false );
    _pot2Label.setJustificationType( Justification::centred );
    _pot2Label.setCentrePosition( _pot2.getX() + ( _pot2.getWidth() / 2 ), _pot2.getY() + _pot2.getHeight() + 10 );

    _pot3Label.setText( "Mix", dontSendNotification );
    _pot3Label.attachToComponent( & _pot3, false );
    _pot3Label.setJustificationType( Justification::centred );
    _pot3Label.setCentrePosition( _pot3.getX() + ( _pot3.getWidth() / 2 ), _pot3.getY() + _pot3.getHeight() + 10 );

    _gainLabel.setText( "None", dontSendNotification );
    _gainLabel.attachToComponent( & _gain, false );
    _gainLabel.setJustificationType( Justification::centred );
    _gainLabel.setSize( _gainLabel.getWidth() + 20, _gainLabel.getHeight() );
    _gainLabel.setCentrePosition( _gain.getX() + ( _gain.getWidth() / 2 ), _gain.getY() + _gain.getHeight() + 20 );

    _btn1Label.setText( "On/Off", dontSendNotification );
    _btn1Label.attachToComponent( & _btn1, true );
    _btn1Label.setJustificationType( Justification::centred );

    // Define controls
    _pot1.setSliderStyle( Slider::Rotary );
    _pot1.setRange( 0.0f, 1.0f, 0.05f );
    _pot1.setTextBoxStyle( Slider::NoTextBox, false, 0, 0 );
    _pot1.setPopupDisplayEnabled( true, false, this );
    _pot1.setValue( 0.5f );

    _pot2.setSliderStyle( Slider::Rotary );
    _pot2.setRange( 0.0f, 1.0f, 0.05f );
    _pot2.setTextBoxStyle( Slider::NoTextBox, false, 00, 0 );
    _pot2.setPopupDisplayEnabled( true, false, this );
    _pot2.setValue( 0.5f );

    _pot3.setSliderStyle( Slider::Rotary );
    _pot3.setRange( 0.0f, 1.0f, 0.05f );
    _pot3.setTextBoxStyle( Slider::NoTextBox, false, 00, 0 );
    _pot3.setPopupDisplayEnabled( true, false, this );
    _pot3.setValue( 0.3f );

    _gain.setSliderStyle( Slider::LinearBarVertical );
    _gain.setRange( 0.0f, 1.0f, 0.05f );
    _gain.setTextBoxStyle( Slider::NoTextBox, false, 90, 0 );
    _gain.setPopupDisplayEnabled( true, false, this );
    _gain.setValue( 0.8f );

    // Adds slider to the editor
    addAndMakeVisible( & _pot1 );
    addAndMakeVisible( & _pot2 );
    addAndMakeVisible( & _pot3 );
    addAndMakeVisible( & _gain );
    addAndMakeVisible( & _btn1 );
    addAndMakeVisible( & _potGroup );
}

void GainPluginEditor::paintControls( Graphics& graphic )
{
    graphic.fillAll( getLookAndFeel().findColour(
        ResizableWindow::backgroundColourId ) );

    graphic.setColour( Colours::white );
    graphic.setFont( 15.0f );
}
