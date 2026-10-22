/*
 * FUN_004B9B90 (68 B) — __cdecl (RET 0). Calls FUN_006F4950(g_7daa3c),
 * allocates 0x148 bytes via FUN_004084D0; if non-null, calls
 * FUN_004B9AA0(ptr, arg0, arg1) and returns its result; else 0.
 * Both paths call FUN_006F49A0 before returning.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_7daa3c;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004b9aa0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004B9B90(void)
{
    __asm {
        mov     eax, dword ptr [g_7daa3c]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x148
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_4b9bc9
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_004b9aa0
        mov     esi, eax
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
L_4b9bc9:
        xor     esi, esi
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
    }
}
