/*
 * FUN_10008D10 (49 B) - __stdcall, RET 0x1C.  Virtual dispatch helper:
 * reads this->field at -0xc; if non-null, calls vtable[3] (offset +0xc)
 * with (obj, arg, word) and returns the word; else returns word at
 * [esp+0x14].  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10008D10(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax - 0xc]
        test    eax, eax
        je      short L_10008D39
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
        ret     0x1c
L_10008D39:
        mov     ax, word ptr [esp + 0x14]
        ret     0x1c
    }
}
