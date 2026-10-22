/*
 * FUN_10030CF0 (83 B) - thiscall, RET 0x4.  Zeroes a 0x14-byte stack buffer,
 * then makes two virtual calls on this->field_0xc: vtable[0x40/4] and
 * vtable[0x44/4], each (obj, buffer, 0), passing arg0 through to the second.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10030CF0(void)
{
    __asm {
        sub     esp, 0x14
        xor     eax, eax
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (89 04 24 vs ref 89 44 24 00) */
        __emit 0x89
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     dword ptr [esp + 4], eax
        push    esi
        mov     dword ptr [esp + 0xc], eax
        mov     dword ptr [esp + 0x10], eax
        mov     esi, ecx
        push    0
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [esi + 0xc]
        lea     edx, [esp + 8]
        push    edx
        mov     dword ptr [esp + 0xc], 0x14
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x40]
        mov     eax, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esi + 0xc]
        push    0
        lea     edx, [esp + 8]
        push    edx
        mov     dword ptr [esp + 0x18], eax
        mov     ecx, dword ptr [esi]
        push    esi
        call    dword ptr [ecx + 0x44]
        pop     esi
        add     esp, 0x14
        ret     4
    }
}
