//
//  PDCafeTableViewController.h
//  PerfectDota2
//
//  Created by 谈Xx on 15/12/28.
//  Copyright © 2015年 谈Xx. All rights reserved.
//

#import "PDBaseViewController.h"
#import "PDCafeSearchView.h"
#import "PDCafeTabelHeaderView.h"
#import <BaiduMapAPI_Location/BMKLocationComponent.h>
#import <BaiduMapAPI_Search/BMKSearchComponent.h>
#import <BaiduMapAPI_Map/BMKMapComponent.h>
@interface PDCafeTableViewController : PDBaseViewController<UITableViewDataSource,UITableViewDelegate,PDCafeSearchViewDelegate,BMKLocationServiceDelegate,BMKGeoCodeSearchDelegate>
{
    
    BMKLocationService* _locService;
    BMKGeoCodeSearch* _geocodesearch;
}

@property (nonatomic, weak) UITableView *cafeTableView;
@property (nonatomic, weak) PDCafeSearchView *cafeSearchView;
@property (nonatomic, weak) PDCafeTabelHeaderView *headView;
/**
 *  当前定位城市名 - 区别于按钮当前显示名，如果不同 提示切换
 */
@property (nonatomic, copy) NSString *locationCity;
/**
 *  全部身份列表
 */
@property (nonatomic, strong) NSMutableArray *provinceList;
/**
 *  市辖区列表
 */
@property (nonatomic, strong) NSArray *citybaseList;

// 纬度
@property (nonatomic, assign) CGFloat Latitude;
// 经度
@property (nonatomic, assign) CGFloat Longitude;
@end