#include "funvtiom.h"
void Savefile(char *strpath, std::vector<ASIXvalue> asv)
{
    std::ofstream fileout;
    fileout.open(strpath, std::ios::out);
    if (fileout.is_open())
    {
        for (int i = 0; i < asv.size(); i++)
        {
            fileout << "X" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i].X
                    << "Y" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i].Y
                    << "Z" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i].Z
                    << "A" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i].A
                    << "C" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i].C
                    << "W" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i].W << std::endl;
        }
    }
}

bool Savefile(const char *strpath, std::vector<ASIXvalue> asv, int radian, int size)
{
    std::ofstream fileout;
    fileout.open(strpath, std::ios::out);
    if (fileout.is_open())
    {
        fileout << "COMPENSTEDATA NUM:" << radian << ":" << size << std::endl;
        for (int i = 0; i < asv.size(); i++)
        {
            fileout << "X" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i].X
                    << "Y" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i].Y
                    << "Z" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i].Z
                    << "A" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i].A
                    << "C" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i].C
                    << "W" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i].W << std::endl;
        }
    }
    else
    {
        return false;
    }
    return true;
}

bool SavefileNoW(const char *strpath, std::vector<ASIXvalue> asv, int radian, int size)
{
    std::ofstream fileout;
    fileout.open(strpath, std::ios::out);
    if (fileout.is_open())
    {
        fileout << "COMPENSTEDATA NUM:" << radian << ":" << size << std::endl;
        for (int i = 0; i < asv.size(); i++)
        {
            fileout << "X" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i].X
                    << "Y" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i].Y
                    << "Z" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i].Z
                    << "A" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i].A
                    << "C" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i].C<< std::endl;
        }
    }
    else
    {
        return false;
    }
    return true;
}

bool SaveFile(char *strpath, std::vector<std::vector<ASIXvalue> > asv, int size)
{
    std::ofstream fileout;
    fileout.open(strpath, std::ios::out);
    if (fileout.is_open())
    {
        for (int i = 0; i < asv.size(); i++)
        {
            for(int j=0;j<asv[i].size();j++)
            {
                fileout << "X" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i][j].X
                        << "Y" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i][j].Y
                        << "Z" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i][j].Z
                        << "A" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i][j].A
                        << "C" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i][j].C
                        << "W" << std::setiosflags(std::ios::fixed) << std::setprecision(4) << asv[i][j].W << std::endl;

            }
        }
    }
    else
    {
        return false;
    }
    return true;
}
