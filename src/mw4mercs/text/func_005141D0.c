/*
 * FUN_005141D0 (83 B) — __cdecl (3 stack args, RET 0xC). Reads an index via
 * [arg2]->[0]; if >= g_7dd240 returns 0. Else stores it to g_7b4388, calls
 * FUN_006F4950, and if the index is >=0 calls FUN_00412780 with a table
 * entry; returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006F4950(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_006F49A0(void);
extern int g_7dd240;
extern int g_7dd234;
extern int g_7b4388;
extern int g_7dd24c;
extern int g_7dd268;

__declspec(naked) void FUN_005141D0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [ecx]
        cmp     eax, dword ptr [g_7dd240]
        jl      loc_5141e5
        xor     eax, eax
        ret     0xc
loc_5141e5:
        mov     edx, dword ptr [g_7dd234]
        push    edx
        mov     dword ptr [g_7b4388], eax
        call    FUN_006F4950
        mov     eax, dword ptr [g_7b4388]
        test    eax, eax
        jl      loc_514216
        mov     ecx, dword ptr [g_7dd24c]
        mov     edx, dword ptr [ecx + eax*4]
        mov     eax, dword ptr [g_7dd268]
        push    edx
        lea     ecx, [eax + 0x10]
        call    FUN_00412780
loc_514216:
        call    FUN_006F49A0
        mov     eax, 1
        ret     0xc
    }
}
