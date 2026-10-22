/*
 * FUN_005DDD60 (68 B) — __fastcall (this in ECX). Reference-counted
 * pointer release: clears low tag bits, calls a virtual release method
 * (offset +4) with a count (1 or 3), then nulls the pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005ddd60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi]
        mov     eax, ecx
        and     eax, 0x1
        cmp     al, 0x1
        jnz     L9C
        mov     edx, ecx
        and     edx, 0x2
        cmp     dl, 0x2
        jnz     L8E
        and     ecx, 0xfffffffc
        mov     dword ptr [esi], ecx
        jz      L9C
        mov     eax, dword ptr [ecx]
        push    0x3
        call    dword ptr [eax + 0x4]
        mov     dword ptr [esi], 0x0
        pop     esi
        ret
L8E:
        and     ecx, 0xfffffffc
        mov     dword ptr [esi], ecx
        jz      L9C
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx + 0x4]
L9C:
        mov     dword ptr [esi], 0x0
        pop     esi
        ret
    }
}
