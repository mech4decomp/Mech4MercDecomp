/*
 * FUN_00498F60 (68 B) — __cdecl (RET 0). Calls FUN_006F4950(g_7da920),
 * allocates 0xcc bytes via FUN_004084D0; if non-null, calls
 * FUN_00498AB0(ptr, arg0, arg1) and returns its result; else 0.
 * Both paths call FUN_006F49A0 before returning.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_7da920;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00498ab0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00498F60(void)
{
    __asm {
        mov     eax, dword ptr [g_7da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0xcc
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_498f99
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_00498ab0
        mov     esi, eax
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
L_498f99:
        xor     esi, esi
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
    }
}
