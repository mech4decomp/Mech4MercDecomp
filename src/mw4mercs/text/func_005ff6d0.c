/*
 * FUN_005ff6d0 (69 B) — __thiscall (RET 4) allocator/advance helper.
 *
 * Advances a block pointer by a 32-aligned amount: computes
 * (this->[4] + param) rounded up to a multiple of 32, updates
 * this->[0] (block base) and this->[4] (offset). Handles the
 * negative-offset wrap case by adjusting by 0x20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005ff6d0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 4]
        push    esi
        mov     esi, dword ptr [esp + 8]
        add     esi, eax
        mov     eax, esi
        cdq
        and     edx, 0x1f
        add     eax, edx
        mov     edx, dword ptr [ecx]
        sar     eax, 5
        shl     eax, 2
        add     edx, eax
        and     esi, 0x8000001f
        mov     dword ptr [ecx], edx
        jns     L_ff70e
        dec     esi
        or      esi, 0xffffffe0
        inc     esi
        jns     L_ff70e
        add     esi, 0x20
        mov     eax, edx
        add     eax, -4
        mov     dword ptr [ecx + 4], esi
        mov     dword ptr [ecx], eax
        pop     esi
        ret     4
L_ff70e:
        mov     dword ptr [ecx + 4], esi
        pop     esi
        ret     4
    }
}
