/*
 * FUN_006411a0 (43 B) — cdecl block copy returning param_3.
 *
 * Computes n = (param_2 - param_1) >> 3; if n > 0, copies n*2 dwords
 * from param_1 to param_3 (rep movsd) and returns param_3 + n*8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void *__cdecl FUN_006411a0(void *p1, int p2, void *p3)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [esp + 0xC]
        push    esi
        mov     esi, dword ptr [esp + 8]
        sub     edx, esi
        sar     edx, 3
        test    edx, edx
        jle     L_done
        mov     ecx, edx
        push    edi
        and     ecx, 0x1FFFFFFF
        mov     edi, eax
        shl     ecx, 1
        rep movsd
        lea     eax, [eax + edx*8]
        pop     edi
L_done:
        pop     esi
        ret
    }
}
