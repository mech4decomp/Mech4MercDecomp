/*
 * FUN_100052B0 (53 B) - __stdcall, RET 0x8.  Getter: validates
 * arg1->field_0x14 and arg1->field_0x7c, then writes
 * (arg1->field_0x7c->field_0x24 - 1) into *arg2.  Returns an HRESULT-style
 * code (0xc1120008 / 0x80004003 / 0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_100052B0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     al, byte ptr [ecx + 0x14]
        test    al, al
        je      L_52c4
        mov     ecx, dword ptr [ecx + 0x7c]
        xor     eax, eax
        test    ecx, ecx
        jne     L_52cc
L_52c4:
        mov     eax, 0xc1120008
        ret     0x8
L_52cc:
        mov     edx, dword ptr [esp + 0x8]
        test    edx, edx
        jne     L_52dc
        mov     eax, 0x80004003
        ret     0x8
L_52dc:
        mov     ecx, dword ptr [ecx + 0x24]
        dec     ecx
        mov     dword ptr [edx], ecx
        ret     0x8
    }
}
