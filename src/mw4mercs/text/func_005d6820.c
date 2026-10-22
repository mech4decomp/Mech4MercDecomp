/*
 * FUN_005d6820 (37 B) — Copy dwords from [param_1,param_2) to param_3.
 *
 * __cdecl, RET 0 (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005d6820(void *param_1, void *param_2, void *param_3)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        cmp     ecx, edx
        mov     eax, dword ptr [esp + 0xc]
        jz      L6844
        push    esi
L6831:
        test    eax, eax
        jz      L6839
        mov     esi, dword ptr [ecx]
        mov     dword ptr [eax], esi
L6839:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, edx
        jnz     L6831
        pop     esi
L6844:
        ret
    }
}
