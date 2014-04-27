//// =============================================================================
////
//// Copyright (c) 2013 Christopher Baker <http://christopherbaker.net>
////
//// Permission is hereby granted, free of charge, to any person obtaining a copy
//// of this software and associated documentation files (the "Software"), to deal
//// in the Software without restriction, including without limitation the rights
//// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//// copies of the Software, and to permit persons to whom the Software is
//// furnished to do so, subject to the following conditions:
////
//// The above copyright notice and this permission notice shall be included in
//// all copies or substantial portions of the Software.
////
//// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//// THE SOFTWARE.
////
//// =============================================================================
//
//
//#pragma once
//
//
//#include <istream>
////#include <vector>
////#include "Poco/URI.h"
//#include "Poco/Exception.h"
//#include "Poco/NullStream.h"
//#include "Poco/Runnable.h"
////#include "Poco/Net/HTTPCookie.h"
//#include "Poco/Net/HTTPClientSession.h"
//#include "Poco/Net/HTTPSClientSession.h"
//#include "Poco/Net/HTTPResponse.h"
//#include "Poco/Net/HTTPIOStream.h"
//#include "ofSSLManager.h"
//#include "ofx/HTTP/Client/BaseRequest.h"
//#include "ofx/HTTP/Client/Context.h"
//#include "ofx/HTTP/Types/StreamUtils.h"
//#include "ofTypes.h"
//
//
//namespace ofx {
//namespace HTTP {
//namespace Client {
//
//
//class ResponseStream
//{
//public:
//    typedef std::shared_ptr<ResponseStream> SharedPtr;
//    typedef std::weak_ptr<ResponseStream>   WeakPtr;
//
//    virtual ~ResponseStream();
//
//    bool hasResponseStream() const;
//    std::istream& getResponseStreamRef();
//
//    bool hasException() const;
//    const Poco::Exception* getException() const;
//
//    static SharedPtr createResponseStream(BaseRequest& request,
//                                          Context::SharedPtr context);
//
//protected:
//    ResponseStream(Poco::Net::HTTPResponse& httpResponseRef,
//                   Poco::Net::HTTPResponseStream* pResponseStream,
//                   Poco::Exception* pException = 0);
//
//
//    Poco::Net::HTTPResponse& _httpResponseRef;
//    Poco::Net::HTTPResponseStream* _pResponseStream;
//    Poco::Exception* _pException;
//
//
//    static SharedPtr makeShared(Poco::Net::HTTPResponse& httpResponseRef,
//                                Poco::Net::HTTPResponseStream* pResponseStream,
//                                Poco::Exception* pException = 0)
//    {
//        return SharedPtr(new ResponseStream(httpResponseRef,
//                                            pResponseStream,
//                                            pException));
//    }
//
//
//};
//
//
//} } } // namespace ofx::HTTP::Client
