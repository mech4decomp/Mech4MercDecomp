/*
 * FUN_00709c60 (52 B) — __stdcall RET 0x4. Increments a reentrancy counter,
 * calls FUN_007098a0(param), decrements the counter, returns whether a
 * global flag is nonzero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00859ae8;              /* DAT_00859ae8 (reentrancy counter) */
extern int g_00858ac0;              /* DAT_00858ac0 (flag) */
extern void __cdecl FUN_007098a0(void);

__declspec(naked) int __stdcall FUN_00709c60(int param_1)
{
    __asm {
        mov     edx, dword ptr [g_00859ae8]
        mov     eax, dword ptr [esp + 0x4]
        inc     edx
        push    eax
        mov     dword ptr [g_00859ae8], edx
        call    FUN_007098a0
        mov     edx, dword ptr [g_00859ae8]
        mov     ecx, dword ptr [g_00858ac0]
        dec     edx
        xor     eax, eax
        test    ecx, ecx
        mov     dword ptr [g_00859ae8], edx
        setnz   al
        ret     0x4
    }
}
