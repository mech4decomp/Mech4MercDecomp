/*
 * FUN_0059FDD0 (143 B) — __thiscall method, plain RET.
 *
 * Iterates through a list and processes items.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00416BC0(void);
extern int __cdecl FUN_00416CC0(void);
extern int __cdecl FUN_004D1F80(void);
extern int __cdecl FUN_00415CA0(void);
extern int __cdecl FUN_004D21C0(void);
extern int __cdecl FUN_00416C60(void);

__declspec(naked) void FUN_0059FDD0(void)
{
    __asm {
        sub     esp, 0x58
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx                    ; edi = this
        lea     ebx, [edi + 0x34]           ; ebx = &this->field_34
        push    ebx
        lea     ecx, [esp + 0x10]           ; local iterator
        call    FUN_00416BC0                ; init iterator
        lea     ecx, [esp + 0x0C]
        mov     dword ptr [esp + 0x0C], 0x77A3CC  ; vtable pointer
        call    FUN_00416CC0                ; get next item
        mov     esi, eax
        test    esi, esi
        je      L_done_iterating

    L_process_loop:
        push    1
        lea     eax, [esi + 0x14]           ; esi->field_14
        push    eax
        lea     ecx, [esp + 0x28]           ; local buffer
        call    FUN_004D1F80                ; read item data
        mov     ecx, [esp + 0x34]           ; some field from read data
        cmp     dword ptr [ecx + 0x30], 0x83  ; check condition
        jge     L_skip_item

        mov     eax, [edi + 0x50]           ; this->field_50
        mov     edx, [esi + 0x1C]           ; esi->field_1C
        sub     eax, edx
        push    esi
        mov     ecx, ebx                    ; ecx = &this->field_34
        mov     [edi + 0x50], eax           ; this->field_50 -= esi->field_1C
        call    FUN_00415CA0                ; process item
        test    esi, esi
        je      L_skip_item
        mov     eax, [esi]                  ; vtable
        push    1
        mov     ecx, esi
        call    dword ptr [eax]             ; call destructor

    L_skip_item:
        lea     ecx, [esp + 0x20]
        call    FUN_004D21C0                ; cleanup
        lea     ecx, [esp + 0x0C]
        call    FUN_00416CC0                ; get next item
        mov     esi, eax
        test    esi, esi
        jne     L_process_loop

    L_done_iterating:
        lea     ecx, [esp + 0x0C]
        call    FUN_00416C60                ; cleanup iterator
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x58
        ret
    }
}
