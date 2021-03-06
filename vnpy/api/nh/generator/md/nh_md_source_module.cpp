.def("reqUtpLogin", &MdApi::reqUtpLogin)
.def("reqUtpLogout", &MdApi::reqUtpLogout)
.def("reqSubscribe", &MdApi::reqSubscribe)
.def("reqUnSubscribe", &MdApi::reqUnSubscribe)
.def("reqAuthUserPasswor", &MdApi::reqAuthUserPasswor)
.def("reqQryExchange", &MdApi::reqQryExchange)
.def("reqQryInstrument", &MdApi::reqQryInstrument)

.def("onFrontConnected", &MdApi::onFrontConnected)
.def("onFrontDisConnected", &MdApi::onFrontDisConnected)
.def("onHeartBeatWarning", &MdApi::onHeartBeatWarning)
.def("onRspError", &MdApi::onRspError)
.def("onRtnMarketData", &MdApi::onRtnMarketData)
.def("onRspUtpLogin", &MdApi::onRspUtpLogin)
.def("onRspUtpLogout", &MdApi::onRspUtpLogout)
.def("onRspSubscribe", &MdApi::onRspSubscribe)
.def("onRspUnSubscribe", &MdApi::onRspUnSubscribe)
.def("onRspQryExchange", &MdApi::onRspQryExchange)
.def("onRspQryInstrument", &MdApi::onRspQryInstrument)
;
