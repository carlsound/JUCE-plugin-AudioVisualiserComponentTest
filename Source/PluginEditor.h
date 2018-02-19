/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "WaveformComponent.h"
#include "SineFrequencyComponent.h"


//==============================================================================
/**
*/
class AudioVisualiserComponentTestAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    AudioVisualiserComponentTestAudioProcessorEditor (AudioVisualiserComponentTestAudioProcessor&);
    ~AudioVisualiserComponentTestAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    AudioVisualiserComponentTestAudioProcessor& processor;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AudioVisualiserComponentTestAudioProcessorEditor)

	WaveformComponent *waveform_component_;
	SineFrequencyComponent *sine_frequency_component_;
};
