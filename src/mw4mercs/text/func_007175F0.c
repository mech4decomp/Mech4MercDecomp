/*
 * FUN_007175F0 (84 B) — __cdecl (6 stack args, RET 0x18). Stores the six
 * args into globals 0x859D90..0x859DA4, then calls FUN_0074A4A0 with
 * (g_85A248, &g_859D90), and sets g_87C5B2=1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0074A4A0(void);
extern int g_859d90;
extern int g_859d9c;
extern int g_85a248;
extern int g_859d94;
extern int g_859d98;
extern int g_859da0;
extern int g_859da4;
extern char g_87c5b2;

__declspec(naked) void FUN_007175F0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [g_859d90], eax
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [g_859d9c], eax
        mov     eax, dword ptr [g_85a248]
        mov     dword ptr [g_859d94], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [g_859d98], edx
        mov     edx, dword ptr [esp + 0x18]
        push    0x859d90
        push    eax
        mov     dword ptr [g_859da0], ecx
        mov     dword ptr [g_859da4], edx
        call    FUN_0074A4A0
        mov     byte ptr [g_87c5b2], 1
        ret     0x18
    }
}
