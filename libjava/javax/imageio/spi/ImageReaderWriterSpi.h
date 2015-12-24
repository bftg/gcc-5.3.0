
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_imageio_spi_ImageReaderWriterSpi__
#define __javax_imageio_spi_ImageReaderWriterSpi__

#pragma interface

#include <javax/imageio/spi/IIOServiceProvider.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace imageio
    {
      namespace metadata
      {
          class IIOMetadataFormat;
      }
      namespace spi
      {
          class ImageReaderWriterSpi;
      }
    }
  }
}

class javax::imageio::spi::ImageReaderWriterSpi : public ::javax::imageio::spi::IIOServiceProvider
{

public:
  ImageReaderWriterSpi();
  ImageReaderWriterSpi(::java::lang::String *, ::java::lang::String *, JArray< ::java::lang::String * > *, JArray< ::java::lang::String * > *, JArray< ::java::lang::String * > *, ::java::lang::String *, jboolean, ::java::lang::String *, ::java::lang::String *, JArray< ::java::lang::String * > *, JArray< ::java::lang::String * > *, jboolean, ::java::lang::String *, ::java::lang::String *, JArray< ::java::lang::String * > *, JArray< ::java::lang::String * > *);
  virtual JArray< ::java::lang::String * > * getFormatNames();
  virtual JArray< ::java::lang::String * > * getFileSuffixes();
  virtual JArray< ::java::lang::String * > * getMIMETypes();
  virtual ::java::lang::String * getPluginClassName();
  virtual jboolean isStandardStreamMetadataFormatSupported();
  virtual ::java::lang::String * getNativeStreamMetadataFormatName();
  virtual JArray< ::java::lang::String * > * getExtraStreamMetadataFormatNames();
  virtual jboolean isStandardImageMetadataFormatSupported();
  virtual ::java::lang::String * getNativeImageMetadataFormatName();
  virtual JArray< ::java::lang::String * > * getExtraImageMetadataFormatNames();
  virtual ::javax::imageio::metadata::IIOMetadataFormat * getStreamMetadataFormat(::java::lang::String *);
  virtual ::javax::imageio::metadata::IIOMetadataFormat * getImageMetadataFormat(::java::lang::String *);
public: // actually protected
  JArray< ::java::lang::String * > * __attribute__((aligned(__alignof__( ::javax::imageio::spi::IIOServiceProvider)))) names;
  JArray< ::java::lang::String * > * suffixes;
  JArray< ::java::lang::String * > * MIMETypes;
  ::java::lang::String * pluginClassName;
  jboolean supportsStandardStreamMetadataFormat;
  ::java::lang::String * nativeStreamMetadataFormatName;
  ::java::lang::String * nativeStreamMetadataFormatClassName;
  JArray< ::java::lang::String * > * extraStreamMetadataFormatNames;
  JArray< ::java::lang::String * > * extraStreamMetadataFormatClassNames;
  jboolean supportsStandardImageMetadataFormat;
  ::java::lang::String * nativeImageMetadataFormatName;
  ::java::lang::String * nativeImageMetadataFormatClassName;
  JArray< ::java::lang::String * > * extraImageMetadataFormatNames;
  JArray< ::java::lang::String * > * extraImageMetadataFormatClassNames;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_imageio_spi_ImageReaderWriterSpi__