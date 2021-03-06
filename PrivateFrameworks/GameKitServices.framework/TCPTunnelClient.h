/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSData, NSDictionary, NSMutableData, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, TCPBufferPool;

@interface TCPTunnelClient : NSObject <VideoConferenceRealTimeChannel> {
    struct tagIPPORT { 
        int iFlags; 
        BOOL szIfName[16]; 
        union { 
            unsigned int dwIPv4; 
            unsigned char abIPv6[16]; 
        } IP; 
        unsigned short wPort; 
    NSData *_allocateReq;
    id _allocationResponseHandler;
    double _allocationTimestamp;
    id _bindingResponseHandler;
    TCPBufferPool *_bufferPool;
    NSData *_channelBReq;
    unsigned short _channelNumber;
    int _connectState;
    int _connectedFD;
    unsigned short _currentMsgType;
    long long _currentPadding;
    long long _currentlyReadingDataGoalLength;
    NSMutableData *_currentlyReadingMessage;
    id _destroyHandler;
    float _fTimeout;
    id _handler;
    int _head;
    int _isChannelBound;
    NSString *_participantID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_readSource;
    NSDictionary *_relayUpdateDict;
    NSMutableDictionary *_reqRespDict;
    } _serverIPPort;
    int _tail;
    id _terminationHandler;
    NSObject<OS_dispatch_source> *_timer;
    char *_writeBuf;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSourceSuspended;
}

@property(copy) id allocationResponseHandler;
@property(copy) id bindingResponseHandler;
@property(copy) id destroyHandler;
@property(copy) NSString * participantID;
@property(copy) id receiveHandler;
@property(copy) id terminationHandler;

- (id)allocationResponseHandler;
- (id)bindingResponseHandler;
- (void)closeTunnelSocket;
- (unsigned int)connectionType;
- (void)createDispatchTimer:(float)arg1 withDetailedError:(long long)arg2;
- (void)dealloc;
- (void)destroyDispatchTimer;
- (id)destroyHandler;
- (void)finalize;
- (id)initWithRelayRequestDictionary:(id)arg1 withCallID:(unsigned int)arg2 relayType:(unsigned char)arg3 errorCode:(int*)arg4;
- (bool)isTunnelSocketClosed;
- (id)participantID;
- (void)processSocketRead;
- (void)processSocketReadSSL;
- (void)processSocketWrite:(unsigned char)arg1;
- (id)receiveHandler;
- (void)receivedControlData:(id)arg1;
- (void)receivedSSLConnectionData:(id)arg1 recordType:(unsigned short)arg2;
- (void)reportErrorAndTerminate:(long long)arg1 detail:(long long)arg2 returnCode:(long long)arg3 description:(id)arg4 reason:(id)arg5;
- (void)resetConnection;
- (bool)sendAllocateMsg:(id*)arg1;
- (bool)sendChannelBindingMsgWithDict:(id)arg1 error:(id*)arg2;
- (bool)sendRefreshMsg:(unsigned int)arg1 error:(id*)arg2;
- (void)sendTCPData:(const void*)arg1 bufSize:(int)arg2;
- (void)setAllocationResponseHandler:(id)arg1;
- (void)setBindingResponseHandler:(id)arg1;
- (void)setDestroyHandler:(id)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setReceiveHandler:(id)arg1;
- (void)setTerminationHandler:(id)arg1;
- (id)terminationHandler;
- (void)unbindChannel;
- (void)vcArg:(id)arg1 sendControlData:(id)arg2 isTypeSSL:(bool)arg3 withTimeout:(float)arg4 withDetail:(long long)arg5;
- (void)vcArg:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3;

@end
