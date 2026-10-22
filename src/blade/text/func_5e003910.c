/*
 * FUN_5e003910 (30 B) — DirectDraw wrapper: copy 8 dwords from param_2
 * into obj+0x4578.
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e003910(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        lea     edi, [eax + 0x4578]
        mov     ecx, 0x8
        rep movsd
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x8
    }
}
