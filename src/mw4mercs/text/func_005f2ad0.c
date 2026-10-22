/*
 * FUN_005f2ad0 (41 B) — copy (param_2-param_1)/4 dwords from param_1 to
 * param_3; return param_3 + count (or param_3 if count <= 0).
 *
 * __cdecl, 3 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void *__cdecl FUN_005f2ad0(void *param_1, void *param_2, void *param_3)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        sub     eax, esi
        sar     eax, 2
        test    eax, eax
        jle     ret_param3
        mov     edx, dword ptr [esp + 0x10]
        push    edi
        mov     ecx, eax
        mov     edi, edx
        rep movsd
        pop     edi
        lea     eax, [edx + eax*4]
        pop     esi
        ret
ret_param3:
        mov     eax, dword ptr [esp + 0x10]
        pop     esi
        ret
    }
}
