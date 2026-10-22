/*
 * FUN_004BBAE0 (68 B) — __cdecl (RET 0). Calls FUN_006F4950(g_7da9ec),
 * allocates 0x148 bytes via FUN_004084D0; if non-null, calls
 * FUN_004BB9D0(ptr, arg0, arg1) and returns its result; else 0.
 * Both paths call FUN_006F49A0 before returning.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_7da9ec;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004bb9d0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004BBAE0(void)
{
    __asm {
        mov     eax, dword ptr [g_7da9ec]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x148
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_4bbb19
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_004bb9d0
        mov     esi, eax
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
L_4bbb19:
        xor     esi, esi
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
    }
}
