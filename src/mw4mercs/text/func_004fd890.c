/*
 * FUN_004FD890 (55 B) — Constructs the global Adept::EventStatisticsManager
 * (alloc 0x14 bytes, then FUN_004151c0 with name "Adept::EventStatisticsManager"
 * and a global param), storing the result in g_007dc8d8 (or 0 on alloc fail).
 *
 * __cdecl, no params.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(int);
extern void __cdecl FUN_004151c0(void);
extern int g_007b8c10;
extern int g_007dc8d8;

__declspec(naked) void FUN_004fd890(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_d8bc
        mov     ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x776024
        push    0x1c6
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007dc8d8], eax
        ret
    l_d8bc:
        mov     dword ptr [g_007dc8d8], 0
        ret
    }
}
