/**
 * \file vhost/dispatcher.hh
 * \brief Dispatcher declaration.
 */

#pragma once

#include "vhost/vhost.hh"

namespace http
{
    /**
     * \class Dispatcher
     * \brief Instance in charge of dispatching requests between vhosts.
     */
    class Dispatcher
    {
    public:
        Dispatcher() = default;
        Dispatcher(const Dispatcher &) = delete;
        Dispatcher &operator=(const Dispatcher &) = delete;
        Dispatcher(Dispatcher &&) = delete;
        Dispatcher &operator=(Dispatcher &&) = delete;

        void add_vhost(const shared_vhost &vhost)
        {
            vhosts_.push_back(vhost);
        }

    private:
        /* FIXME: Add members to store the information relative to the
        ** Dispatcher.
        */
        std::vector<shared_vhost> vhosts_;
    };

    /**
     * \brief Service object.
     */
    extern Dispatcher dispatcher;
} // namespace http
