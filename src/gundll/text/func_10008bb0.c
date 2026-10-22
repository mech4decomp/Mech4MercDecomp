/*
 * FUN_10008bb0 (76 B) - __stdcall, RET 0x8.  If arg1->+4 is 0xc350 or
 * 0xc351 and arg0->+0x10 is non-null, calls vtable[4] on it with the
 * args (and a derived pointer arg0+0xc, or two nulls when arg0-0x10 is
 * null).  Returns 0.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10008bb0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [edx + 4]
        cmp     eax, 0xc350
        je      loc_10008bc5
        cmp     eax, 0xc351
        jne     loc_10008bf7
loc_10008bc5:
        mov     ecx, dword ptr [esp + 4]
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        je      loc_10008bf7
        push    esi
        lea     esi, [ecx - 0x10]
        test    esi, esi
        je      loc_10008beb
        mov     esi, dword ptr [eax]
        push    0
        add     ecx, 0xc
        push    ecx
        push    edx
        push    eax
        call    dword ptr [esi + 0x10]
        pop     esi
        xor     eax, eax
        ret     8
loc_10008beb:
        mov     esi, dword ptr [eax]
        xor     ecx, ecx
        push    ecx
        push    ecx
        push    edx
        push    eax
        call    dword ptr [esi + 0x10]
        pop     esi
loc_10008bf7:
        xor     eax, eax
        ret     8
    }
}
