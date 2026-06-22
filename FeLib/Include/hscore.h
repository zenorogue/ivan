/*
 *
 *  Iter Vehemens ad Necem (IVAN)
 *  Copyright (C) Timo Kiviluoto
 *  Released under the GNU General
 *  Public License
 *
 *  See LICENSING which should be included
 *  along with this file for more details
 *
 */

#ifndef __HSCORE_H__
#define __HSCORE_H__

#include <vector>
#include <ctime>

#include "festring.h"

#ifdef UNIX
#define HIGH_SCORE_FILENAME "ivan-highscore.scores"
#endif

#if defined(WIN32) || defined(__DJGPP__)
#define HIGH_SCORE_FILENAME "HScore.dat"
#endif

class festring;

class highscore
{
 public:
  highscore(cfestring&);
  truth Add(slong, cfestring&);
  void Draw() const;
  void Save(cfestring& = CONST_S("")) const;
  void Load(cfestring& = CONST_S(""));
  truth LastAddFailed() const;
  void AddToFile(highscore*) const;
  truth MergeToFile(highscore*) const;
  int Find(slong, cfestring&, time_t, slong);
  cfestring& GetEntry(int) const;
  slong GetScore(int) const;
  slong GetSize() const;
  ushort GetVersion() const { return Version; }
  void Clear();
  truth CheckVersion() const;
 private:
  truth Add(slong, cfestring&, time_t, slong);
  std::vector<festring> Entry;
  std::vector<slong> Score;
  std::vector<time_t> Time;
  std::vector<slong> RandomID;
  int LastAdd;
  ushort Version;
  cfestring DefaultFile;
};

#endif
