/*
 * FUN_5e001b00 (48 B) — copies a buffer (clamped to 0x50 dwords) via rep movsd/movsb.
 *
 * __stdcall, RET 8 (two stack params).
 *
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_5e001b00(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     eax, dword ptr [esi]
        cmp     eax, 0x50
        jc      short L1
        mov     eax, 0x50
L1:
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, ecx
        lea     edi, [eax + 0x4]
        xor     eax, eax
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        pop     edi
        pop     esi
        ret     8
    }
}
