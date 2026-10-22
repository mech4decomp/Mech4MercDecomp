/*
 * FUN_0072BD40 (273 B) — Data-copy/transform routine.
 *
 * Reads a set of float/dword/byte globals, applies a float add + bitmask
 * transform, and writes results to a block of destination globals.
 *
 * __stdcall, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_8816b8;
extern float g_8816b0;
extern float g_8816b4;
extern float g_8816ac;
extern float g_76dd60;
extern int   g_8816d8;
extern int   g_8816cc;
extern int   g_8816d0;
extern int   g_882594;
extern int   g_8825b0;
extern char  g_8816e6;
extern char  g_8816e4;
extern char  g_8816e5;
extern int   g_881704;
extern int   g_881708;
extern int   g_881700;
extern int   g_88170c;
extern int   g_88171c;
extern int   g_881720;
extern int   g_881728;
extern int   g_881724;
extern int   g_881714;
extern int   g_881710;
extern char  g_881719;
extern char  g_88171a;
extern char  g_881718;

__declspec(naked) void __stdcall FUN_0072BD40(void)
{
    __asm {
        fld     dword ptr [g_8816b8]
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [g_8816d8]
        fadd    dword ptr [g_76dd60]
        mov     dword ptr [g_881704], ecx
        mov     dword ptr [g_881708], edx
        fstp    dword ptr [esp + 0x4]
        mov     [g_881700], eax
        fld     dword ptr [g_8816b0]
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, [g_8816cc]
        fadd    dword ptr [g_76dd60]
        and     ecx, 0x7fffff
        sub     ecx, 0x400000
        fstp    dword ptr [esp + 0x4]
        mov     [g_88170c], eax
        fld     dword ptr [g_8816b4]
        mov     edx, dword ptr [esp + 0x4]
        fadd    dword ptr [g_76dd60]
        mov     dword ptr [g_88171c], ecx
        and     edx, 0x7fffff
        fstp    dword ptr [esp + 0x4]
        sub     edx, 0x400000
        fld     dword ptr [g_8816ac]
        mov     eax, dword ptr [esp + 0x4]
        fadd    dword ptr [g_76dd60]
        and     eax, 0x7fffff
        sub     eax, 0x400000
        fstp    dword ptr [esp + 0x4]
        mov     [g_881720], eax
        mov     ecx, dword ptr [esp + 0x4]
        mov     al, [g_8816e6]
        and     ecx, 0x7fffff
        sub     ecx, 0x400000
        mov     dword ptr [g_881728], ecx
        mov     cl, byte ptr [g_8816e4]
        mov     [g_881719], al
        mov     eax, [g_882594]
        test    eax, eax
        mov     dword ptr [g_881724], edx
        mov     dl, byte ptr [g_8816e5]
        mov     byte ptr [g_88171a], cl
        mov     ecx, dword ptr [g_8816d0]
        mov     byte ptr [g_881718], dl
        mov     dword ptr [g_881714], ecx
        jz      L_72be3a
        mov     [g_881714], eax
L_72be3a:
        mov     eax, [g_8825b0]
        test    eax, eax
        mov     dword ptr [g_881710], ecx
        jz      L_72be4e
        mov     [g_881710], eax
L_72be4e:
        ret     0x8
    }
}
