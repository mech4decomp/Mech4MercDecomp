/*
 * FUN_00684500 (35 B) — Copy (param2 - param1)/4 dwords from param1 to
 * param3 (rep movsd). Returns param3 advanced by the count.
 *
 * __cdecl, 3 stack args, RET (plain).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void * __cdecl FUN_00684500(void *param1, int param2, void *param3)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0xC]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        sub     edx, esi
        sar     edx, 2
        test    edx, edx
        jle     done
        push    edi
        mov     edi, eax
        mov     ecx, edx
        rep movsd
        lea     eax, [eax + edx*4]
        pop     edi
    done:
        pop     esi
        ret
    }
}
