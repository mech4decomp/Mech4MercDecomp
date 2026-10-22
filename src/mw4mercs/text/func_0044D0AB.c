/*
 * FUN_0044D0AB (77 B) — __cdecl (RET 0). Calls FUN_006F4950(g_7b98bc),
 * allocates 0x78 bytes via FUN_004084D0; if non-null, calls
 * FUN_0044CFB0(ptr, g_7b98b4, arg1, arg0) and returns its result; else 0.
 * Both paths call FUN_006F49A0 before returning.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_7b98bc;
extern int  g_7b98b4;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0044cfb0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0044D0AB(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        mov     eax, dword ptr [g_7b98bc]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x78
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_44d0ed
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    ecx
        mov     ecx, dword ptr [g_7b98b4]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_0044cfb0
        mov     esi, eax
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
L_44d0ed:
        xor     esi, esi
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
    }
}
