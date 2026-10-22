/*
 * FUN_10008cbb (59 B) - __stdcall, RET 0x10.  Switch case fragment
 * (gaptext split one logical switch function; this is case 3 + the common
 * tail).  Sets ecx = 0xc112040f, then zeroes the object at esi-0xc and
 * calls vtable[4] on it with ecx, then calls vtable[0] on the object at
 * esi-0x10 with a 1.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10008cbb(void)
{
    __asm {
        mov     ecx, 0xc112040f
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi - 0xc]
        cmp     eax, edi
        je      loc_10008ce7
        mov     dword ptr [eax + 4], edi
        mov     eax, dword ptr [esi - 0xc]
        mov     dword ptr [eax + 8], edi
        mov     edx, dword ptr [esi - 0xc]
        mov     dword ptr [edx + 0xc], edi
        mov     eax, dword ptr [esi - 0xc]
        mov     edx, dword ptr [eax]
        push    ecx
        push    eax
        call    dword ptr [edx + 0x10]
        mov     dword ptr [esi - 0xc], edi
loc_10008ce7:
        mov     eax, dword ptr [esi - 0x10]
        lea     ecx, [esi - 0x10]
        push    1
        call    dword ptr [eax]
        pop     edi
        pop     esi
        ret     0x10
    }
}
