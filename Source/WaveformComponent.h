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

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class WaveformComponent  : public Component,
                           public ChangeListener
{
public:
    //==============================================================================
    WaveformComponent ();
    ~WaveformComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	//
	void setBuffer(AudioBuffer<float> &buffer);
	//
	void changeListenerCallback(ChangeBroadcaster *source);
	//
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	int number_of_channels_;
	int number_of_samples_;
	std::shared_ptr<AudioVisualiserComponent> visualiser_component_;
	//std::shared_ptr<AudioBuffer<float>> *audio_buffer_;
	AudioBuffer<float> *audio_buffer_;
    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (WaveformComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
