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
	waveform_component_ = new WaveformComponent();
	sine_frequency_component_ = new SineFrequencyComponent();
	//
	p.setFrequencyHz(sine_frequency_component_->getFrequencyHz());
	p.addChangeListener(waveform_component_);
	//
	waveform_component_->setBuffer(p.getBuffer());
	//
	addAndMakeVisible(waveform_component_);
	addAndMakeVisible(sine_frequency_component_);
	waveform_component_->setBounds(0,0,waveform_component_->getWidth(),waveform_component_->getHeight());
	sine_frequency_component_->setBounds(0, waveform_component_->getHeight()+1, sine_frequency_component_->getWidth(), sine_frequency_component_->getHeight());
}

AudioVisualiserComponentTestAudioProcessorEditor::~AudioVisualiserComponentTestAudioProcessorEditor()
{
}

//==============================================================================
void AudioVisualiserComponentTestAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    //g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    //g.setColour (Colours::white);
    //g.setFont (15.0f);
    //g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
}

void AudioVisualiserComponentTestAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
	//sine_frequency_component_->setBounds(0, 0, sine_frequency_component_->getWidth(), sine_frequency_component_->getHeight());
	//sine_frequency_component_->setBounds(1, 1, 100, 50);
	//sine_frequency_component_->setBounds(getLocalBounds());
}
