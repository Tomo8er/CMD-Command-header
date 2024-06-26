#pragma once

#include <cstdlib>
#include <string>
#include <iostream>

// REGコマンドの関数プロトタイプ

#define REG_COMMAND(Action, Options) \
    std::string command_reg = "REG " + (Action) + " " + (Options); \
    system(command_reg.c_str());

// SHUTDOWNコマンドの関数プロトタイプ

#define SHUTDOWN(Option) \
    std::string command_shutdown = "shutdown " + (Option); \
    system(command_shutdown.c_str());

// COPYおよびXCOPYコマンドの関数プロトタイプ

#define COPY(Source, Destination) \
    std::string command_copy = "copy " + (Source) + " " + (Destination); \
    system(command_copy.c_str());

#define XCOPY(Source, Destination, Options) \
    std::string command_xcopy = "xcopy " + (Source) + " " + (Destination) + " " + (Options); \
    system(command_xcopy.c_str());

// IPCONFIGコマンドの関数プロトタイプ

#define IPCONFIG(Options) \
    std::string command_ipconfig = "ipconfig " + (Options); \
    system(command_ipconfig.c_str());

// NETコマンドの関数プロトタイプ

#define NET(Command) \
    std::string command_net = "net " + (Command); \
    system(command_net.c_str());

// ECHOコマンドの関数プロトタイプ

#define ECHO(Message) \
    std::string command_echo = "echo " + (Message); \
    system(command_echo.c_str());

// TASKKILLコマンドの関数プロトタイプ

#define TASKKILL(Options) \
    std::string command_taskkill = "taskkill " + (Options); \
    system(command_taskkill.c_str());

// TASKLISTコマンドの関数プロトタイプ

#define TASKLIST(Options) \
    std::string command_tasklist = "tasklist " + (Options); \
    system(command_tasklist.c_str());
// PINGコマンドの関数プロトタイプ

#define PING(Target, Options) \
    std::string command_ping = "ping " + (Target) + " " + (Options); \
    system(command_ping.c_str());

// DIRコマンドの関数プロトタイプ

#define DIR(Path, Options) \
    std::string command_dir = "dir " + (Path) + " " + (Options); \
    system(command_dir.c_str());

// DELコマンドの関数プロトタイプ

#define DEL(Path, Options) \
    std::string command_del = "del " + (Path) + " " + (Options); \
    system(command_del.c_str());

// MKDIRコマンドの関数プロトタイプ

#define MKDIR(Path) \
    std::string command_mkdir = "mkdir " + (Path); \
    system(command_mkdir.c_str());

// RMDIRコマンドの関数プロトタイプ

#define RMDIR(Path) \
    std::string command_rmdir = "rmdir " + (Path); \
    system(command_rmdir.c_str());
// ASSOCコマンドの関数プロトタイプ

#define ASSOC(Options) \
    std::string command_assoc = "assoc " + (Options); \
    system(command_assoc.c_str());

// ATTRIBコマンドの関数プロトタイプ

#define ATTRIB(Options) \
    std::string command_attrib = "attrib " + (Options); \
    system(command_attrib.c_str());

// BCDEDITコマンドの関数プロトタイプ

#define BCDEDIT(Options) \
    std::string command_bcdedit = "bcdedit " + (Options); \
    system(command_bcdedit.c_str());

// CACLSコマンドの関数プロトタイプ

#define CACLS(Options) \
    std::string command_cacls = "cacls " + (Options); \
    system(command_cacls.c_str());

// CDコマンドの関数プロトタイプ

#define CD(Options) \
    std::string command_cd = "cd " + (Options); \
    system(command_cd.c_str());

// CHKDSKコマンドの関数プロトタイプ

#define CHKDSK(Options) \
    std::string command_chkdsk = "chkdsk " + (Options); \
    system(command_chkdsk.c_str());

// CLSコマンドの関数プロトタイプ

#define CLS() \
    std::string command_cls = "cls"; \
    system(command_cls.c_str());

// CMDコマンドの関数プロトタイプ

#define CMD(Options) \
    std::string command_cmd = "cmd " + (Options); \
    system(command_cmd.c_str());

// COLORコマンドの関数プロトタイプ

#define COLOR(Options) \
    std::string command_color = "color " + (Options); \
    system(command_color.c_str());

// COMPコマンドの関数プロトタイプ

#define COMP(Options) \
    std::string command_comp = "comp " + (Options); \
    system(command_comp.c_str());

// CONVERTコマンドの関数プロトタイプ

#define CONVERT(Options) \
    std::string command_convert = "convert " + (Options); \
    system(command_convert.c_str());

// DATEコマンドの関数プロトタイプ

#define DATE(Options) \
    std::string command_date = "date " + (Options); \
    system(command_date.c_str());

// DISKPARTコマンドの関数プロトタイプ

#define DISKPART(Options) \
    std::string command_diskpart = "diskpart " + (Options); \
    system(command_diskpart.c_str());

// DRIVERQUERYコマンドの関数プロトタイプ

#define DRIVERQUERY(Options) \
    std::string command_driverquery = "driverquery " + (Options); \
    system(command_driverquery.c_str());

// FCコマンドの関数プロトタイプ

#define FC(Options) \
    std::string command_fc = "fc " + (Options); \
    system(command_fc.c_str());

// FINDコマンドの関数プロトタイプ

#define FIND(Options) \
    std::string command_find = "find " + (Options); \
    system(command_find.c_str());

// FINDSTRコマンドの関数プロトタイプ

#define FINDSTR(Options) \
    std::string command_findstr = "findstr " + (Options); \
    system(command_findstr.c_str());

// FORMATコマンドの関数プロトタイプ

#define FORMAT(Options) \
    std::string command_format = "format " + (Options); \
    system(command_format.c_str());

// GPRESULTコマンドの関数プロトタイプ

#define GPRESULT(Options) \
    std::string command_gpresult = "gpresult " + (Options); \
    system(command_gpresult.c_str());

// HELPコマンドの関数プロトタイプ

#define HELP(Options) \
    std::string command_help = "help " + (Options); \
    system(command_help.c_str());

// ICACLSコマンドの関数プロトタイプ

#define ICACLS(Options) \
    std::string command_icacls = "icacls " + (Options); \
    system(command_icacls.c_str());

// LABELコマンドの関数プロトタイプ

#define LABEL(Options) \
    std::string command_label = "label " + (Options); \
    system(command_label.c_str());

// MDコマンドの関数プロトタイプ

#define MD(Options) \
    std::string command_md = "md " + (Options); \
    system(command_md.c_str());

// MKLINKコマンドの関数プロトタイプ

#define MKLINK(Options) \
    std::string command_mklink = "mklink " + (Options); \
    system(command_mklink.c_str());

// MODEコマンドの関数プロトタイプ

#define MODE(Options) \
    std::string command_mode = "mode " + (Options); \
    system(command_mode.c_str());

// MOREコマンドの関数プロトタイプ

#define MORE(Options) \
    std::string command_more = "more " + (Options); \
    system(command_more.c_str());

// MOVEコマンドの関数プロトタイプ

#define MOVE(Options) \
    std::string command_move = "move " + (Options); \
    system(command_move.c_str());

// OPENFILESコマンドの関数プロトタイプ

#define OPENFILES(Options) \
    std::string command_openfiles = "openfiles " + (Options); \
    system(command_openfiles.c_str());

// PATHコマンドの関数プロトタイプ

#define PATH(Options) \
    std::string command_path = "path " + (Options); \
    system(command_path.c_str());

// PAUSEコマンドの関数プロトタイプ

#define PAUSE() \
    std::string command_pause = "pause"; \
    system(command_pause.c_str());

// PRINTコマンドの関数プロトタイプ

#define PRINT(Options) \
    std::string command_print = "print " + (Options); \
    system(command_print.c_str());

// PROMPTコマンドの関数プロトタイプ

#define PROMPT(Options) \
    std::string command_prompt = "prompt " + (Options); \
    system(command_prompt.c_str());

// RECOVERコマンドの関数プロトタイプ

#define RECOVER(Options) \
    std::string command_recover = "recover " + (Options); \
    system(command_recover.c_str());

// RENコマンドの関数プロトタイプ

#define REN(Options) \
    std::string command_ren = "ren " + (Options); \
    system(command_ren.c_str());

// REPLACEコマンドの関数プロトタイプ

#define REPLACE(Options) \
    std::string command_replace = "replace " + (Options); \
    system(command_replace.c_str());

// ROBOCOPYコマンドの関数プロトタイプ

#define ROBOCOPY(Options) \
    std::string command_robocopy = "robocopy " + (Options); \
    system(command_robocopy.c_str());

// SETコマンドの関数プロトタイプ

#define SET(Options) \
    std::string command_set = "set " + (Options); \
    system(command_set.c_str());

// SYSTEMINFOコマンドの関数プロトタイプ

#define SYSTEMINFO(Options) \
    std::string command_systeminfo = "systeminfo " + (Options); \
    system(command_systeminfo.c_str());

// TIMEコマンドの関数プロトタイプ

#define TIME(Options) \
    std::string command_time = "time " + (Options); \
    system(command_time.c_str());

// TITLEコマンドの関数プロトタイプ

#define TITLE(Options) \
    std::string command_title = "title " + (Options); \
    system(command_title.c_str());

// TREEコマンドの関数プロトタイプ

#define TREE(Options) \
    std::string command_tree = "tree " + (Options); \
    system(command_tree.c_str());

// TYPEコマンドの関数プロトタイプ

#define TYPE(Options) \
    std::string command_type = "type " + (Options); \
    system(command_type.c_str());

// VERコマンドの関数プロトタイプ

#define VER() \
    std::string command_ver = "ver"; \
    system(command_ver.c_str());

// VERIFYコマンドの関数プロトタイプ

#define VERIFY(Options) \
    std::string command_verify = "verify " + (Options); \
    system(command_verify.c_str());

// VOLコマンドの関数プロトタイプ

#define VOL(Options) \
    std::string command_vol = "vol " + (Options); \
    system(command_vol.c_str());

// WMICコマンドの関数プロトタイプ

#define WMIC(Options) \
    std::string command_wmic = "wmic " + (Options); \
    system(command_wmic.c_str());
// BREAKコマンドの関数プロトタイプ

#define BREAK() \
    std::string command_break = "break"; \
    system(command_break.c_str());

// CALLコマンドの関数プロトタイプ

#define CALL(Options) \
    std::string command_call = "call " + (Options); \
    system(command_call.c_str());

// CHCPコマンドの関数プロトタイプ

#define CHCP(Options) \
    std::string command_chcp = "chcp " + (Options); \
    system(command_chcp.c_str());

// CHDIRコマンドの関数プロトタイプ

#define CHDIR(Options) \
    std::string command_chdir = "chdir " + (Options); \
    system(command_chdir.c_str());

// CHKNTFSコマンドの関数プロトタイプ

#define CHKNTFS(Options) \
    std::string command_chkntfs = "chkntfs " + (Options); \
    system(command_chkntfs.c_str());

// DOSKEYコマンドの関数プロトタイプ

#define DOSKEY(Options) \
    std::string command_doskey = "doskey " + (Options); \
    system(command_doskey.c_str());

// ENDLOCALコマンドの関数プロトタイプ

#define ENDLOCAL() \
    std::string command_endlocal = "endlocal"; \
    system(command_endlocal.c_str());

// ERASEコマンドの関数プロトタイプ

#define ERASE(Options) \
    std::string command_erase = "erase " + (Options); \
    system(command_erase.c_str());

// EXITコマンドの関数プロトタイプ

#define EXIT(Options) \
    std::string command_exit = "exit " + (Options); \
    system(command_exit.c_str());

// FINDSTRコマンドの関数プロトタイプ

#define FINDSTR(Options) \
    std::string command_findstr = "findstr " + (Options); \
    system(command_findstr.c_str());

// FORコマンドの関数プロトタイプ

#define FOR(Options) \
    std::string command_for = "for " + (Options); \
    system(command_for.c_str());

// FSUTILコマンドの関数プロトタイプ

#define FSUTIL(Options) \
    std::string command_fsutil = "fsutil " + (Options); \
    system(command_fsutil.c_str());

// FTYPEコマンドの関数プロトタイプ

#define FTYPE(Options) \
    std::string command_ftype = "ftype " + (Options); \
    system(command_ftype.c_str());

// GOTOコマンドの関数プロトタイプ

#define GOTO(Label) \
    std::string command_goto = "goto " + (Label); \
    system(command_goto.c_str());

// GRAFTABLコマンドの関数プロトタイプ

#define GRAFTABL(Options) \
    std::string command_graftabl = "graftabl " + (Options); \
    system(command_graftabl.c_str());

// IFコマンドの関数プロトタイプ

#define IF(Condition, Command) \
    std::string command_if = "if " + (Condition) + " " + (Command); \
    system(command_if.c_str());

// MKDIRコマンドの関数プロトタイプ

#define MKDIR(Options) \
    std::string command_mkdir = "mkdir " + (Options); \
    system(command_mkdir.c_str());

// OPENFILESコマンドの関数プロトタイプ

#define OPENFILES(Options) \
    std::string command_openfiles = "openfiles " + (Options); \
    system(command_openfiles.c_str());

// PAUSEコマンドの関数プロトタイプ

#define PAUSE() \
    std::string command_pause = "pause"; \
    system(command_pause.c_str());

// PRINTコマンドの関数プロトタイプ

#define PRINT(Options) \
    std::string command_print = "print " + (Options); \
    system(command_print.c_str());

// PROMPTコマンドの関数プロトタイプ

#define PROMPT(Options) \
    std::string command_prompt = "prompt " + (Options); \
    system(command_prompt.c_str());

// PUSHDコマンドの関数プロトタイプ

#define PUSHD(Options) \
    std::string command_pushd = "pushd " + (Options); \
    system(command_pushd.c_str());

// RECOVERコマンドの関数プロトタイプ

#define RECOVER(Options) \
    std::string command_recover = "recover " + (Options); \
    system(command_recover.c_str());

// REMコマンドの関数プロトタイプ

#define REM(Comment) \
    std::string command_rem = "rem " + (Comment); \
    system(command_rem.c_str());

// RENコマンドの関数プロトタイプ

#define REN(Options) \
    std::string command_ren = "ren " + (Options); \
    system(command_ren.c_str());

// REPLACEコマンドの関数プロトタイプ

#define REPLACE(Options) \
    std::string command_replace = "replace " + (Options); \
    system(command_replace.c_str());

// SCコマンドの関数プロトタイプ

#define SC(Options) \
    std::string command_sc = "sc " + (Options); \
    system(command_sc.c_str());

// SCHTASKSコマンドの関数プロトタイプ

#define SCHTASKS(Options) \
    std::string command_schtasks = "schtasks " + (Options); \
    system(command_schtasks.c_str());

// SETLOCALコマンドの関数プロトタイプ

#define SETLOCAL() \
    std::string command_setlocal = "setlocal"; \
    system(command_setlocal.c_str());

// SHIFTコマンドの関数プロトタイプ

#define SHIFT() \
    std::string command_shift = "shift"; \
    system(command_shift.c_str());

// SORTコマンドの関数プロトタイプ

#define SORT(Options) \
    std::string command_sort = "sort " + (Options); \
    system(command_sort.c_str());

// STARTコマンドの関数プロトタイプ

#define START(Options) \
    std::string command_start = "start " + (Options); \
    system(command_start.c_str());

// SUBSTコマンドの関数プロトタイプ

#define SUBST(Options) \
    std::string command_subst = "subst " + (Options); \
    system(command_subst.c_str());