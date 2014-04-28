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


#include "Poco/InflatingStream.h"
#include "ofx/HTTP/Client/AbstractClientTypes.h"
#include "ofx/HTTP/Client/BaseClientProcessors.h"
#include "ofx/HTTP/Client/BaseRequest.h"
#include "ofx/HTTP/Client/BaseResponse.h"


namespace ofx {
namespace HTTP {
namespace Client {


class BaseClient: public BaseClientProcessors
{
public:
    BaseClient(AbstractSessionProvider& sessionProvider,
               AbstractRequestResponseProcessor& proxyProcessor,
               AbstractRequestResponseProcessor& authenticationProcessor,
               AbstractRequestResponseProcessor& redirectProcessor);

    virtual ~BaseClient();

    std::istream& execute(Client::BaseRequest& request,
                          Client::BaseResponse& response,
                          Context& context);

    void execute(Client::BaseRequest& request,
                 Client::BaseResponse& response,
                 Context& context,
                 ofBuffer& buffer);

    bool isRunning() const;
    void cancel();

private:
    bool _isRunning;

    AbstractSessionProvider& _sessionProvider;
    AbstractRequestResponseProcessor& _proxyProcessor;
    AbstractRequestResponseProcessor& _authenticationProcessor;
    AbstractRequestResponseProcessor& _redirectProcessor;

//    std::istream* _pDecodedResponseStream;

    static const std::string ACCEPT_ENCODING_HEADER;
    static const std::string CONTENT_ENCODING_HEADER;

};


typedef BaseClient DefaultClient;


} } } // namespace ofx::HTTP::Client
