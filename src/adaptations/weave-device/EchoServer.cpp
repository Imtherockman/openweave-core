/*
 *
 *    Copyright (c) 2018 Nest Labs, Inc.
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#include <Weave/DeviceLayer/internal/WeaveDeviceInternal.h>
#include <Weave/DeviceLayer/internal/EchoServer.h>

using namespace ::nl;
using namespace ::nl::Weave;

namespace nl {
namespace Weave {
namespace Device {
namespace Internal {

WEAVE_ERROR EchoServer::Init()
{
    WEAVE_ERROR err;

    err = ServerBaseClass::Init(&::nl::Weave::Device::ExchangeMgr, ServerBaseClass::DefaultEventHandler);
    SuccessOrExit(err);

exit:
    return err;
}

} // namespace Internal
} // namespace Device
} // namespace Weave
} // namespace nl
