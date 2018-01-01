/*
 * =====================================================================================
 *
 *       Filename:  TConf.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年12月14日 16时24分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  liukang
 *        Company:  
 *
 * =====================================================================================
 */

#pragma once

#include <string>
#include <map>

namespace WebTool {

class  TConf
{
public:
    TConf(std::string configName);
    ~TConf();

    std::string getConfStr(std::string group, std::string key);
    bool setConfStr(const std::string group, const std::string key, const std::string value);

private:

    void readConfig();
    void saveConfig();

    typedef std::map<std::string, std::string> KeyValueDef;
    typedef std::map<std::string, KeyValueDef> GroupDef;

    std::string m_configName;

    GroupDef m_groupConfig;



};

} //namespace WebTool


