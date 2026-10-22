/*
 * FUN_004d64d0 (77 B) — __thiscall bit set/clear helper.
 * Sets or clears bit (param_2 & 7) in byte array element param_2>>3
 * returned by a virtual call on this->[0x24]'s vtable slot 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004d64d0(void)
{
    __asm {
        mov     eax, dword ptr [esp+8]
        push    esi
        mov     esi, eax
        and     al, 7
        add     ecx, 24h
        mov     byte ptr [esp+0ch], al
        mov     eax, dword ptr [ecx]
        sar     esi, 3
        call    dword ptr [eax+4]
        mov     cl, byte ptr [esp+8]
        test    cl, cl
        mov     ecx, dword ptr [esp+0ch]
        jz      L1
        and     ecx, 0ffh
        mov     dl, 1
        shl     dl, cl
        or      byte ptr [eax+esi*1], dl
        pop     esi
        ret     8
    L1:
        and     ecx, 0ffh
        mov     dl, 1
        shl     dl, cl
        mov     cl, byte ptr [eax+esi*1]
        not     dl
        and     cl, dl
        mov     byte ptr [eax+esi*1], cl
        pop     esi
        ret     8
    }
}
