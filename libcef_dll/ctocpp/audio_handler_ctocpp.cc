// Copyright (c) 2019 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=280f9ca344ead60b5e6bde70bdd9b155f0a8060a$
//

#include "libcef_dll/ctocpp/audio_handler_ctocpp.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefAudioHandlerCToCpp::OnAudioStreamStarted(CefRefPtr<CefBrowser> browser,
                                                 int audio_stream_id,
                                                 int channels,
                                                 ChannelLayout channel_layout,
                                                 int sample_rate,
                                                 int frames_per_buffer) {
  cef_audio_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_audio_stream_started))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  _struct->on_audio_stream_started(_struct, CefBrowserCppToC::Wrap(browser),
                                   audio_stream_id, channels, channel_layout,
                                   sample_rate, frames_per_buffer);
}

NO_SANITIZE("cfi-icall")
void CefAudioHandlerCToCpp::OnAudioStreamPacket(CefRefPtr<CefBrowser> browser,
                                                int audio_stream_id,
                                                const float** data,
                                                int frames,
                                                int64 pts) {
  cef_audio_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_audio_stream_packet))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Verify param: data; type: simple_byaddr
  DCHECK(data);
  if (!data)
    return;

  // Execute
  _struct->on_audio_stream_packet(_struct, CefBrowserCppToC::Wrap(browser),
                                  audio_stream_id, data, frames, pts);
}

NO_SANITIZE("cfi-icall")
void CefAudioHandlerCToCpp::OnAudioStreamStopped(CefRefPtr<CefBrowser> browser,
                                                 int audio_stream_id) {
  cef_audio_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_audio_stream_stopped))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  _struct->on_audio_stream_stopped(_struct, CefBrowserCppToC::Wrap(browser),
                                   audio_stream_id);
}

// CONSTRUCTOR - Do not edit by hand.

CefAudioHandlerCToCpp::CefAudioHandlerCToCpp() {}

template <>
cef_audio_handler_t*
CefCToCppRefCounted<CefAudioHandlerCToCpp,
                    CefAudioHandler,
                    cef_audio_handler_t>::UnwrapDerived(CefWrapperType type,
                                                        CefAudioHandler* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCToCppRefCounted<CefAudioHandlerCToCpp,
                                         CefAudioHandler,
                                         cef_audio_handler_t>::DebugObjCt
    ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCToCppRefCounted<CefAudioHandlerCToCpp,
                                   CefAudioHandler,
                                   cef_audio_handler_t>::kWrapperType =
    WT_AUDIO_HANDLER;
