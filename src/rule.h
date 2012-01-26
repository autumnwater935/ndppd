// ndppd - NDP Proxy Daemon
// Copyright (C) 2011  Daniel Adolfsson <daniel@priv.nu>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
#ifndef __NDPPD_RULE_H
#define __NDPPD_RULE_H

#include <string>
#include <vector>
#include <map>

#include <sys/poll.h>

#include "ndppd.h"

__NDPPD_NS_BEGIN

class iface;
class proxy;

class rule
{
private:
   weak_ptr<rule> _ptr;

   strong_ptr<proxy> _pr;

   strong_ptr<iface> _ifa;

   address _addr;

   rule();

public:
   static strong_ptr<rule> create(const strong_ptr<proxy>& pr, const address& addr, const strong_ptr<iface>& ifa);

   static strong_ptr<rule> create(const strong_ptr<proxy>& pr, const address& addr);

   const address& addr() const;

   strong_ptr<iface> ifa() const;

   bool is_static() const;

   bool check(const address& addr) const;

};

__NDPPD_NS_END

#endif // __NDPPD_PROXY_H
 
 
