/*
 * FUN_10008d50 (49 B) - __stdcall, RET 0x18.  Reads a pointer from
 * arg0->-0x14; if non-null, calls vtable[3] on it with arg1 and a
 * zero-extended word from arg3, returning that word; otherwise returns
 * the word from arg2.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10008d50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     eax, dword ptr [eax - 0x14]
        test    eax, eax
        je      loc_10008d79
        mov     ecx, dword ptr [eax]
        push    esi
        mov     si, word ptr [esp + 0x18]
        xor     edx, edx
        mov     dx, si
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        push    eax
        call    dword ptr [ecx + 0xc]
        mov     ax, si
        pop     esi
        ret     0x18
loc_10008d79:
        mov     ax, word ptr [esp + 0x14]
        ret     0x18
    }
}
