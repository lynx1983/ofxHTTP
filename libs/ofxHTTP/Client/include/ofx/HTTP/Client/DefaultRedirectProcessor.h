// =============================================================================
//
// Copyright (c) 2013 Christopher Baker <http://christopherbaker.net>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
// =============================================================================


#pragma once


#include "ofx/HTTP/Client/BaseRequestResponseProcessor.h"


namespace ofx {
namespace HTTP {


/// \brief A simple default client redirect policy.
///
/// This redirect policy will attempt to redirect response codes:
///
///     - 301 Moved Permanently
///     - 302 Found
///     - 303 See Other
///     - 307 Temporary Redirect
///
/// Additionally, this policy will will redirect content containing requests
/// such as POST and PUT by converting their request type to a GET.
class DefaultRedirectProcessor: public BaseRequestResponseProcessor
{
public:
    DefaultRedirectProcessor();
    
    virtual ~DefaultRedirectProcessor();

    virtual void processRequest(Client::BaseRequest& request,
                                Context& context);

    virtual bool handleResponse(Client::BaseRequest& request,
                                Client::BaseResponse& response,
                                Context& context);

};



} } // namespace ofx::HTTP
