/*
 * FUN_00428c00 (88 B) — __thiscall destructor for the MLRFootStep
 * object. Sets vtable 0x76df7c, then for each of the [this+0xc] array
 * elements at [this+8]: decrements the refcount word at [obj+0x10] and,
 * if it hits zero, calls the virtual destructor (call [obj]) with arg 1;
 * zeroes the slot. Frees the array via FUN_004084e0 and sets the base
 * vtable 0x76d3f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_00428c00(void)
{
    __asm {
        push    edi
        mov     edi, ecx
        mov     dword ptr [edi], 0x76df7c
        mov     eax, dword ptr [edi+0xc]
        test    eax, eax
        jbe     L_after_loop
        push    ebx
        push    esi
        mov     esi, dword ptr [edi+8]
        mov     ebx, eax
L_loop:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      L_next
        dec     word ptr [ecx+0x10]
        cmp     word ptr [ecx+0x10], 0
        jnz     L_zero_slot
        test    ecx, ecx
        jz      L_zero_slot
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_zero_slot:
        mov     dword ptr [esi], 0
L_next:
        add     esi, 0x10
        dec     ebx
        jnz     L_loop
        pop     esi
        pop     ebx
L_after_loop:
        mov     eax, dword ptr [edi+8]
        test    eax, eax
        jz      L_skip_free
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_skip_free:
        mov     dword ptr [edi], 0x76d3f0
        pop     edi
        ret
    }
}
