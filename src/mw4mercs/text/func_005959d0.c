/*
 * FUN_005959D0 (144 B) — __thiscall destructor, RET 4 (1 stack param: flags).
 *
 * Frees owned resources and chains to base destructor.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084E0(int);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_005959D0(void)
{
    __asm {
        push    esi
        mov     esi, ecx                    ; esi = this
        mov     eax, [esi + 0x34]           ; eax = this->field_34
        test    eax, eax
        mov     dword ptr [esi], 0x782E70   ; set vtable
        je      L_skip_free_34
        push    eax
        call    FUN_004084E0                ; free(this->field_34)
        add     esp, 4
        mov     dword ptr [esi + 0x34], 0   ; this->field_34 = NULL

    L_skip_free_34:
        mov     eax, [esi + 0x38]           ; eax = this->field_38
        test    eax, eax
        je      L_skip_free_38
        push    eax
        call    FUN_004084E0                ; free(this->field_38)
        add     esp, 4
        mov     dword ptr [esi + 0x38], 0   ; this->field_38 = NULL

    L_skip_free_38:
        mov     eax, [esi + 0x24]           ; eax = this->field_24 (ref-counted ptr)
        test    eax, eax
        je      L_skip_free_24
        mov     cl, [eax - 1]               ; ref count byte
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     L_skip_free_24
        push    eax
        call    FUN_004084E0                ; free ref-counted object
        add     esp, 4

    L_skip_free_24:
        mov     eax, [esi + 0x20]           ; eax = this->field_20 (ref-counted ptr)
        test    eax, eax
        je      L_skip_free_20
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     L_skip_free_20
        push    eax
        call    FUN_004084E0
        add     esp, 4

    L_skip_free_20:
        lea     ecx, [esi + 0x10]           ; ecx = &this->field_10
        call    FUN_00417980                ; cleanup sub-object
        mov     ecx, esi
        call    FUN_00415380                ; chain to base destructor
        test    byte ptr [esp + 8], 1       ; check flags
        je      L_skip_delete
        push    esi
        call    FUN_004084E0                ; operator delete
        add     esp, 4

    L_skip_delete:
        mov     eax, esi                    ; return this
        pop     esi
        ret     4
    }
}
