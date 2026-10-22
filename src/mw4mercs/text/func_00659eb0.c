/*
 * FUN_00659eb0 (54 B) — __cdecl, RET (one param, no stack cleanup).
 * Returns whether param_1 is a valid index into a global vector
 * (element size 0xC), or 0 if the vector is empty / param < 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_0080da64;

__declspec(naked) unsigned int __cdecl FUN_00659eb0(int param)
{
    __asm {
        mov     eax, dword ptr [g_0080da64]
        test    eax, eax
        push    esi
        jnz     L_ok1
        xor     al, al
        pop     esi
        ret
    L_ok1:
        mov     esi, dword ptr [esp + 0x8]
        test    esi, esi
        jge     L_ok2
        xor     al, al
        pop     esi
        ret
    L_ok2:
        mov     ecx, dword ptr [eax + 0x4]
        sub     ecx, dword ptr [eax]
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     esi, edx
        setc    al
        pop     esi
        ret
    }
}
