/*
 * FUN_10008a70 (83 B) - __stdcall, RET 0x10.  COM-style factory: gets an
 * object from the parent (edi-0x18) via vtable[0], stores arg1 into
 * obj->+0xc, calls vtable[0] on it and vtable[8] on the result, then
 * vtable[2] on the object to register it with the parent.  On success
 * writes the object to arg3 and returns; on failure releases via
 * vtable[4] with E_FAIL (0x80004005).  (Transcribed from reference bytes;
 * gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10008a70(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [edi - 0x18]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax]
        mov     esi, eax
        test    esi, esi
        je      loc_10008abe
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0xc], eax
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx]
        push    0
        mov     dword ptr [esi + 8], eax
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [edi - 0x18]
        mov     eax, dword ptr [esi]
        push    ecx
        push    esi
        call    dword ptr [eax + 8]
        test    eax, eax
        jl      loc_10008ab3
        mov     edx, dword ptr [esp + 0x14]
        pop     edi
        mov     dword ptr [edx], esi
        pop     esi
        ret     0x10
loc_10008ab3:
        mov     eax, dword ptr [esi]
        push    0x80004005
        push    esi
        call    dword ptr [eax + 0x10]
loc_10008abe:
        pop     edi
        pop     esi
        ret     0x10
    }
}
