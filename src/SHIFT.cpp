#include "BestPrice.h"
#include "Order.h"
#include "OrderBookEntry.h"
#include "PortfolioItem.h"
#include "PortfolioSummary.h"
#include "Trader.h"

/*!
 * \brief PYBIND11_MODULE create module entry points
 */
PYBIND11_MODULE(shift, m)
{
    m.doc() = "Python SHIFT plugin";

    BestPrice::bindPython(m);
    Order::bindPython(m);
    OrderBookEntry::bindPython(m);
    PortfolioItem::bindPython(m);
    PortfolioSummary::bindPython(m);
    Trader::bindPython(m);
}
