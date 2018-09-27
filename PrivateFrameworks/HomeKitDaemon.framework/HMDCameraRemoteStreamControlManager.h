/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraRemoteStreamControlManager : HMDCameraStreamControlManager <HMDCameraIDSDeviceConnectionReceiverDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraIDSSessionReceiverDelegate, HMDCameraStreamControlManagerProtocol, HMDStreamingManagerDelegate> {
    HMDCameraMediaConfigGenerator * _configGenerator;
    NSUUID * _profileUniqueIdentifier;
    HMDCameraResidentMessageHandler * _residentMessageHandler;
    HMDRemoteStreamSession * _streamSession;
}

@property (nonatomic, retain) HMDCameraMediaConfigGenerator *configGenerator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *profileUniqueIdentifier;
@property (nonatomic, readonly, copy) HMDCameraResidentMessageHandler *residentMessageHandler;
@property (nonatomic, readonly) HMDCameraStreamMetrics *streamMetrics;
@property (nonatomic, retain) HMDRemoteStreamSession *streamSession;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_cleanUpStreamSession:(id)arg1;
- (void)_dispatchReconfigureToResident:(id)arg1;
- (void)_dispatchStartRequestToResidentWithVideoSSRC:(id)arg1 audioSSRC:(id)arg2;
- (void)_idsSessionCreatedAndConfigNegotiated;
- (void)_negotiateStream;
- (void)_reconfigureStream:(id)arg1;
- (void)_reconfigureStreams;
- (void)_relaySessionStarted:(id)arg1;
- (void)_remoteSetup:(id)arg1;
- (void)_sendStopMessageToResident;
- (void)_sendUpdatedConfiguration;
- (void)_setParametersSelected:(id)arg1;
- (void)_startStream:(id)arg1;
- (void)_stopCurrentStreamSession:(id)arg1;
- (void)_streamStarted;
- (id)configGenerator;
- (void)dealloc;
- (void)deviceConnectionReceiver:(id)arg1 didEndSession:(id)arg2;
- (void)deviceConnectionReceiver:(id)arg1 didSetup:(id)arg2;
- (void)deviceConnectionSender:(id)arg1 didEndSession:(id)arg2;
- (void)deviceConnectionSender:(id)arg1 didSetup:(id)arg2;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 destinationID:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 remoteCapabilities:(id)arg10 profileUniqueIdentifier:(id)arg11 residentMessageHandler:(id)arg12 streamPreference:(id)arg13;
- (void)negotiateStream;
- (id)profileUniqueIdentifier;
- (void)reconfigureStream:(id)arg1;
- (void)remoteSetup:(id)arg1;
- (id)residentMessageHandler;
- (void)sessionReceiver:(id)arg1 didEndSession:(id)arg2;
- (void)sessionReceiver:(id)arg1 didSetup:(id)arg2;
- (void)setConfigGenerator:(id)arg1;
- (void)setStreamSession:(id)arg1;
- (void)startStream:(id)arg1;
- (void)stopStream:(id)arg1;
- (void)stopStreamAsIDSHasStopped:(id)arg1;
- (id)streamSession;
- (void)streamingManager:(id)arg1 didStartStream:(id)arg2 slotIdentifier:(id)arg3;
- (void)streamingManagerDidNetworkDeteriorate:(id)arg1;
- (void)streamingManagerDidNetworkImprove:(id)arg1;
- (void)streamingManagerDidReceiveFirstFrame:(id)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(id)arg3 slotIdentifier:(id)arg4;
- (void)streamingManagerDidStopStream:(id)arg1 error:(id)arg2;
- (void)streamingManagerDidUpdateConfiguration:(id)arg1;
- (void)updateAudioSetting:(unsigned long long)arg1;
- (void)updateAudioVolume:(id)arg1 callback:(id /* block */)arg2;

@end