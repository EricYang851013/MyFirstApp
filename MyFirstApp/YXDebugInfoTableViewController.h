//
//  YXDebugInfoTableViewController.h
//  MyFirstApp
//
//  Created by yangxu on 15-9-22.
//  Copyright (c) 2015年 yangxu. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef enum
{
    YXDebugInfoRowServer    = 99,
    YXDebugInfoRowLogReport = 100,
    YXDebugInfoRowReset     = 101,
    YXDebugInfoRowMemberExperience = 102,
    YXDebugInfoRowLogConsole    = 103,
    YXDebugInfoRowStatistic = 104,
    YXDebugInfoRowDetect = 105,
    YXDebugInfoRowTestPage = 106,
    YXDebugInfoRowTestCrash = 107,
    YXDebugInfoRowTestQRCode = 108,
    YXDebugInfoRowCoreTextLayout = 109,
    YXDebugInfoRowDevFeedback = 110,
    YXDebugInfoRowForbidGzipActionLogs = 111,
    YXDebugInfoRowWebDebuging = 113,
    YXDebugInfoRowEnableADLogger = 114,
    YXDebugInfoRowTestFreeTraffic = 115,
    YXDebugInfoRowUseWebWeibo = 116,
    YXDebugInfoRowForceADCrash = 117
} YXDebugInfoRow;
@interface YXDebugInfoTableViewController : UITableViewController
@property (nonatomic) NSArray *debugInfo;

@end
