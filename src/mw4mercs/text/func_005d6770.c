/*
 * FUN_005d6770 (35 B) — Copy count dwords from [param_1,param_2) to param_3.
 * Returns param_3 advanced by count.
 *
 * __cdecl, RET 0 (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void *__cdecl FUN_005d6770(void *param_1, void *param_2, void *param_3)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        sub     edx, esi
        sar     edx, 0x2
        test    edx, edx
        jle     L6791
        push    edi
        mov     edi, eax
        mov     ecx, edx
        rep movsd
        lea     eax, [eax + edx*0x4]
        pop     edi
L6791:
        pop     esi
        ret
    }
}
