/*
 * FUN_0059DD90 (138 B) — __thiscall destructor.
 *
 * Decrements reference counts on two arrays of objects and frees them,
 * then chains to another destructor method.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084E0(int);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_0059DD90(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx                    ; edi = this
        mov     ebx, [edi + 0x3C]           ; ebx = end of first array
        mov     dword ptr [edi], 0x7838E8   ; set vtable
        mov     ebp, [edi + 0x38]           ; ebp = start of first array
        mov     esi, ebp
        cmp     esi, ebx
        je      L_free_first_array

    L_first_loop:
        mov     eax, [esi]                  ; eax = pointer to object
        test    eax, eax
        je      L_first_next
        mov     cl, [eax - 1]               ; ref count byte
        dec     eax                         ; eax = &ref_count
        dec     cl                          ; decrement ref count
        mov     [eax], cl                   ; store new ref count
        jne     L_first_next                ; if not zero, skip free
        push    eax
        call    FUN_004084E0                ; free the ref count + object
        add     esp, 4

    L_first_next:
        add     esi, 4
        cmp     esi, ebx
        jne     L_first_loop

    L_free_first_array:
        test    ebp, ebp
        je      L_second_array
        push    ebp
        call    FUN_004084E0                ; free the array itself
        add     esp, 4

    L_second_array:
        mov     ebp, [edi + 0x2C]           ; ebp = start of second array
        mov     ebx, [edi + 0x30]           ; ebx = end of second array
        mov     esi, ebp
        cmp     esi, ebx
        je      L_free_second_array

    L_second_loop:
        mov     eax, [esi]
        test    eax, eax
        je      L_second_next
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     L_second_next
        push    eax
        call    FUN_004084E0
        add     esp, 4

    L_second_next:
        add     esi, 4
        cmp     esi, ebx
        jne     L_second_loop

    L_free_second_array:
        test    ebp, ebp
        je      L_call_chain
        push    ebp
        call    FUN_004084E0
        add     esp, 4

    L_call_chain:
        mov     ecx, edi
        call    FUN_00415380
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
