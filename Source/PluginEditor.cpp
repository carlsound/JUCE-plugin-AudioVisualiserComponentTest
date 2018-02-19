/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
AudioVisualiserComponentTestAudioProcessorEditor::AudioVisualiserComponentTestAudioProcessorEditor(AudioVisualiserComponentTestAudioProcessor& p)
	: AudioProcessorEditor(&p), processor(p)
{
	// Make sure that before the constructor has finished, you've set the
	// editor's size to whatever you need it to be.
	setSize(400, 300);
	//
	waveform_component_ = new WaveformComponent(2);
	sine_frequency_component_ = new SineFrequencyComponent();
	//
	addAndMakeVisible(waveform_component_);
	addAndMakeVisible(sine_frequency_component_);
}

AudioVisualiserComponentTestAudioProcessorEditor::~AudioVisualiserComponentTestAudioProcessorEditor()
{
}

//==============================================================================
void AudioVisualiserComponentTestAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
}

void AudioVisualiserComponentTestAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
