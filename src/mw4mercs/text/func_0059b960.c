/*
 * FUN_0059b960 (117 B) — __thiscall dual-list iterator.
 *
 * Iterates through two linked lists (at this+0x10 and this+0x18)
 * and calls a function on each item.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

int FUN_00417a40(void);
void FUN_0059b380(void);

__declspec(naked) void __fastcall FUN_0059b960(void)
{
    __asm {
        push    ecx                         ; save this
        push    ebx
        push    esi
        mov     ebx, ecx                    ; ebx = this
        mov     esi, [ebx + 0x10]           ; esi = this->field_10 (list1 head)
        lea     ecx, [ebx + 0x10]           ; ecx = &this->field_10
        push    edi
        call    FUN_00417a40                 ; init iterator1

        mov     edi, [esp + 0x14]           ; edi = param1
        push    4
        lea     ecx, [esp + 0x10]
        mov     [esp + 0x10], eax           ; save iterator1 state
        mov     eax, [edi]                  ; eax = vtable of param1
        push    ecx                         ; arg2 = &state
        mov     ecx, edi                    ; this = param1
        call    [eax + 0x24]                ; vcall(0x24)

    L_loop1:
        test    esi, esi
        je      L_done1
        mov     ecx, [esi]                  ; ecx = item->field_00
        test    ecx, ecx
        mov     esi, [esi + 4]              ; esi = item->field_04 (next)
        je      L_done1
        push    edi                         ; arg = param1
        call    FUN_0059b380                 ; process item
        jmp     L_loop1

    L_done1:
        mov     esi, [ebx + 0x18]           ; esi = this->field_18 (list2 head)
        lea     ecx, [ebx + 0x18]           ; ecx = &this->field_18
        call    FUN_00417a40                 ; init iterator2

        mov     edx, [edi]                  ; edx = vtable of param1
        mov     [esp + 0x14], eax           ; save iterator2 state
        push    4
        lea     eax, [esp + 0x18]
        push    eax                         ; arg2 = &state
        mov     ecx, edi                    ; this = param1
        call    [edx + 0x24]                ; vcall(0x24)

    L_loop2:
        test    esi, esi
        je      L_done2
        mov     ecx, [esi]                  ; ecx = item->field_00
        test    ecx, ecx
        mov     esi, [esi + 4]              ; esi = item->field_04 (next)
        je      L_done2
        push    edi                         ; arg = param1
        call    FUN_0059b380                 ; process item
        jmp     L_loop2

    L_done2:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
    }
}
