/*
 * FUN_10039a50 (52 B) - __stdcall, RET 0x10. 64-bit multiply helper
 * (4 dword args -> 64-bit result in edx:eax). (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10039a50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x10]
        or      ecx, eax
        mov     ecx, dword ptr [esp + 0xc]
        jne     L_69
        mov     eax, dword ptr [esp + 0x4]
        mul     ecx
        ret     0x10
L_69:
        push    ebx
        mul     ecx
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x8]
        mul     dword ptr [esp + 0x14]
        add     ebx, eax
        mov     eax, dword ptr [esp + 0x8]
        mul     ecx
        add     edx, ebx
        pop     ebx
        ret     0x10
    }
}
