/******************************************************************************
 * Copyright © 2013-2024 The Komodo Platform Developers.                      *
 *                                                                            *
 * See the AUTHORS, DEVELOPER-AGREEMENT and LICENSE files at                  *
 * the top-level directory of this distribution for the individual copyright  *
 * holder information and the developer policies on copyright and licensing.  *
 *                                                                            *
 * Unless otherwise agreed in a custom licensing agreement, no part of the    *
 * Komodo Platform software, including this file may be copied, modified,     *
 * propagated or distributed except according to the terms contained in the   *
 * LICENSE file                                                               *
 *                                                                            *
 * Removal or modification of this copyright notice is prohibited.            *
 *                                                                            *
 ******************************************************************************/

#pragma once

#include <QObject>

//! Deps
#include <entt/core/attribute.h>

namespace atomic_dex
{
    class ENTT_API CoinTypeGadget
    {
      public:
        Q_GADGET

      public:
        enum CoinTypeEnum
        {
            QRC20           = 0,
            ERC20           = 1,
            BEP20           = 2,
            UTXO            = 3,
            SmartChain      = 4,
            PLG20           = 5,
            Optimism        = 6,
            Arbitrum        = 7,
            AVX20           = 8,
            HRC20           = 9,
            KRC20           = 10,
            Moonriver       = 11,
            Moonbeam        = 12,
            Base            = 13,
            SmartBCH        = 14,
            EthereumClassic = 15,
            RSK             = 16,
            ZHTLC           = 17,
            TENDERMINT      = 18,
            TENDERMINTTOKEN = 19,
            EWT             = 20,
            TRC20           = 21,
            GRC20           = 22,
            Gnosis          = 23,
            SIA             = 24,
            Disabled        = 25,
            Invalid         = 26,
            All             = 27,
            Size            = 28
        };

        Q_ENUM(CoinTypeEnum)

      private:
        explicit CoinTypeGadget();
    };
} // namespace atomic_dex

using CoinType = atomic_dex::CoinTypeGadget::CoinTypeEnum;
