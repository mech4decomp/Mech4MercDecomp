/*
 * FUN_1001bc00 (30 B) - __stdcall, RET 0xc. Stores param_1[0x34] into
 * param_3[0x8 + param_3[0xc]*4], increments param_3[0xc]; returns 1.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1001bc00(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax + 0x8]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     esi, dword ptr [esi + 0x34]
        mov     dword ptr [edx + ecx*0x4], esi
        inc     dword ptr [eax + 0xc]
        mov     al, 0x1
        pop     esi
        ret     0xc
    }
}
