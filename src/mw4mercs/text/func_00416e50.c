/*
 * FUN_00416E50 (67 B) — Base list/container destructor body.
 *
 * Called by Database vtable 0x77260C slot 2 (FUN_004D3110, "vtable_dtor_2").
 * The slot-2 wrapper does: call FUN_00416E50; if (flags & 1) free(this);
 * return this.
 *
 * This is the actual destructor body for the base list/container class
 * (vtable slots 3-9 live in the 0x00415xxx-0x00416xxx range).
 *
 * Layout:
 *   this+0x00: vtable pointer
 *   this+0x0c: pointer to array of item pointers (void **items)
 *   this+0x14: count of items (int)
 *
 * For each non-null item in the array, calls vtable[1](1) (destructor).
 * Then frees the items array via FUN_004084E0 (free wrapper).
 * Then calls FUN_00415BC0 (base class empty destructor, just a RET).
 *
 * __thiscall (ECX = this), no stack params, plain RET.
 * CFLAGS: /O1
 */

extern void __stdcall FUN_004084e0(void *ptr);
extern void __stdcall FUN_00415bc0(void);

__declspec(naked) void __stdcall list_dtor_body(void)
{
    __asm {
        push    edi
        mov     edi, ecx

        ; if (this->count <= 0) skip loop
        mov     eax, dword ptr [edi + 0x14]
        test    eax, eax
        jle     l_free_array

        ; iterate backwards through items array
        mov     ecx, dword ptr [edi + 0x0c]
        push    ebx
        push    esi
        lea     esi, [ecx + eax * 4]
        mov     ebx, eax

    l_loop:
        mov     ecx, dword ptr [esi - 4]
        sub     esi, 4
        test    ecx, ecx
        jz      l_skip
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx + 4]
    l_skip:
        dec     ebx
        jnz     l_loop

        pop     esi
        pop     ebx

    l_free_array:
        mov     eax, dword ptr [edi + 0x0c]
        test    eax, eax
        jz      l_call_base
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_call_base:
        mov     ecx, edi
        call    FUN_00415bc0
        pop     edi
        ret
    }
}
