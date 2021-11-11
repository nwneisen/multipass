/*
 * Copyright (C) 2017-2021 Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef MULTIPASS_UMOUNT_H
#define MULTIPASS_UMOUNT_H

#include <multipass/cli/command.h>

namespace multipass
{
namespace cmd
{
class Umount final : public Command
{
public:
    using Command::Command;
    ReturnCode run(ArgParser *parser) override;

    std::string name() const override;
    std::vector<std::string> aliases() const override;
    QString short_help() const override;
    QString description() const override;

private:
    UmountRequest request;

    ParseCode parse_args(ArgParser* parser);
};
}
}
#endif // MULTIPASS_UMOUNT_H
