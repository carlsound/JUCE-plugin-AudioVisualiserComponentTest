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

#include "SineFrequencyComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
SineFrequencyComponent::SineFrequencyComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("Frequency (Hz)")));
    label->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (Justification::centred);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label->setBounds (49, 25, 150, 24);

    addAndMakeVisible (frequencySlider = new Slider ("new slider"));
    frequencySlider->setRange (0, 15000, 10);
    frequencySlider->setSliderStyle (Slider::LinearHorizontal);
    frequencySlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    frequencySlider->addListener (this);

    frequencySlider->setBounds (0, 0, 300, 24);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (400, 50);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

SineFrequencyComponent::~SineFrequencyComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    label = nullptr;
    frequencySlider = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void SineFrequencyComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void SineFrequencyComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void SineFrequencyComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == frequencySlider)
    {
        //[UserSliderCode_frequencySlider] -- add your slider handling code here.
		frequency_hz_ = frequencySlider->getValue();
        //[/UserSliderCode_frequencySlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
float * SineFrequencyComponent::getFrequencyHz()
{
	return &frequency_hz_;
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="SineFrequencyComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="400" initialHeight="50">
  <BACKGROUND backgroundColour="ff323e44"/>
  <LABEL name="new label" id="6a4adbe5585fe5bc" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="49 25 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Frequency (Hz)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15.00000000000000000000" kerning="0.00000000000000000000"
         bold="0" italic="0" justification="36"/>
  <SLIDER name="new slider" id="76faa91254f6e0e7" memberName="frequencySlider"
          virtualName="" explicitFocusOrder="0" pos="0 0 300 24" min="0.00000000000000000000"
          max="15000.00000000000000000000" int="10.00000000000000000000"
          style="LinearHorizontal" textBoxPos="TextBoxLeft" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1.00000000000000000000"
          needsCallback="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
