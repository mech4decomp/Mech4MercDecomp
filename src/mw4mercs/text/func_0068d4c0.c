/*
 * FUN_0068d4c0 (82 B) — __thiscall. Scans a list of 6-float records
 * (this[0]..this[1]) for one whose 4-float box contains param_1's box.
 * Returns the matching record pointer, or 0 if none. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) float *FUN_0068d4c0(void)
{
    __asm {
        mov     edx, dword ptr [ecx]
        push    esi
        mov     esi, dword ptr [ecx + 0x4]
        cmp     edx, esi
        jz      L_506
        mov     ecx, dword ptr [esp + 0x8]
    L_4ce:
        fld     dword ptr [ecx]
        fcomp   dword ptr [edx]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_4ff
        fld     dword ptr [ecx]
        fcomp   dword ptr [edx + 0x4]
        fnstsw  ax
        test    ah, 0x41
        jz      L_4ff
        fld     dword ptr [ecx + 0x8]
        fcomp   dword ptr [edx + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_4ff
        fld     dword ptr [ecx + 0x8]
        fcomp   dword ptr [edx + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_50c
    L_4ff:
        add     edx, 0x18
        cmp     edx, esi
        jnz     L_4ce
    L_506:
        xor     eax, eax
        pop     esi
        ret     0x4
    L_50c:
        mov     eax, edx
        pop     esi
        ret     0x4
    }
}
