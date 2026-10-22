/*
 * FUN_0061ef00 (41 B) — copies (param2-param1)/4 dwords from param1 to
 * param3 via rep movsd; returns param3 + count (or param3 if count <= 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_0061ef00(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        sub     eax, esi
        sar     eax, 0x2
        test    eax, eax
        jle     L_ret
        mov     edx, dword ptr [esp + 0x10]
        push    edi
        mov     ecx, eax
        mov     edi, edx
        rep movsd
        pop     edi
        lea     eax, [edx + eax*4]
        pop     esi
        ret
    L_ret:
        mov     eax, dword ptr [esp + 0x10]
        pop     esi
        ret
    }
}
