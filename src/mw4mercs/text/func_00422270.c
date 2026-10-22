/*
 * FUN_00422270 (67 B) — __cdecl (RET 0). Calls FUN_006F4950(g_7b95a4),
 * allocates 0x50 bytes via FUN_004084D0; if non-null, calls
 * FUN_004220B0(ptr, arg0, g_7b95b8) and returns its result; else 0.
 * Both paths call FUN_006F49A0 before returning.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_7b95a4;
extern int  g_7b95b8;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004220b0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00422270(void)
{
    __asm {
        mov     eax, dword ptr [g_7b95a4]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x50
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_4222a8
        mov     ecx, dword ptr [g_7b95b8]
        mov     edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_004220b0
        mov     esi, eax
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
L_4222a8:
        xor     esi, esi
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
    }
}
