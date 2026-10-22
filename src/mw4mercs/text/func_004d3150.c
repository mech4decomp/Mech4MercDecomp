/*
 * Vtable 0x772654 slot 1 — FUN_004D3150 (85 B).
 *
 * Item destructor (slot 1 of the small item vtable 0x772654).
 * Calls the item destructor body (FUN_00416de0), then if (param & 1):
 * returns the item to the singleton pool via FUN_00416130, decrements
 * the global counter at 0x7DB0C0, and if the counter reaches 0, frees
 * the singleton itself (FUN_00415e30 + FUN_004084e0) and zeroes the
 * singleton pointer at 0x7DB0BC.
 *
 * __thiscall (ECX = this), RET 4 (1 stack param: flags byte).
 * CFLAGS: /O1
 */

extern void __fastcall FUN_00416de0(void);
extern void __stdcall FUN_00416130(void);
extern void __fastcall FUN_00415e30(void);
extern void __stdcall FUN_004084e0(void *ptr);

extern int  DAT_007db0c0;   /* counter */
extern void *DAT_007db0bc;  /* singleton ptr */

__declspec(naked) void __stdcall item_vtable_1(void)
{
    __asm {
        push    esi
        mov     esi, ecx                ; ESI = this
        call    FUN_00416de0            ; item destructor body
        test    byte ptr [esp + 0x8], 1 ; param & 1?
        jz      l_return                ; if not, skip pool return
        mov     ecx, dword ptr [DAT_007db0bc]  ; ECX = singleton
        push    esi                     ; push item (this)
        call    FUN_00416130            ; return item to pool
        dec     dword ptr [DAT_007db0c0] ; counter--
        jnz     l_return                ; if counter != 0, skip cleanup
        push    edi
        mov     edi, dword ptr [DAT_007db0bc]  ; EDI = singleton
        test    edi, edi
        jz      l_zero_singleton
        mov     ecx, edi
        call    FUN_00415e30            ; singleton destructor body
        push    edi
        call    FUN_004084e0            ; free(singleton)
        add     esp, 4
    l_zero_singleton:
        pop     edi
        mov     eax, esi
        mov     dword ptr [DAT_007db0bc], 0  ; singleton = NULL
        pop     esi
        ret     4
    l_return:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
