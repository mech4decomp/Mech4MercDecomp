/*
 * FUN_5e003930 (30 B) — DirectDraw wrapper: copy 8 dwords from obj+0x4578
 * into param_2.
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e003930(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        lea     esi, [eax + 0x4578]
        mov     ecx, 0x8
        rep movsd
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x8
    }
}
