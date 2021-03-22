#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    
    dial1.setSliderStyle(juce::Slider::SliderStyle::Rotary);
    dial1.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 50, 20);
    addAndMakeVisible(dial1);
    
    dial2.setSliderStyle(juce::Slider::SliderStyle::Rotary);
    dial2.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 50, 20);
    addAndMakeVisible(dial2);
    
    slider1.setSliderStyle(juce::Slider::SliderStyle::LinearHorizontal);
    slider1.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 50, 20);
    addAndMakeVisible(slider1);
    
    setSize (600, 400);
}

MainComponent::~MainComponent()
{
    
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    g.fillAll(juce::Colours::black);

}

void MainComponent::resized()
{
    const int border = 10;
    
    juce::Rectangle<int> area = getLocalBounds();
    juce::Rectangle<int> dialArea = area.removeFromBottom(area.getHeight()/2);
    dial1.setBounds(dialArea.removeFromLeft(area.getWidth()/2).reduced(border));
    dial2.setBounds(dialArea.removeFromRight(area.getWidth()/2).reduced(border));
    slider1.setBounds(area);
    
}
