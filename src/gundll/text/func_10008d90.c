/*
 * FUN_10008d90 (46 B) - __stdcall, RET 0x8.  If arg1->+4 is 0xc350 or
 * 0xc351 and arg0->+8 is non-null, calls vtable[10] on it with arg1 and
 * a 0.  Returns 0.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10008d90(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 8]
        mov     eax, dword ptr [ecx + 4]
        cmp     eax, 0xc350
        je      loc_10008da5
        cmp     eax, 0xc351
        jne     loc_10008db9
loc_10008da5:
        mov     eax, dword ptr [esp + 4]
        mov     eax, dword ptr [eax + 8]
        test    eax, eax
        je      loc_10008db9
        mov     edx, dword ptr [eax]
        push    0
        push    ecx
        push    eax
        call    dword ptr [edx + 0x28]
loc_10008db9:
        xor     eax, eax
        ret     8
    }
}
