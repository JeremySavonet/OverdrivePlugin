# Automatically generated CMakeLists, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

cmake_minimum_required (VERSION 3.4.1)

if (NOT CMAKE_BUILD_TYPE)
    set (CMAKE_BUILD_TYPE "Debug"  CACHE STRING "Choose the type of build." FORCE)
endif (NOT CMAKE_BUILD_TYPE)

###############################################################################
# Xcode (MacOSX)
###############################################################################

if (APPLE)

project ("Overrdrive" C CXX)

add_library (VST MODULE
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_VST2.cpp"
    "../../JuceLibraryCode/include_juce_audio_plugin_client_VST2.cpp"
)

set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_VST2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)

add_library (VST3 MODULE
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/VST3/juce_VST3_Wrapper.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_VST3.cpp"
    "../../JuceLibraryCode/include_juce_audio_plugin_client_VST3.cpp"
)

set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/VST3/juce_VST3_Wrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_VST3.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)

add_library (AU MODULE
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/juce_AU_Wrapper.mm"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_AU_1.mm"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_AU_2.mm"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_AU_Shared.h"
    "../../JuceLibraryCode/include_juce_audio_plugin_client_AU.r"
    "../../JuceLibraryCode/include_juce_audio_plugin_client_AU_1.mm"
    "../../JuceLibraryCode/include_juce_audio_plugin_client_AU_2.mm"
)

set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/juce_AU_Wrapper.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_AU_1.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_AU_2.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_AU_Shared.h" PROPERTIES HEADER_FILE_ONLY TRUE)

add_executable (STANDALONE_PLUGIN
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_Standalone.cpp"
    "../../JuceLibraryCode/include_juce_audio_plugin_client_Standalone.cpp"
)

set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_Standalone.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)

add_library (SHARED_CODE STATIC
    "../../Source/GainPluginEditor.cpp"
    "../../Source/Distortion.cpp"
    "../../Source/Distortion.hpp"
    "../../Source/GainPluginEditor.hpp"
    "../../Source/GainPluginProcessor.cpp"
    "../../Source/GainPluginProcessor.hpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/effects/juce_Decibels.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/effects/juce_LinearSmoothedValue.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/effects/juce_Reverb.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEZone.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEZone.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/juce_audio_basics.mm"
    "$ENV{HOME}/JUCE/modules/juce_audio_basics/juce_audio_basics.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/midi_io/juce_MidiInput.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/juce_audio_devices.mm"
    "$ENV{HOME}/JUCE/modules/juce_audio_devices/juce_audio_devices.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/all.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/assert.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/callback.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/compat.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/export.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/format.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/juce_audio_formats.mm"
    "$ENV{HOME}/JUCE/modules/juce_audio_formats/juce_audio_formats.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBase.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBase.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBaseHelper.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBuffer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBuffer.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewBase.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewBase.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewControl.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewControl.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewDispatch.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUDispatch.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUDispatch.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUInputElement.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUInputElement.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUInputFormatConverter.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUMIDIBase.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUMIDIBase.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUOutputBase.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUOutputBase.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUOutputElement.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUOutputElement.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUPlugInDispatch.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUPlugInDispatch.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUScopeElement.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUScopeElement.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUSilentTimeout.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUTimestampGenerator.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUViewLocalizedStringKeys.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAtomic.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAtomicStack.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAudioChannelLayout.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAudioChannelLayout.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAUParameter.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAUParameter.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAutoDisposer.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CADebugMacros.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CADebugPrintf.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAException.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAHostTimeBase.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAMath.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAMutex.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAMutex.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CarbonEventHandler.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CarbonEventHandler.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAReferenceCounted.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAStreamBasicDescription.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAStreamBasicDescription.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAThreadSafeList.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAVectorUnit.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAVectorUnit.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAVectorUnitTypes.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAXException.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/ComponentBase.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/ComponentBase.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/MusicDeviceBase.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/MusicDeviceBase.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/Standalone/juce_StandaloneFilterApp.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/Standalone/juce_StandaloneFilterWindow.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/utility/juce_CarbonVisibility.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/utility/juce_CheckSettingMacros.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/utility/juce_FakeMouseMoveGenerator.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/utility/juce_IncludeModuleHeaders.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/utility/juce_IncludeSystemHeaders.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/utility/juce_PluginHostType.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/utility/juce_PluginUtilities.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/utility/juce_WindowsHooks.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/VST/juce_VST_Wrapper.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/VST/juce_VST_Wrapper.mm"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/VST/juce_VSTCallbackHandler.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_utils.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_VST_utils.mm"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_VSTInterface.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameters.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/juce_audio_processors.mm"
    "$ENV{HOME}/JUCE/modules/juce_audio_processors/juce_audio_processors.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/juce_audio_utils.mm"
    "$ENV{HOME}/JUCE/modules/juce_audio_utils/juce_audio_utils.h"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_AbstractFifo.h"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_Array.h"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_DynamicObject.h"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_ElementComparator.h"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_HashMap.h"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_ListenerList.h"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_NamedValueSet.h"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_OwnedArray.h"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_PropertySet.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_PropertySet.h"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_SortedSet.h"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_SparseSet.h"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_Variant.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/containers/juce_Variant.h"
    "$ENV{HOME}/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/files/juce_DirectoryIterator.h"
    "$ENV{HOME}/JUCE/modules/juce_core/files/juce_File.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/files/juce_File.h"
    "$ENV{HOME}/JUCE/modules/juce_core/files/juce_FileFilter.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/files/juce_FileFilter.h"
    "$ENV{HOME}/JUCE/modules/juce_core/files/juce_FileInputStream.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/files/juce_FileInputStream.h"
    "$ENV{HOME}/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/files/juce_FileOutputStream.h"
    "$ENV{HOME}/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/files/juce_FileSearchPath.h"
    "$ENV{HOME}/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h"
    "$ENV{HOME}/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/files/juce_TemporaryFile.h"
    "$ENV{HOME}/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h"
    "$ENV{HOME}/JUCE/modules/juce_core/javascript/juce_Javascript.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/javascript/juce_Javascript.h"
    "$ENV{HOME}/JUCE/modules/juce_core/javascript/juce_JSON.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/javascript/juce_JSON.h"
    "$ENV{HOME}/JUCE/modules/juce_core/logging/juce_FileLogger.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/logging/juce_FileLogger.h"
    "$ENV{HOME}/JUCE/modules/juce_core/logging/juce_Logger.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/logging/juce_Logger.h"
    "$ENV{HOME}/JUCE/modules/juce_core/maths/juce_BigInteger.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/maths/juce_BigInteger.h"
    "$ENV{HOME}/JUCE/modules/juce_core/maths/juce_Expression.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/maths/juce_Expression.h"
    "$ENV{HOME}/JUCE/modules/juce_core/maths/juce_MathsFunctions.h"
    "$ENV{HOME}/JUCE/modules/juce_core/maths/juce_NormalisableRange.h"
    "$ENV{HOME}/JUCE/modules/juce_core/maths/juce_Random.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/maths/juce_Random.h"
    "$ENV{HOME}/JUCE/modules/juce_core/maths/juce_Range.h"
    "$ENV{HOME}/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h"
    "$ENV{HOME}/JUCE/modules/juce_core/memory/juce_Atomic.h"
    "$ENV{HOME}/JUCE/modules/juce_core/memory/juce_ByteOrder.h"
    "$ENV{HOME}/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h"
    "$ENV{HOME}/JUCE/modules/juce_core/memory/juce_HeapBlock.h"
    "$ENV{HOME}/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h"
    "$ENV{HOME}/JUCE/modules/juce_core/memory/juce_Memory.h"
    "$ENV{HOME}/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/memory/juce_MemoryBlock.h"
    "$ENV{HOME}/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h"
    "$ENV{HOME}/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h"
    "$ENV{HOME}/JUCE/modules/juce_core/memory/juce_ScopedPointer.h"
    "$ENV{HOME}/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h"
    "$ENV{HOME}/JUCE/modules/juce_core/memory/juce_Singleton.h"
    "$ENV{HOME}/JUCE/modules/juce_core/memory/juce_WeakReference.h"
    "$ENV{HOME}/JUCE/modules/juce_core/misc/juce_Result.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/misc/juce_Result.h"
    "$ENV{HOME}/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h"
    "$ENV{HOME}/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h"
    "$ENV{HOME}/JUCE/modules/juce_core/misc/juce_Uuid.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/misc/juce_Uuid.h"
    "$ENV{HOME}/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_android_Files.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_android_Misc.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_android_Network.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_android_Threads.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_curl_Network.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_linux_Files.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_linux_Network.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_linux_Threads.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_mac_Files.mm"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_mac_Network.mm"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_mac_Strings.mm"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_mac_Threads.mm"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_posix_SharedCode.h"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_win32_Files.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_win32_Network.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_win32_Registry.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/native/juce_win32_Threads.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/network/juce_IPAddress.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/network/juce_IPAddress.h"
    "$ENV{HOME}/JUCE/modules/juce_core/network/juce_MACAddress.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/network/juce_MACAddress.h"
    "$ENV{HOME}/JUCE/modules/juce_core/network/juce_NamedPipe.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/network/juce_NamedPipe.h"
    "$ENV{HOME}/JUCE/modules/juce_core/network/juce_Socket.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/network/juce_Socket.h"
    "$ENV{HOME}/JUCE/modules/juce_core/network/juce_URL.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/network/juce_URL.h"
    "$ENV{HOME}/JUCE/modules/juce_core/network/juce_WebInputStream.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/network/juce_WebInputStream.h"
    "$ENV{HOME}/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h"
    "$ENV{HOME}/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/streams/juce_FileInputSource.h"
    "$ENV{HOME}/JUCE/modules/juce_core/streams/juce_InputSource.h"
    "$ENV{HOME}/JUCE/modules/juce_core/streams/juce_InputStream.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/streams/juce_InputStream.h"
    "$ENV{HOME}/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h"
    "$ENV{HOME}/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h"
    "$ENV{HOME}/JUCE/modules/juce_core/streams/juce_OutputStream.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/streams/juce_OutputStream.h"
    "$ENV{HOME}/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/streams/juce_SubregionStream.h"
    "$ENV{HOME}/JUCE/modules/juce_core/system/juce_CompilerSupport.h"
    "$ENV{HOME}/JUCE/modules/juce_core/system/juce_PlatformDefs.h"
    "$ENV{HOME}/JUCE/modules/juce_core/system/juce_StandardHeader.h"
    "$ENV{HOME}/JUCE/modules/juce_core/system/juce_SystemStats.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/system/juce_SystemStats.h"
    "$ENV{HOME}/JUCE/modules/juce_core/system/juce_TargetPlatform.h"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_Base64.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_Base64.h"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_CharacterFunctions.h"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_Identifier.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_Identifier.h"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_LocalisedStrings.h"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_NewLine.h"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_String.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_String.h"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_StringArray.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_StringArray.h"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_StringPairArray.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_StringPairArray.h"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_StringPool.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_StringPool.h"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_StringRef.h"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_TextDiff.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/text/juce_TextDiff.h"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ChildProcess.h"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_CriticalSection.h"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_InterProcessLock.h"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_Process.h"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ScopedLock.h"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_SpinLock.h"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_Thread.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_Thread.h"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ThreadPool.h"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h"
    "$ENV{HOME}/JUCE/modules/juce_core/threads/juce_WaitableEvent.h"
    "$ENV{HOME}/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/time/juce_PerformanceCounter.h"
    "$ENV{HOME}/JUCE/modules/juce_core/time/juce_RelativeTime.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/time/juce_RelativeTime.h"
    "$ENV{HOME}/JUCE/modules/juce_core/time/juce_Time.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/time/juce_Time.h"
    "$ENV{HOME}/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h"
    "$ENV{HOME}/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/xml/juce_XmlDocument.h"
    "$ENV{HOME}/JUCE/modules/juce_core/xml/juce_XmlElement.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/xml/juce_XmlElement.h"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/adler32.c"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/compress.c"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/crc32.c"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/crc32.h"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/deflate.c"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/deflate.h"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/infback.c"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/inffast.c"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/inffast.h"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/inffixed.h"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/inflate.c"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/inflate.h"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/inftrees.c"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/inftrees.h"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/trees.c"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/trees.h"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/uncompr.c"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/zconf.h"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/zconf.in.h"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/zlib.h"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/zutil.c"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/zutil.h"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/juce_ZipFile.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/zip/juce_ZipFile.h"
    "$ENV{HOME}/JUCE/modules/juce_core/juce_core.cpp"
    "$ENV{HOME}/JUCE/modules/juce_core/juce_core.mm"
    "$ENV{HOME}/JUCE/modules/juce_core/juce_core.h"
    "$ENV{HOME}/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp"
    "$ENV{HOME}/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h"
    "$ENV{HOME}/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp"
    "$ENV{HOME}/JUCE/modules/juce_cryptography/encryption/juce_Primes.h"
    "$ENV{HOME}/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp"
    "$ENV{HOME}/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h"
    "$ENV{HOME}/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp"
    "$ENV{HOME}/JUCE/modules/juce_cryptography/hashing/juce_MD5.h"
    "$ENV{HOME}/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp"
    "$ENV{HOME}/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h"
    "$ENV{HOME}/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp"
    "$ENV{HOME}/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h"
    "$ENV{HOME}/JUCE/modules/juce_cryptography/juce_cryptography.cpp"
    "$ENV{HOME}/JUCE/modules/juce_cryptography/juce_cryptography.mm"
    "$ENV{HOME}/JUCE/modules/juce_cryptography/juce_cryptography.h"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/values/juce_CachedValue.h"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/values/juce_Value.cpp"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/values/juce_Value.h"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/values/juce_ValueTree.h"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/juce_data_structures.cpp"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/juce_data_structures.mm"
    "$ENV{HOME}/JUCE/modules/juce_data_structures/juce_data_structures.h"
    "$ENV{HOME}/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp"
    "$ENV{HOME}/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h"
    "$ENV{HOME}/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h"
    "$ENV{HOME}/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp"
    "$ENV{HOME}/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h"
    "$ENV{HOME}/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp"
    "$ENV{HOME}/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h"
    "$ENV{HOME}/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h"
    "$ENV{HOME}/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp"
    "$ENV{HOME}/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h"
    "$ENV{HOME}/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp"
    "$ENV{HOME}/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h"
    "$ENV{HOME}/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h"
    "$ENV{HOME}/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp"
    "$ENV{HOME}/JUCE/modules/juce_events/messages/juce_ApplicationBase.h"
    "$ENV{HOME}/JUCE/modules/juce_events/messages/juce_CallbackMessage.h"
    "$ENV{HOME}/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp"
    "$ENV{HOME}/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h"
    "$ENV{HOME}/JUCE/modules/juce_events/messages/juce_Initialisation.h"
    "$ENV{HOME}/JUCE/modules/juce_events/messages/juce_Message.h"
    "$ENV{HOME}/JUCE/modules/juce_events/messages/juce_MessageListener.cpp"
    "$ENV{HOME}/JUCE/modules/juce_events/messages/juce_MessageListener.h"
    "$ENV{HOME}/JUCE/modules/juce_events/messages/juce_MessageManager.cpp"
    "$ENV{HOME}/JUCE/modules/juce_events/messages/juce_MessageManager.h"
    "$ENV{HOME}/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h"
    "$ENV{HOME}/JUCE/modules/juce_events/messages/juce_NotificationType.h"
    "$ENV{HOME}/JUCE/modules/juce_events/native/juce_android_Messaging.cpp"
    "$ENV{HOME}/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm"
    "$ENV{HOME}/JUCE/modules/juce_events/native/juce_linux_EventLoop.h"
    "$ENV{HOME}/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp"
    "$ENV{HOME}/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm"
    "$ENV{HOME}/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h"
    "$ENV{HOME}/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h"
    "$ENV{HOME}/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp"
    "$ENV{HOME}/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp"
    "$ENV{HOME}/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h"
    "$ENV{HOME}/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_events/timers/juce_MultiTimer.h"
    "$ENV{HOME}/JUCE/modules/juce_events/timers/juce_Timer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_events/timers/juce_Timer.h"
    "$ENV{HOME}/JUCE/modules/juce_events/juce_events.cpp"
    "$ENV{HOME}/JUCE/modules/juce_events/juce_events.mm"
    "$ENV{HOME}/JUCE/modules/juce_events/juce_events.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/colour/juce_Colour.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/colour/juce_Colour.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/colour/juce_Colours.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/colour/juce_Colours.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/colour/juce_FillType.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/colour/juce_FillType.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_Font.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_Font.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_Typeface.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_Line.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_Path.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_Path.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_Point.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/png.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/png.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/images/juce_Image.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/images/juce_Image.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/images/juce_ImageCache.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm"
    "$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm"
    "$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/placement/juce_Justification.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h"
    "$ENV{HOME}/JUCE/modules/juce_graphics/juce_graphics.cpp"
    "$ENV{HOME}/JUCE/modules/juce_graphics/juce_graphics.mm"
    "$ENV{HOME}/JUCE/modules/juce_graphics/juce_graphics.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/application/juce_Application.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/application/juce_Application.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_Button.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/components/juce_Component.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/components/juce_Component.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/components/juce_Desktop.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/components/juce_Desktop.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_Grid.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_Label.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/juce_gui_basics.mm"
    "$ENV{HOME}/JUCE/modules/juce_gui_basics/juce_gui_basics.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/juce_gui_extra.mm"
    "$ENV{HOME}/JUCE/modules/juce_gui_extra/juce_gui_extra.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp"
    "$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp"
    "$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp"
    "$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp"
    "$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp"
    "$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp"
    "$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp"
    "$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp"
    "$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_opengl/juce_opengl.cpp"
    "$ENV{HOME}/JUCE/modules/juce_opengl/juce_opengl.mm"
    "$ENV{HOME}/JUCE/modules/juce_opengl/juce_opengl.h"
    "$ENV{HOME}/JUCE/modules/juce_video/capture/juce_CameraDevice.cpp"
    "$ENV{HOME}/JUCE/modules/juce_video/capture/juce_CameraDevice.h"
    "$ENV{HOME}/JUCE/modules/juce_video/native/juce_android_CameraDevice.h"
    "$ENV{HOME}/JUCE/modules/juce_video/native/juce_mac_CameraDevice.h"
    "$ENV{HOME}/JUCE/modules/juce_video/native/juce_mac_Video.h"
    "$ENV{HOME}/JUCE/modules/juce_video/native/juce_win32_CameraDevice.h"
    "$ENV{HOME}/JUCE/modules/juce_video/native/juce_win32_Video.h"
    "$ENV{HOME}/JUCE/modules/juce_video/playback/juce_VideoComponent.cpp"
    "$ENV{HOME}/JUCE/modules/juce_video/playback/juce_VideoComponent.h"
    "$ENV{HOME}/JUCE/modules/juce_video/juce_video.cpp"
    "$ENV{HOME}/JUCE/modules/juce_video/juce_video.mm"
    "$ENV{HOME}/JUCE/modules/juce_video/juce_video.h"
    "../../JuceLibraryCode/AppConfig.h"
    "../../JuceLibraryCode/include_juce_audio_basics.mm"
    "../../JuceLibraryCode/include_juce_audio_devices.mm"
    "../../JuceLibraryCode/include_juce_audio_formats.mm"
    "../../JuceLibraryCode/include_juce_audio_plugin_client_utils.cpp"
    "../../JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.mm"
    "../../JuceLibraryCode/include_juce_audio_processors.mm"
    "../../JuceLibraryCode/include_juce_audio_utils.mm"
    "../../JuceLibraryCode/include_juce_core.mm"
    "../../JuceLibraryCode/include_juce_cryptography.mm"
    "../../JuceLibraryCode/include_juce_data_structures.mm"
    "../../JuceLibraryCode/include_juce_events.mm"
    "../../JuceLibraryCode/include_juce_graphics.mm"
    "../../JuceLibraryCode/include_juce_gui_basics.mm"
    "../../JuceLibraryCode/include_juce_gui_extra.mm"
    "../../JuceLibraryCode/include_juce_opengl.mm"
    "../../JuceLibraryCode/include_juce_video.mm"
    "../../JuceLibraryCode/JuceHeader.h"
)

set_source_files_properties ("../../Source/Distortion.hpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/effects/juce_Decibels.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/effects/juce_LinearSmoothedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/effects/juce_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEZone.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEZone.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/juce_audio_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_basics/juce_audio_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/midi_io/juce_MidiInput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/juce_audio_devices.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_devices/juce_audio_devices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/assert.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/callback.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/compat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/export.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/juce_audio_formats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_formats/juce_audio_formats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBaseHelper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewControl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewControl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewDispatch.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUDispatch.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUDispatch.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUInputElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUInputElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUInputFormatConverter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUMIDIBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUMIDIBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUOutputBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUOutputBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUOutputElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUOutputElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUPlugInDispatch.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUPlugInDispatch.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUScopeElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUScopeElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUSilentTimeout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUTimestampGenerator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUViewLocalizedStringKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAtomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAtomicStack.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAudioChannelLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAudioChannelLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAUParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAUParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAutoDisposer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CADebugMacros.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CADebugPrintf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAException.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAHostTimeBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAMath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAMutex.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAMutex.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CarbonEventHandler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CarbonEventHandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAReferenceCounted.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAStreamBasicDescription.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAStreamBasicDescription.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAThreadSafeList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAVectorUnit.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAVectorUnit.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAVectorUnitTypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAXException.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/ComponentBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/ComponentBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/MusicDeviceBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/MusicDeviceBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/Standalone/juce_StandaloneFilterApp.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/Standalone/juce_StandaloneFilterWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/utility/juce_CarbonVisibility.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/utility/juce_CheckSettingMacros.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/utility/juce_FakeMouseMoveGenerator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/utility/juce_IncludeModuleHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/utility/juce_IncludeSystemHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/utility/juce_PluginHostType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/utility/juce_PluginUtilities.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/utility/juce_WindowsHooks.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/VST/juce_VST_Wrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/VST/juce_VST_Wrapper.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/VST/juce_VSTCallbackHandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_utils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_VST_utils.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_VSTInterface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/juce_audio_processors.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_processors/juce_audio_processors.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/juce_audio_utils.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_audio_utils/juce_audio_utils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_AbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_Array.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_DynamicObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_ElementComparator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_HashMap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_ListenerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_NamedValueSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_OwnedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_PropertySet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_PropertySet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_SortedSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_SparseSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_Variant.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/containers/juce_Variant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/files/juce_DirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/files/juce_File.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/files/juce_File.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/files/juce_FileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/files/juce_FileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/files/juce_FileInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/files/juce_FileInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/files/juce_FileOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/files/juce_FileSearchPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/files/juce_TemporaryFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/javascript/juce_Javascript.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/javascript/juce_Javascript.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/javascript/juce_JSON.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/javascript/juce_JSON.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/logging/juce_FileLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/logging/juce_FileLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/logging/juce_Logger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/logging/juce_Logger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/maths/juce_BigInteger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/maths/juce_BigInteger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/maths/juce_Expression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/maths/juce_Expression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/maths/juce_MathsFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/maths/juce_NormalisableRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/maths/juce_Random.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/maths/juce_Random.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/maths/juce_Range.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/memory/juce_Atomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/memory/juce_ByteOrder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/memory/juce_HeapBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/memory/juce_Memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/memory/juce_MemoryBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/memory/juce_ScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/memory/juce_Singleton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/memory/juce_WeakReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/misc/juce_Result.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/misc/juce_Result.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/misc/juce_Uuid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/misc/juce_Uuid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_android_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_android_Misc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_android_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_android_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_curl_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_linux_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_linux_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_linux_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_mac_Files.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_mac_Network.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_mac_Strings.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_mac_Threads.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_posix_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_win32_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_win32_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_win32_Registry.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/native/juce_win32_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/network/juce_IPAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/network/juce_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/network/juce_MACAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/network/juce_MACAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/network/juce_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/network/juce_NamedPipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/network/juce_Socket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/network/juce_Socket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/network/juce_URL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/network/juce_URL.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/network/juce_WebInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/network/juce_WebInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/streams/juce_FileInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/streams/juce_InputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/streams/juce_InputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/streams/juce_InputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/streams/juce_OutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/streams/juce_OutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/streams/juce_SubregionStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/system/juce_CompilerSupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/system/juce_PlatformDefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/system/juce_StandardHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/system/juce_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/system/juce_SystemStats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/system/juce_TargetPlatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_Base64.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_Base64.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_CharacterFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_Identifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_Identifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_LocalisedStrings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_NewLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_String.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_String.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_StringArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_StringArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_StringPairArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_StringPairArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_StringPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_StringPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_StringRef.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_TextDiff.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/text/juce_TextDiff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_CriticalSection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_InterProcessLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_Process.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ScopedLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_SpinLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_Thread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_Thread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_ThreadPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/threads/juce_WaitableEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/time/juce_PerformanceCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/time/juce_RelativeTime.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/time/juce_RelativeTime.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/time/juce_Time.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/time/juce_Time.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/xml/juce_XmlDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/xml/juce_XmlElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/xml/juce_XmlElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/adler32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/compress.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/crc32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/crc32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/deflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/deflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/infback.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/inffast.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/inffast.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/inffixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/inflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/inflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/inftrees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/inftrees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/trees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/trees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/uncompr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/zconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/zconf.in.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/zlib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/zutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/zlib/zutil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/juce_ZipFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/zip/juce_ZipFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_cryptography/encryption/juce_Primes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_cryptography/hashing/juce_MD5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_cryptography/juce_cryptography.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_cryptography/juce_cryptography.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_cryptography/juce_cryptography.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/values/juce_CachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/values/juce_Value.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/values/juce_Value.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/values/juce_ValueTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/messages/juce_ApplicationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/messages/juce_CallbackMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/messages/juce_Initialisation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/messages/juce_Message.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/messages/juce_MessageListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/messages/juce_MessageListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/messages/juce_MessageManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/messages/juce_MessageManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/messages/juce_NotificationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/native/juce_android_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/native/juce_linux_EventLoop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/timers/juce_MultiTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/timers/juce_Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/timers/juce_Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/colour/juce_Colour.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/colour/juce_Colour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/colour/juce_Colours.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/colour/juce_Colours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/colour/juce_FillType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/colour/juce_FillType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_Font.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_Font.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/fonts/juce_Typeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_Line.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_Path.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_Path.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_Point.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/png.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/png.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/images/juce_Image.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/images/juce_Image.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/images/juce_ImageCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/placement/juce_Justification.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_graphics/juce_graphics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/application/juce_Application.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/application/juce_Application.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_Button.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/components/juce_Component.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/components/juce_Component.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/components/juce_Desktop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/components/juce_Desktop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_Grid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_Label.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_basics/juce_gui_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/juce_gui_extra.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_gui_extra/juce_gui_extra.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/juce_opengl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/juce_opengl.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_opengl/juce_opengl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_video/capture/juce_CameraDevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_video/capture/juce_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_video/native/juce_android_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_video/native/juce_mac_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_video/native/juce_mac_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_video/native/juce_win32_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_video/native/juce_win32_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_video/playback/juce_VideoComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_video/playback/juce_VideoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_video/juce_video.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_video/juce_video.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("$ENV{HOME}/JUCE/modules/juce_video/juce_video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

find_program (RC_COMPILER Rez NO_DEFAULT_PATHS PATHS /Applications/Xcode.app/Contents/Developer/usr/bin)
if (NOT RC_COMPILER)
    message (WARNING "failed to find Rez; older resource-based AU plug-ins may not work correctly")
endif (NOT RC_COMPILER)

set_target_properties (SHARED_CODE PROPERTIES SUFFIX ".a")

#------------------------------------------------------------------------------
# Config: Debug
#------------------------------------------------------------------------------

if (CMAKE_BUILD_TYPE STREQUAL Debug)

execute_process (COMMAND uname -m OUTPUT_VARIABLE JUCE_ARCH_LABEL OUTPUT_STRIP_TRAILING_WHITESPACE)

target_include_directories (VST PRIVATE
    "$ENV{HOME}/vst3sdk"
    "../../JuceLibraryCode"
    "$ENV{HOME}/JUCE/modules"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client"
)

target_compile_definitions (VST PRIVATE
    "_DEBUG=1"
    "DEBUG=1"
    "JUCER_XCODE_MAC_F6D2F4CF=1"
    "JUCE_APP_VERSION=1.0.0"
    "JUCE_APP_VERSION_HEX=0x10000"
    "JucePlugin_Build_VST=1"
    "JucePlugin_Build_VST3=0"
    "JucePlugin_Build_AU=0"
    "JucePlugin_Build_AUv3=0"
    "JucePlugin_Build_RTAS=0"
    "JucePlugin_Build_AAX=0"
    "JucePlugin_Build_Standalone=0"
)

target_compile_options (VST PRIVATE
    -mmacosx-version-min=10.11
    -O0
)

set_target_properties (VST PROPERTIES
    OUTPUT_NAME "Overrdrive"
    CXX_STANDARD 11
    CXX_EXTENSIONS OFF
    XCODE_ATTRIBUTE_CLANG_LINK_OBJC_RUNTIME NO
    XCODE_ATTRIBUTE_COMBINE_HIDPI_IMAGES YES
    XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "$(PROJECT_DIR)/build/$(CONFIGURATION)"
    XCODE_ATTRIBUTE_COPY_PHASE_STRIP NO
    XCODE_ATTRIBUTE_DEPLOYMENT_LOCATION YES
    XCODE_ATTRIBUTE_DSTROOT /
    XCODE_ATTRIBUTE_GCC_DYNAMIC_NO_PIC NO
    XCODE_ATTRIBUTE_GCC_VERSION com.apple.compilers.llvm.clang.1_0
    XCODE_ATTRIBUTE_GENERATE_PKGINFO_FILE YES
    XCODE_ATTRIBUTE_INFOPLIST_FILE "/Users/savonetj/Documents/PERSO/OverdrivePlugin/Builds/CLion/Debug-Info-VST.plist"
    XCODE_ATTRIBUTE_INFOPLIST_PREPROCESS NO
    XCODE_ATTRIBUTE_INSTALL_PATH "$(HOME)/Library/Audio/Plug-Ins/VST/"
    XCODE_ATTRIBUTE_LIBRARY_STYLE Bundle
    XCODE_ATTRIBUTE_MACOSX_DEPLOYMENT_TARGET_ppc 10.4
    XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER com.savonetj.Overdrive
    XCODE_ATTRIBUTE_SDKROOT_ppc macosx10.5
    XCODE_ATTRIBUTE_USE_HEADERMAP NO
    XCODE_ATTRIBUTE_WRAPPER_EXTENSION vst
    MACOSX_BUNDLE_INFO_PLIST "/Users/savonetj/Documents/PERSO/OverdrivePlugin/Builds/CLion/Debug-Info-VST.plist"
    XCODE_ATTRIBUTE_PRODUCT_NAME "Overrdrive"
    BUNDLE TRUE
    BUNDLE_EXTENSION vst
    XCODE_ATTRIBUTE_MACH_O_TYPE "mh_bundle"
)

target_link_libraries (VST PRIVATE
    SHARED_CODE
    "-framework Accelerate"
    "-framework AudioToolbox"
    "-framework AVFoundation"
    "-framework AVKit"
    "-framework Carbon"
    "-framework Cocoa"
    "-framework CoreAudio"
    "-framework CoreMedia"
    "-framework CoreMIDI"
    "-framework DiscRecording"
    "-framework IOKit"
    "-framework OpenGL"
    "-framework QuartzCore"
    "-framework WebKit"
)

add_custom_command (TARGET VST POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E remove_directory "$ENV{HOME}/Library/Audio/Plug-Ins/VST/Overrdrive.vst"
    COMMAND ${CMAKE_COMMAND} -E copy_directory "${CMAKE_BINARY_DIR}/Overrdrive.vst" "$ENV{HOME}/Library/Audio/Plug-Ins/VST/Overrdrive.vst"
    COMMENT "Copying \"Overrdrive.vst\" to \"$ENV{HOME}/Library/Audio/Plug-Ins/VST/\""
)

target_include_directories (VST3 PRIVATE
    "$ENV{HOME}/vst3sdk"
    "../../JuceLibraryCode"
    "$ENV{HOME}/JUCE/modules"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client"
)

target_compile_definitions (VST3 PRIVATE
    "_DEBUG=1"
    "DEBUG=1"
    "JUCER_XCODE_MAC_F6D2F4CF=1"
    "JUCE_APP_VERSION=1.0.0"
    "JUCE_APP_VERSION_HEX=0x10000"
    "JucePlugin_Build_VST=0"
    "JucePlugin_Build_VST3=1"
    "JucePlugin_Build_AU=0"
    "JucePlugin_Build_AUv3=0"
    "JucePlugin_Build_RTAS=0"
    "JucePlugin_Build_AAX=0"
    "JucePlugin_Build_Standalone=0"
)

target_compile_options (VST3 PRIVATE
    -mmacosx-version-min=10.11
    -O0
)

set_target_properties (VST3 PROPERTIES
    OUTPUT_NAME "Overrdrive"
    CXX_STANDARD 11
    CXX_EXTENSIONS OFF
    XCODE_ATTRIBUTE_CLANG_LINK_OBJC_RUNTIME NO
    XCODE_ATTRIBUTE_COMBINE_HIDPI_IMAGES YES
    XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "$(PROJECT_DIR)/build/$(CONFIGURATION)"
    XCODE_ATTRIBUTE_COPY_PHASE_STRIP NO
    XCODE_ATTRIBUTE_DEPLOYMENT_LOCATION YES
    XCODE_ATTRIBUTE_DSTROOT /
    XCODE_ATTRIBUTE_GCC_DYNAMIC_NO_PIC NO
    XCODE_ATTRIBUTE_GCC_VERSION com.apple.compilers.llvm.clang.1_0
    XCODE_ATTRIBUTE_GENERATE_PKGINFO_FILE YES
    XCODE_ATTRIBUTE_INFOPLIST_FILE "/Users/savonetj/Documents/PERSO/OverdrivePlugin/Builds/CLion/Debug-Info-VST3.plist"
    XCODE_ATTRIBUTE_INFOPLIST_PREPROCESS NO
    XCODE_ATTRIBUTE_INSTALL_PATH "$(HOME)/Library/Audio/Plug-Ins/VST3/"
    XCODE_ATTRIBUTE_LIBRARY_STYLE Bundle
    XCODE_ATTRIBUTE_MACOSX_DEPLOYMENT_TARGET_ppc 10.4
    XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER com.savonetj.Overdrive
    XCODE_ATTRIBUTE_SDKROOT_ppc macosx10.5
    XCODE_ATTRIBUTE_USE_HEADERMAP NO
    XCODE_ATTRIBUTE_WRAPPER_EXTENSION vst3
    MACOSX_BUNDLE_INFO_PLIST "/Users/savonetj/Documents/PERSO/OverdrivePlugin/Builds/CLion/Debug-Info-VST3.plist"
    XCODE_ATTRIBUTE_PRODUCT_NAME "Overrdrive"
    BUNDLE TRUE
    BUNDLE_EXTENSION vst3
    XCODE_ATTRIBUTE_MACH_O_TYPE "mh_bundle"
)

target_link_libraries (VST3 PRIVATE
    SHARED_CODE
    "-framework Accelerate"
    "-framework AudioToolbox"
    "-framework AVFoundation"
    "-framework AVKit"
    "-framework Carbon"
    "-framework Cocoa"
    "-framework CoreAudio"
    "-framework CoreMedia"
    "-framework CoreMIDI"
    "-framework DiscRecording"
    "-framework IOKit"
    "-framework OpenGL"
    "-framework QuartzCore"
    "-framework WebKit"
)

add_custom_command (TARGET VST3 POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E remove_directory "$ENV{HOME}/Library/Audio/Plug-Ins/VST3/Overrdrive.vst3"
    COMMAND ${CMAKE_COMMAND} -E copy_directory "${CMAKE_BINARY_DIR}/Overrdrive.vst3" "$ENV{HOME}/Library/Audio/Plug-Ins/VST3/Overrdrive.vst3"
    COMMENT "Copying \"Overrdrive.vst3\" to \"$ENV{HOME}/Library/Audio/Plug-Ins/VST3/\""
)

target_include_directories (AU PRIVATE
    "$ENV{HOME}/vst3sdk"
    "../../JuceLibraryCode"
    "$ENV{HOME}/JUCE/modules"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client"
)

target_compile_definitions (AU PRIVATE
    "_DEBUG=1"
    "DEBUG=1"
    "JUCER_XCODE_MAC_F6D2F4CF=1"
    "JUCE_APP_VERSION=1.0.0"
    "JUCE_APP_VERSION_HEX=0x10000"
    "JucePlugin_Build_VST=0"
    "JucePlugin_Build_VST3=0"
    "JucePlugin_Build_AU=1"
    "JucePlugin_Build_AUv3=0"
    "JucePlugin_Build_RTAS=0"
    "JucePlugin_Build_AAX=0"
    "JucePlugin_Build_Standalone=0"
)

target_compile_options (AU PRIVATE
    -mmacosx-version-min=10.11
    -O0
)

if (RC_COMPILER)
    set (AU_REZ_SOURCES
        "/Users/savonetj/Documents/PERSO/OverdrivePlugin/JuceLibraryCode/include_juce_audio_plugin_client_AU.r"
    )
    set (AU_REZ_OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/Overrdrive.rsrc")
    target_sources (AU PRIVATE
        ${AU_REZ_SOURCES}
        ${AU_REZ_OUTPUT}
    )
    execute_process (COMMAND
        ${RC_COMPILER}
        -d ppc_$ppc -d i386_$i386 -d ppc64_$ppc64 -d x86_64_$x86_64 -I /System/Library/Frameworks/CoreServices.framework/Frameworks/CarbonCore.framework/Versions/A/Headers -I "$(DEVELOPER_DIR)/Extras/CoreAudio/AudioUnits/AUPublic/AUBase"
        -I "$ENV{HOME}/vst3sdk"
        -I "${PROJECT_SOURCE_DIR}/../../JuceLibraryCode"
        -I "$ENV{HOME}/JUCE/modules"
        -I "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client"
        ${AU_REZ_SOURCES}
        -o ${AU_REZ_OUTPUT}
    )
    set_source_files_properties (${AU_REZ_OUTPUT} PROPERTIES
        GENERATED TRUE
        MACOSX_PACKAGE_LOCATION Resources
    )
endif (RC_COMPILER)

set_target_properties (AU PROPERTIES
    OUTPUT_NAME "Overrdrive"
    CXX_STANDARD 11
    CXX_EXTENSIONS OFF
    XCODE_ATTRIBUTE_CLANG_LINK_OBJC_RUNTIME NO
    XCODE_ATTRIBUTE_COMBINE_HIDPI_IMAGES YES
    XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "$(PROJECT_DIR)/build/$(CONFIGURATION)"
    XCODE_ATTRIBUTE_COPY_PHASE_STRIP NO
    XCODE_ATTRIBUTE_DEPLOYMENT_LOCATION YES
    XCODE_ATTRIBUTE_DSTROOT /
    XCODE_ATTRIBUTE_GCC_DYNAMIC_NO_PIC NO
    XCODE_ATTRIBUTE_GCC_VERSION com.apple.compilers.llvm.clang.1_0
    XCODE_ATTRIBUTE_GENERATE_PKGINFO_FILE YES
    XCODE_ATTRIBUTE_INFOPLIST_FILE "/Users/savonetj/Documents/PERSO/OverdrivePlugin/Builds/CLion/Debug-Info-AU.plist"
    XCODE_ATTRIBUTE_INFOPLIST_PREPROCESS NO
    XCODE_ATTRIBUTE_INSTALL_PATH "$(HOME)/Library/Audio/Plug-Ins/Components/"
    XCODE_ATTRIBUTE_LIBRARY_STYLE Bundle
    XCODE_ATTRIBUTE_MACOSX_DEPLOYMENT_TARGET_ppc 10.4
    XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER com.savonetj.Overdrive
    XCODE_ATTRIBUTE_SDKROOT_ppc macosx10.5
    XCODE_ATTRIBUTE_USE_HEADERMAP NO
    XCODE_ATTRIBUTE_WRAPPER_EXTENSION component
    MACOSX_BUNDLE_INFO_PLIST "/Users/savonetj/Documents/PERSO/OverdrivePlugin/Builds/CLion/Debug-Info-AU.plist"
    XCODE_ATTRIBUTE_PRODUCT_NAME "Overrdrive"
    BUNDLE TRUE
    BUNDLE_EXTENSION component
    XCODE_ATTRIBUTE_MACH_O_TYPE "mh_bundle"
)

target_link_libraries (AU PRIVATE
    SHARED_CODE
    "-framework Accelerate"
    "-framework AudioToolbox"
    "-framework AudioUnit"
    "-framework AVFoundation"
    "-framework AVKit"
    "-framework Carbon"
    "-framework Cocoa"
    "-framework CoreAudio"
    "-framework CoreAudioKit"
    "-framework CoreMedia"
    "-framework CoreMIDI"
    "-framework DiscRecording"
    "-framework IOKit"
    "-framework OpenGL"
    "-framework QuartzCore"
    "-framework WebKit"
)

add_custom_command (TARGET AU POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E remove_directory "$ENV{HOME}/Library/Audio/Plug-Ins/Components/Overrdrive.component"
    COMMAND ${CMAKE_COMMAND} -E copy_directory "${CMAKE_BINARY_DIR}/Overrdrive.component" "$ENV{HOME}/Library/Audio/Plug-Ins/Components/Overrdrive.component"
    COMMENT "Copying \"Overrdrive.component\" to \"$ENV{HOME}/Library/Audio/Plug-Ins/Components/\""
)

target_include_directories (STANDALONE_PLUGIN PRIVATE
    "$ENV{HOME}/vst3sdk"
    "../../JuceLibraryCode"
    "$ENV{HOME}/JUCE/modules"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client"
)

target_compile_definitions (STANDALONE_PLUGIN PRIVATE
    "_DEBUG=1"
    "DEBUG=1"
    "JUCER_XCODE_MAC_F6D2F4CF=1"
    "JUCE_APP_VERSION=1.0.0"
    "JUCE_APP_VERSION_HEX=0x10000"
    "JucePlugin_Build_VST=0"
    "JucePlugin_Build_VST3=0"
    "JucePlugin_Build_AU=0"
    "JucePlugin_Build_AUv3=0"
    "JucePlugin_Build_RTAS=0"
    "JucePlugin_Build_AAX=0"
    "JucePlugin_Build_Standalone=1"
)

target_compile_options (STANDALONE_PLUGIN PRIVATE
    -mmacosx-version-min=10.11
    -O0
)

set_target_properties (STANDALONE_PLUGIN PROPERTIES
    OUTPUT_NAME "Overrdrive"
    CXX_STANDARD 11
    CXX_EXTENSIONS OFF
    XCODE_ATTRIBUTE_CLANG_LINK_OBJC_RUNTIME NO
    XCODE_ATTRIBUTE_COMBINE_HIDPI_IMAGES YES
    XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "$(PROJECT_DIR)/build/$(CONFIGURATION)"
    XCODE_ATTRIBUTE_COPY_PHASE_STRIP NO
    XCODE_ATTRIBUTE_GCC_DYNAMIC_NO_PIC NO
    XCODE_ATTRIBUTE_GCC_VERSION com.apple.compilers.llvm.clang.1_0
    XCODE_ATTRIBUTE_INFOPLIST_FILE "/Users/savonetj/Documents/PERSO/OverdrivePlugin/Builds/CLion/Debug-Info-Standalone_Plugin.plist"
    XCODE_ATTRIBUTE_INFOPLIST_PREPROCESS NO
    XCODE_ATTRIBUTE_MACOSX_DEPLOYMENT_TARGET_ppc 10.4
    XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER com.savonetj.Overdrive
    XCODE_ATTRIBUTE_SDKROOT_ppc macosx10.5
    XCODE_ATTRIBUTE_USE_HEADERMAP NO
    MACOSX_BUNDLE_INFO_PLIST "/Users/savonetj/Documents/PERSO/OverdrivePlugin/Builds/CLion/Debug-Info-Standalone_Plugin.plist"
    XCODE_ATTRIBUTE_PRODUCT_NAME "Overrdrive"
    MACOSX_BUNDLE TRUE
)

target_link_libraries (STANDALONE_PLUGIN PRIVATE
    SHARED_CODE
    "-framework Accelerate"
    "-framework AudioToolbox"
    "-framework AVFoundation"
    "-framework AVKit"
    "-framework Carbon"
    "-framework Cocoa"
    "-framework CoreAudio"
    "-framework CoreMedia"
    "-framework CoreMIDI"
    "-framework DiscRecording"
    "-framework IOKit"
    "-framework OpenGL"
    "-framework QuartzCore"
    "-framework WebKit"
)

target_include_directories (SHARED_CODE PRIVATE
    "$ENV{HOME}/vst3sdk"
    "../../JuceLibraryCode"
    "$ENV{HOME}/JUCE/modules"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client"
)

target_compile_definitions (SHARED_CODE PRIVATE
    "_DEBUG=1"
    "DEBUG=1"
    "JUCER_XCODE_MAC_F6D2F4CF=1"
    "JUCE_APP_VERSION=1.0.0"
    "JUCE_APP_VERSION_HEX=0x10000"
    "JucePlugin_Build_VST=1"
    "JucePlugin_Build_VST3=1"
    "JucePlugin_Build_AU=1"
    "JucePlugin_Build_AUv3=0"
    "JucePlugin_Build_RTAS=0"
    "JucePlugin_Build_AAX=0"
    "JucePlugin_Build_Standalone=1"
    "JUCE_SHARED_CODE=1"
)

target_compile_options (SHARED_CODE PRIVATE
    -mmacosx-version-min=10.11
    -O0
)

set_target_properties (SHARED_CODE PROPERTIES
    OUTPUT_NAME "Overrdrive"
    CXX_STANDARD 11
    CXX_EXTENSIONS OFF
    XCODE_ATTRIBUTE_CLANG_LINK_OBJC_RUNTIME NO
    XCODE_ATTRIBUTE_COMBINE_HIDPI_IMAGES YES
    XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "$(PROJECT_DIR)/build/$(CONFIGURATION)"
    XCODE_ATTRIBUTE_COPY_PHASE_STRIP NO
    XCODE_ATTRIBUTE_GCC_DYNAMIC_NO_PIC NO
    XCODE_ATTRIBUTE_GCC_VERSION com.apple.compilers.llvm.clang.1_0
    XCODE_ATTRIBUTE_INSTALL_PATH "@executable_path/../Frameworks"
    XCODE_ATTRIBUTE_MACOSX_DEPLOYMENT_TARGET_ppc 10.4
    XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER com.savonetj.Overdrive
    XCODE_ATTRIBUTE_SDKROOT_ppc macosx10.5
    XCODE_ATTRIBUTE_USE_HEADERMAP NO
)

target_link_libraries (SHARED_CODE PRIVATE
    "-framework Accelerate"
    "-framework AudioToolbox"
    "-framework AVFoundation"
    "-framework AVKit"
    "-framework Carbon"
    "-framework Cocoa"
    "-framework CoreAudio"
    "-framework CoreMedia"
    "-framework CoreMIDI"
    "-framework DiscRecording"
    "-framework IOKit"
    "-framework OpenGL"
    "-framework QuartzCore"
    "-framework WebKit"
)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-common -Wswitch -Wunused-variable -Wparentheses -Wnon-virtual-dtor -Wshorten-64-to-32 -Wundeclared-selector -Wuninitialized -Wunused-function -Wbool-conversion -Wcomma -Wconstant-conversion -Wempty-body -Wenum-conversion -Winfinite-recursion -Wint-conversion -Wrange-loop-analysis -Wstrict-prototypes -Wmove -Wunreachable-code -Wduplicate-method-match -Wreorder -fvisibility-inlines-hidden")
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${CMAKE_CXX_FLAGS}")

endif (CMAKE_BUILD_TYPE STREQUAL Debug)

#------------------------------------------------------------------------------
# Config: Release
#------------------------------------------------------------------------------

if (CMAKE_BUILD_TYPE STREQUAL Release)

execute_process (COMMAND uname -m OUTPUT_VARIABLE JUCE_ARCH_LABEL OUTPUT_STRIP_TRAILING_WHITESPACE)

target_include_directories (VST PRIVATE
    "$ENV{HOME}/vst3sdk"
    "../../JuceLibraryCode"
    "$ENV{HOME}/JUCE/modules"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client"
)

target_compile_definitions (VST PRIVATE
    "_NDEBUG=1"
    "NDEBUG=1"
    "JUCER_XCODE_MAC_F6D2F4CF=1"
    "JUCE_APP_VERSION=1.0.0"
    "JUCE_APP_VERSION_HEX=0x10000"
    "JucePlugin_Build_VST=1"
    "JucePlugin_Build_VST3=0"
    "JucePlugin_Build_AU=0"
    "JucePlugin_Build_AUv3=0"
    "JucePlugin_Build_RTAS=0"
    "JucePlugin_Build_AAX=0"
    "JucePlugin_Build_Standalone=0"
)

target_compile_options (VST PRIVATE
    -mmacosx-version-min=10.11
    -O3
    -flto
)

set_target_properties (VST PROPERTIES
    OUTPUT_NAME "Overrdrive"
    CXX_STANDARD 11
    CXX_EXTENSIONS OFF
    XCODE_ATTRIBUTE_CLANG_LINK_OBJC_RUNTIME NO
    XCODE_ATTRIBUTE_COMBINE_HIDPI_IMAGES YES
    XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "$(PROJECT_DIR)/build/$(CONFIGURATION)"
    XCODE_ATTRIBUTE_DEAD_CODE_STRIPPING YES
    XCODE_ATTRIBUTE_DEPLOYMENT_LOCATION YES
    XCODE_ATTRIBUTE_DSTROOT /
    XCODE_ATTRIBUTE_GCC_GENERATE_DEBUGGING_SYMBOLS NO
    XCODE_ATTRIBUTE_GCC_SYMBOLS_PRIVATE_EXTERN YES
    XCODE_ATTRIBUTE_GCC_VERSION com.apple.compilers.llvm.clang.1_0
    XCODE_ATTRIBUTE_GENERATE_PKGINFO_FILE YES
    XCODE_ATTRIBUTE_INFOPLIST_FILE "/Users/savonetj/Documents/PERSO/OverdrivePlugin/Builds/CLion/Release-Info-VST.plist"
    XCODE_ATTRIBUTE_INFOPLIST_PREPROCESS NO
    XCODE_ATTRIBUTE_INSTALL_PATH "$(HOME)/Library/Audio/Plug-Ins/VST/"
    XCODE_ATTRIBUTE_LIBRARY_STYLE Bundle
    XCODE_ATTRIBUTE_MACOSX_DEPLOYMENT_TARGET_ppc 10.4
    XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER com.savonetj.Overdrive
    XCODE_ATTRIBUTE_SDKROOT_ppc macosx10.5
    XCODE_ATTRIBUTE_USE_HEADERMAP NO
    XCODE_ATTRIBUTE_WRAPPER_EXTENSION vst
    MACOSX_BUNDLE_INFO_PLIST "/Users/savonetj/Documents/PERSO/OverdrivePlugin/Builds/CLion/Release-Info-VST.plist"
    XCODE_ATTRIBUTE_PRODUCT_NAME "Overrdrive"
    BUNDLE TRUE
    BUNDLE_EXTENSION vst
    XCODE_ATTRIBUTE_MACH_O_TYPE "mh_bundle"
)

target_link_libraries (VST PRIVATE
    SHARED_CODE
    "-framework Accelerate"
    "-framework AudioToolbox"
    "-framework AVFoundation"
    "-framework AVKit"
    "-framework Carbon"
    "-framework Cocoa"
    "-framework CoreAudio"
    "-framework CoreMedia"
    "-framework CoreMIDI"
    "-framework DiscRecording"
    "-framework IOKit"
    "-framework OpenGL"
    "-framework QuartzCore"
    "-framework WebKit"
)

add_custom_command (TARGET VST POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E remove_directory "$ENV{HOME}/Library/Audio/Plug-Ins/VST/Overrdrive.vst"
    COMMAND ${CMAKE_COMMAND} -E copy_directory "${CMAKE_BINARY_DIR}/Overrdrive.vst" "$ENV{HOME}/Library/Audio/Plug-Ins/VST/Overrdrive.vst"
    COMMENT "Copying \"Overrdrive.vst\" to \"$ENV{HOME}/Library/Audio/Plug-Ins/VST/\""
)

target_include_directories (VST3 PRIVATE
    "$ENV{HOME}/vst3sdk"
    "../../JuceLibraryCode"
    "$ENV{HOME}/JUCE/modules"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client"
)

target_compile_definitions (VST3 PRIVATE
    "_NDEBUG=1"
    "NDEBUG=1"
    "JUCER_XCODE_MAC_F6D2F4CF=1"
    "JUCE_APP_VERSION=1.0.0"
    "JUCE_APP_VERSION_HEX=0x10000"
    "JucePlugin_Build_VST=0"
    "JucePlugin_Build_VST3=1"
    "JucePlugin_Build_AU=0"
    "JucePlugin_Build_AUv3=0"
    "JucePlugin_Build_RTAS=0"
    "JucePlugin_Build_AAX=0"
    "JucePlugin_Build_Standalone=0"
)

target_compile_options (VST3 PRIVATE
    -mmacosx-version-min=10.11
    -O3
    -flto
)

set_target_properties (VST3 PROPERTIES
    OUTPUT_NAME "Overrdrive"
    CXX_STANDARD 11
    CXX_EXTENSIONS OFF
    XCODE_ATTRIBUTE_CLANG_LINK_OBJC_RUNTIME NO
    XCODE_ATTRIBUTE_COMBINE_HIDPI_IMAGES YES
    XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "$(PROJECT_DIR)/build/$(CONFIGURATION)"
    XCODE_ATTRIBUTE_DEAD_CODE_STRIPPING YES
    XCODE_ATTRIBUTE_DEPLOYMENT_LOCATION YES
    XCODE_ATTRIBUTE_DSTROOT /
    XCODE_ATTRIBUTE_GCC_GENERATE_DEBUGGING_SYMBOLS NO
    XCODE_ATTRIBUTE_GCC_SYMBOLS_PRIVATE_EXTERN YES
    XCODE_ATTRIBUTE_GCC_VERSION com.apple.compilers.llvm.clang.1_0
    XCODE_ATTRIBUTE_GENERATE_PKGINFO_FILE YES
    XCODE_ATTRIBUTE_INFOPLIST_FILE "/Users/savonetj/Documents/PERSO/OverdrivePlugin/Builds/CLion/Release-Info-VST3.plist"
    XCODE_ATTRIBUTE_INFOPLIST_PREPROCESS NO
    XCODE_ATTRIBUTE_INSTALL_PATH "$(HOME)/Library/Audio/Plug-Ins/VST3/"
    XCODE_ATTRIBUTE_LIBRARY_STYLE Bundle
    XCODE_ATTRIBUTE_MACOSX_DEPLOYMENT_TARGET_ppc 10.4
    XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER com.savonetj.Overdrive
    XCODE_ATTRIBUTE_SDKROOT_ppc macosx10.5
    XCODE_ATTRIBUTE_USE_HEADERMAP NO
    XCODE_ATTRIBUTE_WRAPPER_EXTENSION vst3
    MACOSX_BUNDLE_INFO_PLIST "/Users/savonetj/Documents/PERSO/OverdrivePlugin/Builds/CLion/Release-Info-VST3.plist"
    XCODE_ATTRIBUTE_PRODUCT_NAME "Overrdrive"
    BUNDLE TRUE
    BUNDLE_EXTENSION vst3
    XCODE_ATTRIBUTE_MACH_O_TYPE "mh_bundle"
)

target_link_libraries (VST3 PRIVATE
    SHARED_CODE
    "-framework Accelerate"
    "-framework AudioToolbox"
    "-framework AVFoundation"
    "-framework AVKit"
    "-framework Carbon"
    "-framework Cocoa"
    "-framework CoreAudio"
    "-framework CoreMedia"
    "-framework CoreMIDI"
    "-framework DiscRecording"
    "-framework IOKit"
    "-framework OpenGL"
    "-framework QuartzCore"
    "-framework WebKit"
)

add_custom_command (TARGET VST3 POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E remove_directory "$ENV{HOME}/Library/Audio/Plug-Ins/VST3/Overrdrive.vst3"
    COMMAND ${CMAKE_COMMAND} -E copy_directory "${CMAKE_BINARY_DIR}/Overrdrive.vst3" "$ENV{HOME}/Library/Audio/Plug-Ins/VST3/Overrdrive.vst3"
    COMMENT "Copying \"Overrdrive.vst3\" to \"$ENV{HOME}/Library/Audio/Plug-Ins/VST3/\""
)

target_include_directories (AU PRIVATE
    "$ENV{HOME}/vst3sdk"
    "../../JuceLibraryCode"
    "$ENV{HOME}/JUCE/modules"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client"
)

target_compile_definitions (AU PRIVATE
    "_NDEBUG=1"
    "NDEBUG=1"
    "JUCER_XCODE_MAC_F6D2F4CF=1"
    "JUCE_APP_VERSION=1.0.0"
    "JUCE_APP_VERSION_HEX=0x10000"
    "JucePlugin_Build_VST=0"
    "JucePlugin_Build_VST3=0"
    "JucePlugin_Build_AU=1"
    "JucePlugin_Build_AUv3=0"
    "JucePlugin_Build_RTAS=0"
    "JucePlugin_Build_AAX=0"
    "JucePlugin_Build_Standalone=0"
)

target_compile_options (AU PRIVATE
    -mmacosx-version-min=10.11
    -O3
    -flto
)

if (RC_COMPILER)
    set (AU_REZ_SOURCES
        "/Users/savonetj/Documents/PERSO/OverdrivePlugin/JuceLibraryCode/include_juce_audio_plugin_client_AU.r"
    )
    set (AU_REZ_OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/Overrdrive.rsrc")
    target_sources (AU PRIVATE
        ${AU_REZ_SOURCES}
        ${AU_REZ_OUTPUT}
    )
    execute_process (COMMAND
        ${RC_COMPILER}
        -d ppc_$ppc -d i386_$i386 -d ppc64_$ppc64 -d x86_64_$x86_64 -I /System/Library/Frameworks/CoreServices.framework/Frameworks/CarbonCore.framework/Versions/A/Headers -I "$(DEVELOPER_DIR)/Extras/CoreAudio/AudioUnits/AUPublic/AUBase"
        -I "$ENV{HOME}/vst3sdk"
        -I "${PROJECT_SOURCE_DIR}/../../JuceLibraryCode"
        -I "$ENV{HOME}/JUCE/modules"
        -I "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client"
        ${AU_REZ_SOURCES}
        -o ${AU_REZ_OUTPUT}
    )
    set_source_files_properties (${AU_REZ_OUTPUT} PROPERTIES
        GENERATED TRUE
        MACOSX_PACKAGE_LOCATION Resources
    )
endif (RC_COMPILER)

set_target_properties (AU PROPERTIES
    OUTPUT_NAME "Overrdrive"
    CXX_STANDARD 11
    CXX_EXTENSIONS OFF
    XCODE_ATTRIBUTE_CLANG_LINK_OBJC_RUNTIME NO
    XCODE_ATTRIBUTE_COMBINE_HIDPI_IMAGES YES
    XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "$(PROJECT_DIR)/build/$(CONFIGURATION)"
    XCODE_ATTRIBUTE_DEAD_CODE_STRIPPING YES
    XCODE_ATTRIBUTE_DEPLOYMENT_LOCATION YES
    XCODE_ATTRIBUTE_DSTROOT /
    XCODE_ATTRIBUTE_GCC_GENERATE_DEBUGGING_SYMBOLS NO
    XCODE_ATTRIBUTE_GCC_SYMBOLS_PRIVATE_EXTERN YES
    XCODE_ATTRIBUTE_GCC_VERSION com.apple.compilers.llvm.clang.1_0
    XCODE_ATTRIBUTE_GENERATE_PKGINFO_FILE YES
    XCODE_ATTRIBUTE_INFOPLIST_FILE "/Users/savonetj/Documents/PERSO/OverdrivePlugin/Builds/CLion/Release-Info-AU.plist"
    XCODE_ATTRIBUTE_INFOPLIST_PREPROCESS NO
    XCODE_ATTRIBUTE_INSTALL_PATH "$(HOME)/Library/Audio/Plug-Ins/Components/"
    XCODE_ATTRIBUTE_LIBRARY_STYLE Bundle
    XCODE_ATTRIBUTE_MACOSX_DEPLOYMENT_TARGET_ppc 10.4
    XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER com.savonetj.Overdrive
    XCODE_ATTRIBUTE_SDKROOT_ppc macosx10.5
    XCODE_ATTRIBUTE_USE_HEADERMAP NO
    XCODE_ATTRIBUTE_WRAPPER_EXTENSION component
    MACOSX_BUNDLE_INFO_PLIST "/Users/savonetj/Documents/PERSO/OverdrivePlugin/Builds/CLion/Release-Info-AU.plist"
    XCODE_ATTRIBUTE_PRODUCT_NAME "Overrdrive"
    BUNDLE TRUE
    BUNDLE_EXTENSION component
    XCODE_ATTRIBUTE_MACH_O_TYPE "mh_bundle"
)

target_link_libraries (AU PRIVATE
    SHARED_CODE
    "-framework Accelerate"
    "-framework AudioToolbox"
    "-framework AudioUnit"
    "-framework AVFoundation"
    "-framework AVKit"
    "-framework Carbon"
    "-framework Cocoa"
    "-framework CoreAudio"
    "-framework CoreAudioKit"
    "-framework CoreMedia"
    "-framework CoreMIDI"
    "-framework DiscRecording"
    "-framework IOKit"
    "-framework OpenGL"
    "-framework QuartzCore"
    "-framework WebKit"
)

add_custom_command (TARGET AU POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E remove_directory "$ENV{HOME}/Library/Audio/Plug-Ins/Components/Overrdrive.component"
    COMMAND ${CMAKE_COMMAND} -E copy_directory "${CMAKE_BINARY_DIR}/Overrdrive.component" "$ENV{HOME}/Library/Audio/Plug-Ins/Components/Overrdrive.component"
    COMMENT "Copying \"Overrdrive.component\" to \"$ENV{HOME}/Library/Audio/Plug-Ins/Components/\""
)

target_include_directories (STANDALONE_PLUGIN PRIVATE
    "$ENV{HOME}/vst3sdk"
    "../../JuceLibraryCode"
    "$ENV{HOME}/JUCE/modules"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client"
)

target_compile_definitions (STANDALONE_PLUGIN PRIVATE
    "_NDEBUG=1"
    "NDEBUG=1"
    "JUCER_XCODE_MAC_F6D2F4CF=1"
    "JUCE_APP_VERSION=1.0.0"
    "JUCE_APP_VERSION_HEX=0x10000"
    "JucePlugin_Build_VST=0"
    "JucePlugin_Build_VST3=0"
    "JucePlugin_Build_AU=0"
    "JucePlugin_Build_AUv3=0"
    "JucePlugin_Build_RTAS=0"
    "JucePlugin_Build_AAX=0"
    "JucePlugin_Build_Standalone=1"
)

target_compile_options (STANDALONE_PLUGIN PRIVATE
    -mmacosx-version-min=10.11
    -O3
    -flto
)

set_target_properties (STANDALONE_PLUGIN PROPERTIES
    OUTPUT_NAME "Overrdrive"
    CXX_STANDARD 11
    CXX_EXTENSIONS OFF
    XCODE_ATTRIBUTE_CLANG_LINK_OBJC_RUNTIME NO
    XCODE_ATTRIBUTE_COMBINE_HIDPI_IMAGES YES
    XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "$(PROJECT_DIR)/build/$(CONFIGURATION)"
    XCODE_ATTRIBUTE_DEAD_CODE_STRIPPING YES
    XCODE_ATTRIBUTE_GCC_GENERATE_DEBUGGING_SYMBOLS NO
    XCODE_ATTRIBUTE_GCC_SYMBOLS_PRIVATE_EXTERN YES
    XCODE_ATTRIBUTE_GCC_VERSION com.apple.compilers.llvm.clang.1_0
    XCODE_ATTRIBUTE_INFOPLIST_FILE "/Users/savonetj/Documents/PERSO/OverdrivePlugin/Builds/CLion/Release-Info-Standalone_Plugin.plist"
    XCODE_ATTRIBUTE_INFOPLIST_PREPROCESS NO
    XCODE_ATTRIBUTE_MACOSX_DEPLOYMENT_TARGET_ppc 10.4
    XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER com.savonetj.Overdrive
    XCODE_ATTRIBUTE_SDKROOT_ppc macosx10.5
    XCODE_ATTRIBUTE_USE_HEADERMAP NO
    MACOSX_BUNDLE_INFO_PLIST "/Users/savonetj/Documents/PERSO/OverdrivePlugin/Builds/CLion/Release-Info-Standalone_Plugin.plist"
    XCODE_ATTRIBUTE_PRODUCT_NAME "Overrdrive"
    MACOSX_BUNDLE TRUE
)

target_link_libraries (STANDALONE_PLUGIN PRIVATE
    SHARED_CODE
    "-framework Accelerate"
    "-framework AudioToolbox"
    "-framework AVFoundation"
    "-framework AVKit"
    "-framework Carbon"
    "-framework Cocoa"
    "-framework CoreAudio"
    "-framework CoreMedia"
    "-framework CoreMIDI"
    "-framework DiscRecording"
    "-framework IOKit"
    "-framework OpenGL"
    "-framework QuartzCore"
    "-framework WebKit"
)

target_include_directories (SHARED_CODE PRIVATE
    "$ENV{HOME}/vst3sdk"
    "../../JuceLibraryCode"
    "$ENV{HOME}/JUCE/modules"
    "$ENV{HOME}/JUCE/modules/juce_audio_plugin_client"
)

target_compile_definitions (SHARED_CODE PRIVATE
    "_NDEBUG=1"
    "NDEBUG=1"
    "JUCER_XCODE_MAC_F6D2F4CF=1"
    "JUCE_APP_VERSION=1.0.0"
    "JUCE_APP_VERSION_HEX=0x10000"
    "JucePlugin_Build_VST=1"
    "JucePlugin_Build_VST3=1"
    "JucePlugin_Build_AU=1"
    "JucePlugin_Build_AUv3=0"
    "JucePlugin_Build_RTAS=0"
    "JucePlugin_Build_AAX=0"
    "JucePlugin_Build_Standalone=1"
    "JUCE_SHARED_CODE=1"
)

target_compile_options (SHARED_CODE PRIVATE
    -mmacosx-version-min=10.11
    -O3
    -flto
)

set_target_properties (SHARED_CODE PROPERTIES
    OUTPUT_NAME "Overrdrive"
    CXX_STANDARD 11
    CXX_EXTENSIONS OFF
    XCODE_ATTRIBUTE_CLANG_LINK_OBJC_RUNTIME NO
    XCODE_ATTRIBUTE_COMBINE_HIDPI_IMAGES YES
    XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "$(PROJECT_DIR)/build/$(CONFIGURATION)"
    XCODE_ATTRIBUTE_DEAD_CODE_STRIPPING YES
    XCODE_ATTRIBUTE_GCC_GENERATE_DEBUGGING_SYMBOLS NO
    XCODE_ATTRIBUTE_GCC_SYMBOLS_PRIVATE_EXTERN YES
    XCODE_ATTRIBUTE_GCC_VERSION com.apple.compilers.llvm.clang.1_0
    XCODE_ATTRIBUTE_INSTALL_PATH "@executable_path/../Frameworks"
    XCODE_ATTRIBUTE_MACOSX_DEPLOYMENT_TARGET_ppc 10.4
    XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER com.savonetj.Overdrive
    XCODE_ATTRIBUTE_SDKROOT_ppc macosx10.5
    XCODE_ATTRIBUTE_USE_HEADERMAP NO
)

target_link_libraries (SHARED_CODE PRIVATE
    "-framework Accelerate"
    "-framework AudioToolbox"
    "-framework AVFoundation"
    "-framework AVKit"
    "-framework Carbon"
    "-framework Cocoa"
    "-framework CoreAudio"
    "-framework CoreMedia"
    "-framework CoreMIDI"
    "-framework DiscRecording"
    "-framework IOKit"
    "-framework OpenGL"
    "-framework QuartzCore"
    "-framework WebKit"
)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-common -Wswitch -Wunused-variable -Wparentheses -Wnon-virtual-dtor -Wshorten-64-to-32 -Wundeclared-selector -Wuninitialized -Wunused-function -Wbool-conversion -Wcomma -Wconstant-conversion -Wempty-body -Wenum-conversion -Winfinite-recursion -Wint-conversion -Wrange-loop-analysis -Wstrict-prototypes -Wmove -Wunreachable-code -Wduplicate-method-match -Wreorder -fvisibility-inlines-hidden")
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${CMAKE_CXX_FLAGS}")

endif (CMAKE_BUILD_TYPE STREQUAL Release)

endif()

