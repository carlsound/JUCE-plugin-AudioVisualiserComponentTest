/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.2.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "WaveformComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
WaveformComponent::WaveformComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]


    //[UserPreSize]
    //[/UserPreSize]

    setSize (400, 150);


    //[Constructor] You can add your own custom stuff here..
	number_of_channels_ = 2;
	number_of_samples_ = 512;
	visualiser_component_ = std::make_shared<AudioVisualiserComponent>(number_of_channels_);
	//audio_buffer_ = std::make_shared<AudioBuffer<float>>();
	audio_buffer_ = new AudioBuffer<float>(number_of_channels_, number_of_samples_);
	//
	visualiser_component_->setColours(Colours::black,Colours::white);
	visualiser_component_->setRepaintRate(30);
	visualiser_component_->setSamplesPerBlock(number_of_samples_);
	visualiser_component_->setBufferSize(number_of_samples_);
	//
	visualiser_component_->setSize(this->getWidth(), this->getHeight());
	addAndMakeVisible(*visualiser_component_);
    //[/Constructor]
}

WaveformComponent::~WaveformComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
	visualiser_component_ = nullptr;
	audio_buffer_ = nullptr;
    //[/Destructor]
}

//==============================================================================
void WaveformComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    //[UserPaint] Add your own custom painting code here..
	//visualiser_component_->pushBuffer(*audio_buffer_);
	//pushBuffer(*audio_buffer_);
	//visualiser_component_->paint(g);
	//Range<float> *levels = new Range<float>(-1.0f, 1.0f);
	//Rectangle<float> *area = new Rectangle<float>(getWidth(), getHeight());
	//visualiser_component_->paintChannel(g,visualiser_component_->getBounds(),Range<float>(-1.0f, 1.0f), 1, 1);
	//visualiser_component_->paintChannel(g, *area, levels, audio_buffer_->getNumSamples(), 1);
	//paintChannel(g, *area, levels, audio_buffer_->getNumSamples(), 1);
    //[/UserPaint]
}

void WaveformComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void WaveformComponent::setBuffer(AudioBuffer<float>& buffer)
{
	*audio_buffer_ = buffer;
	visualiser_component_->setNumChannels(audio_buffer_->getNumChannels());
	visualiser_component_->setSamplesPerBlock(audio_buffer_->getNumSamples());
	visualiser_component_->pushBuffer(*audio_buffer_);
}

void WaveformComponent::changeListenerCallback(ChangeBroadcaster *source)
{
	visualiser_component_->setNumChannels(audio_buffer_->getNumChannels());
	visualiser_component_->setSamplesPerBlock(audio_buffer_->getNumSamples());
	visualiser_component_->pushBuffer(*audio_buffer_);
	//visualiser_component_->pushSample(audio_buffer_->getReadPointer(1), audio_buffer_->getNumChannels());
	//float *flt = new float(1.0f);
	//visualiser_component_->pushSample(flt, audio_buffer_->getNumChannels());
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="WaveformComponent" componentName=""
                 parentClasses="public Component, public ChangeListener" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="400" initialHeight="150">
  <BACKGROUND backgroundColour="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
