/* src/modules/gundll/objects/func_1000ca30.c — FUN_1000ca30 (73 B) __stdcall, RET 0x8. */

__declspec(naked) void __stdcall FUN_1000ca30(void)
{
    __asm {
        sub     esp, 0x20
        mov     eax, dword ptr [esp + 0x24]
        xor     ecx, ecx
        mov     dword ptr [esp + 0x8], ecx
        mov     dword ptr [esp + 0xc], ecx
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], ecx
        __emit 0x8D   /* __emit: MSVC6 drops zero-disp byte for lea [esp+0]; ref needs 8D 4C 24 00 */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x4], eax
        mov     eax, dword ptr [eax + 0x10]
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     dword ptr [esp + 0x4], 0x3
        mov     dword ptr [esp + 0x1c], 0xc
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0xc]
        add     esp, 0x20
        ret     0x8
    }
}
