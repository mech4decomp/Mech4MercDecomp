/*
 * FUN_004AFD70 (50 B) — lookup entry by index, increment refcount, return pointers.
 *
 * __thiscall (ECX = this), RET 0xc (3 stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004afd70(int this, unsigned int idx, int *out1, int *out2)
{
    __asm {
        mov     eax, [esp + 0x4]
        mov     edx, [ecx + 0x184]
        and     eax, 0xffff
        mov     edx, [edx + eax * 0x4]
        inc     word ptr [edx + 0x10]
        push    esi
        mov     esi, [esp + 0x0c]
        mov     [esi], edx
        mov     edx, [ecx + 0x14c]
        mov     ecx, [esp + 0x10]
        shl     eax, 0x4
        add     eax, edx
        mov     [ecx], eax
        pop     esi
        ret     0xc
    }
}
