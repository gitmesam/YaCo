//  Copyright (C) 2017 The YaCo Authors
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <Yatools.hpp>
#include <FlatBufferVisitor.hpp>

using namespace std;

int main(int argc, char** argv)
{
    globals::InitFileLogger(*globals::Get().logger, stdout);

    std::vector<std::string> files;
    for(int i = 2; i < argc; i++)
        files.push_back(argv[i]);
    return !merge_xmls_to_yadb(argv[1], files);
}
