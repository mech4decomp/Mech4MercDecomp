/*
 * FUN_00595B80 (146 B) — __thiscall destructor, plain RET.
 *
 * Frees owned resources and chains to base destructor.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004179F0(void);
extern void __cdecl FUN_004084E0(int);
extern int __cdecl FUN_005947C0(void);
extern void __cdecl FUN_004169C0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_00595B80(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx                    ; esi = this
        mov     eax, [esi + 0x2C]           ; eax = this->field_2C
        mov     ecx, [eax + 4]              ; ecx = field_2C->field_4
        push    edi
        mov     dword ptr [esi], 0x782E78   ; set vtable
        call    FUN_004179F0                ; cleanup list
        mov     edx, [esi + 0x18]           ; edx = this->field_18
        lea     ebx, [esi + 0x18]           ; ebx = &this->field_18
        mov     ecx, ebx
        call    dword ptr [edx + 8]         ; call vtable method
        mov     eax, [esi + 0x2C]           ; eax = this->field_2C
        push    eax
        call    FUN_004084E0                ; free(this->field_2C)
        mov     edi, [esi + 0x50]           ; edi = this->field_50
        add     esp, 4
        test    edi, edi
        je      L_skip_free_50
        mov     ecx, edi
        call    FUN_005947C0                ; cleanup sub-object
        push    edi
        call    FUN_004084E0                ; free(edi)
        add     esp, 4

    L_skip_free_50:
        mov     eax, [esi + 0x54]           ; eax = this->field_54 (ref-counted)
        test    eax, eax
        je      L_skip_free_54
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     L_skip_free_54
        push    eax
        call    FUN_004084E0
        add     esp, 4

    L_skip_free_54:
        mov     eax, [esi + 0x34]           ; eax = this->field_34 (ref-counted)
        test    eax, eax
        je      L_skip_free_34
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     L_skip_free_34
        push    eax
        call    FUN_004084E0
        add     esp, 4

    L_skip_free_34:
        mov     ecx, ebx                    ; ecx = &this->field_18
        call    FUN_004169C0                ; cleanup list
        lea     ecx, [esi + 0x10]           ; ecx = &this->field_10
        call    FUN_00417980                ; cleanup sub-object
        mov     ecx, esi
        call    FUN_00415380                ; chain to base destructor
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
