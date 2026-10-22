/*
 * FUN_006907a0 (76 B) — __cdecl, two int params.
 *
 * Computes (param_1 - DAT_0082db10) and (param_2 - DAT_0082db0c),
 * returns 0 if either is negative or >= 0x80, else returns
 * (&DAT_0080db0c)[((param_1*0x80 - DAT_0082db0c) + param_2) * 2].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0082db10;
extern int g_0082db0c;
extern int g_0080db0c;

__declspec(naked) int __cdecl FUN_006907a0(int param_1, int param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     eax, dword ptr [g_0082db10]
        push    esi
        jns     L_ok1
        xor     eax, eax
        pop     esi
        ret
L_ok1:
        mov     edx, dword ptr [esp + 0xc]
        mov     esi, dword ptr [g_0082db0c]
        mov     ecx, edx
        sub     ecx, esi
        jns     L_ok2
        xor     eax, eax
        pop     esi
        ret
L_ok2:
        cmp     eax, 0x80
        jl      L_ok3
        xor     eax, eax
        pop     esi
        ret
L_ok3:
        cmp     ecx, 0x80
        jl      L_ok4
        xor     eax, eax
        pop     esi
        ret
L_ok4:
        shl     eax, 0x7
        sub     eax, esi
        add     eax, edx
        mov     eax, dword ptr [eax*8 + g_0080db0c]
        pop     esi
        ret
    }
}
