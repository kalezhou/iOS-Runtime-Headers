/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@class <XPCClientDelegate>, NSDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSRecursiveLock, NSString;

@interface XPCClient : NSObject {
    NSObject<OS_xpc_object> *_connection;
    <XPCClientDelegate> *_delegate;
    NSRecursiveLock *_delegateLock;
    NSString *_machName;
    NSDictionary *_options;
    NSObject<OS_dispatch_queue> *_queue;
    int _state;
    NSString *_type;
}

@property(retain) NSObject<OS_xpc_object> * connection;
@property <XPCClientDelegate> * delegate;
@property(retain) NSRecursiveLock * delegateLock;
@property(copy) NSString * machName;
@property(copy) NSDictionary * options;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property int state;
@property(copy) NSString * type;

- (void).cxx_destruct;
- (void)closeConnection;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)delegateLock;
- (void)handleEvent:(id)arg1;
- (id)initWithDelegate:(id)arg1 type:(id)arg2 queue:(id)arg3;
- (id)initWithDelegate:(id)arg1 type:(id)arg2 queue:(id)arg3 machName:(id)arg4;
- (id)initWithDelegate:(id)arg1 type:(id)arg2 queue:(id)arg3 machName:(id)arg4 options:(id)arg5;
- (id)machName;
- (id)options;
- (void)postEvent:(id)arg1;
- (id)queue;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateLock:(id)arg1;
- (void)setMachName:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setState:(int)arg1;
- (void)setType:(id)arg1;
- (void)startConnectionWithType:(id)arg1 queue:(id)arg2 machName:(id)arg3 options:(id)arg4;
- (int)state;
- (id)type;

@end