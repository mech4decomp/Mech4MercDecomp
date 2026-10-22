/*
 * FUN_00698b30 (41 B) — __cdecl, 3 args. Copies (param2-param1)/4 dwords from
 * param1 to param3 via rep movsd, returns param3+count (or param3 if count<=0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void *__cdecl FUN_00698b30(void *a, int b, void *c)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        sub     eax, esi
        sar     eax, 0x2
        test    eax, eax
        jle     L_ret3
        mov     edx, dword ptr [esp + 0x10]
        push    edi
        mov     ecx, eax
        mov     edi, edx
        rep movsd
        pop     edi
        lea     eax, [edx + eax*0x4]
        pop     esi
        ret
    L_ret3:
        mov     eax, dword ptr [esp + 0x10]
        pop     esi
        ret
    }
}
