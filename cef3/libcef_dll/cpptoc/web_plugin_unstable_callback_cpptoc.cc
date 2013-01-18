// Copyright (c) 2013 The Chromium Embedded Framework Authors. All rights
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

#include "libcef_dll/cpptoc/web_plugin_unstable_callback_cpptoc.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK web_plugin_unstable_callback_is_unstable(
    struct _cef_web_plugin_unstable_callback_t* self, const cef_string_t* path,
    int unstable) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: path; type: string_byref_const
  DCHECK(path);
  if (!path)
    return;

  // Execute
  CefWebPluginUnstableCallbackCppToC::Get(self)->IsUnstable(
      CefString(path),
      unstable?true:false);
}


// CONSTRUCTOR - Do not edit by hand.

CefWebPluginUnstableCallbackCppToC::CefWebPluginUnstableCallbackCppToC(
    CefWebPluginUnstableCallback* cls)
    : CefCppToC<CefWebPluginUnstableCallbackCppToC,
        CefWebPluginUnstableCallback, cef_web_plugin_unstable_callback_t>(
        cls) {
  struct_.struct_.is_unstable = web_plugin_unstable_callback_is_unstable;
}

#ifndef NDEBUG
template<> long CefCppToC<CefWebPluginUnstableCallbackCppToC,
    CefWebPluginUnstableCallback,
    cef_web_plugin_unstable_callback_t>::DebugObjCt = 0;
#endif
