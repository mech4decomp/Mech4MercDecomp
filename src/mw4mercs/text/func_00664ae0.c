/*
 * FUN_00664ae0 (40 B) — switch on param_3.
 *
 * param_3==0 -> 1, ==1 -> 0, ==2 -> FUN_00665910(param_1,param_2),
 * else -> 1. __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00665910(int a, int b);

__declspec(naked) int __cdecl FUN_00664ae0(int param_1, int param_2, int param_3)
{
    __asm {
        mov     eax, dword ptr [esp + 0xC]
        sub     eax, 0x0
        jz      L_ret1
        dec     eax
        jz      L_ret0
        dec     eax
        jnz     L_ret1
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x4]
        push    eax
        push    ecx
        call    FUN_00665910
        add     esp, 0x8
        ret
L_ret0:
        xor     al, al
        ret
L_ret1:
        mov     al, 0x1
        ret
    }
}
