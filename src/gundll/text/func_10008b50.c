/*
 * FUN_10008b50 (89 B) - __stdcall, RET 0x10.  Calls vtable[3] on arg1 to
 * fetch an object, then maps arg2 (0..3) to an HRESULT code
 * (0xc112040b/0a/0f/0e).  If the object is non-null, zeroes obj->+8/+0xc
 * and calls vtable[4] on it with the code.  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10008b50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0xc]
        mov     edx, dword ptr [esp + 0xc]
        xor     ecx, ecx
        test    edx, edx
        jne     loc_10008b6b
        mov     ecx, 0xc112040b
        jmp     loc_10008b8d
loc_10008b6b:
        cmp     edx, 1
        jne     loc_10008b77
        mov     ecx, 0xc112040a
        jmp     loc_10008b8d
loc_10008b77:
        cmp     edx, 2
        jne     loc_10008b83
        mov     ecx, 0xc112040f
        jmp     loc_10008b8d
loc_10008b83:
        cmp     edx, 3
        jne     loc_10008b8d
        mov     ecx, 0xc112040e
loc_10008b8d:
        test    eax, eax
        je      loc_10008ba6
        mov     edx, dword ptr [eax]
        push    ecx
        push    eax
        mov     dword ptr [eax + 8], 0
        mov     dword ptr [eax + 0xc], 0
        call    dword ptr [edx + 0x10]
loc_10008ba6:
        ret     0x10
    }
}
