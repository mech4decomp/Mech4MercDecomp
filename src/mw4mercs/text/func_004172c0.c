/*
 * FUN_004172c0 (29 B) - __fastcall container element release.
 * If this[0x10] != -1 and the element exists, calls its vtable[1](1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004172c0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        cmp     eax, -1
        jz      L_done
        mov     ecx, dword ptr [ecx + 0x4]
        mov     edx, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [edx + eax*4]
        test    ecx, ecx
        jz      L_done
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax + 0x4]
    L_done:
        ret
    }
}
