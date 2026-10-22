/*
 * FUN_10008ad0 (52 B) - __stdcall, RET 0x1C.  Calls vtable[3] on arg2 to
 * fetch an object; if non-null, calls vtable[3] on it with arg1 and a
 * zero-extended word from arg4, returning that word; otherwise returns the
 * word from arg3.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10008ad0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0xc]
        test    eax, eax
        je      loc_10008afc
        mov     edx, dword ptr [eax]
        push    esi
        mov     si, word ptr [esp + 0x18]
        xor     ecx, ecx
        mov     cx, si
        push    ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    eax
        call    dword ptr [edx + 0xc]
        mov     ax, si
        pop     esi
        ret     0x1c
loc_10008afc:
        mov     ax, word ptr [esp + 0x14]
        ret     0x1c
    }
}
