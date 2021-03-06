#include "pistache/endpoint.h"
#include "pistache/http.h"
#include "pistache/router.h"
#ifdef __linux__
#include <vector>
#include <signal.h>
#include <unistd.h>
#endif

#include "amf-services.h"

#ifdef __linux__
void sigHandler(int sig){
    switch(sig){
        case SIGINT:
        case SIGQUIT:
        case SIGTERM:
        case SIGHUP:
        default:
            break;
    }
    exit(0);
}

void setUpUnixSignals(std::vector<int> quitSignals) {
    sigset_t blocking_mask;
    sigemptyset(&blocking_mask);
    for (auto sig : quitSignals)
        sigaddset(&blocking_mask, sig);

    struct sigaction sa;
    sa.sa_handler = sigHandler;
    sa.sa_mask    = blocking_mask;
    sa.sa_flags   = 0;

    for (auto sig : quitSignals)
        sigaction(sig, &sa, nullptr);
}
#endif


void AMFServicesManager::init(size_t thr) {
	auto opts = Pistache::Http::Endpoint::options()
	.threads(thr);
	m_httpEndpoint->init(opts);
	m_AMFStatusChangeSubscribeApiImpl->init();
	m_AMFStatusChangeSubscribeModifyApiImpl->init();
	m_AMFStatusChangeUnSubscribeApiImpl->init();
	m_CreateUEContxtApiImpl->init();
	m_EBIAssignmentApiImpl->init();
	m_N1N2MessageSubscribeApiImpl->init();
	m_N1N2MessageTransferApiImpl->init();
	m_N1N2MessageUnSubscribeApiImpl->init();
	m_NonUEN2InfoSubscribeApiImpl->init();
	m_NonUEN2InfoUnSubscribeApiImpl->init();
	m_NonUEN2MessageTransferApiImpl->init();
	m_ReleaseUEContxtApiImpl->init();
	m_UEContextTransferApiImpl->init();
    //Event Exposure Services
	//m_CreateSubscriptionApiImpl->init();
	//m_DeleteSubscriptionApiImpl->init();
	//m_ModifySubscriptionApiImpl->init();
	//Location Service
	m_ProvideLocationApiImpl->init();
    //MT Service
    m_EnableUEReachabilityApiImpl->init();
    m_ProvideDomainSelectionInfoApiImpl->init();


}
void AMFServicesManager::start(){
	m_httpEndpoint->setHandler(m_router->handler());
	m_httpEndpoint->serve();
	//m_httpEndpoint->serveThreaded();

}
void AMFServicesManager::shutdown(){
	m_httpEndpoint->shutdown();
}

/* std::unordered_map<std::string,org::openapitools::server::model::UeContext> RecordUEContext;

int main() {
#ifdef __linux__
    std::vector<int> sigs{SIGQUIT, SIGINT, SIGTERM, SIGHUP};
    setUpUnixSignals(sigs);
#endif

    Pistache::Address addr(Pistache::Ipv4::any(), Pistache::Port(8080));
    AMFServicesManager amfServiceManager(addr);
    amfServiceManager.init(2);
    amfServiceManager.start();
    amfServiceManager.shutdown();

}

*/
