/*
 * FUN_00594820 (117 B) — __thiscall linked list processor.
 *
 * Iterates through a linked list, processes items with a callback,
 * and handles reference counting.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_004084e0(void *);
int FUN_00594a20(void);

__declspec(naked) void __fastcall FUN_00594820(void)
{
    

extern int DAT_0076b2ac;
extern int DAT_007dd268;
__asm {
push    ecx                         ; save this
        push    ebx
        push    ebp
        mov     ebp, [ecx + 0x14]           ; ebp = this->field_14 (list head)
        push    esi
        push    edi
        mov     [esp + 0x10], ecx           ; save this on stack

    L_loop:
        test    ebp, ebp
        je      L_done

        mov     edi, [ebp]                  ; edi = current->field_00 (item)
        test    edi, edi
        mov     ebp, [ebp + 4]              ; ebp = current->field_04 (next)
        je      L_done

        mov     esi, [edi + 0x24]           ; esi = item->field_24 (string?)
        test    esi, esi
        je      L_skip_addref
        inc     byte ptr [esi - 1]          ; increment ref count

    L_skip_addref:
        mov     eax, [esp + 0x18]           ; eax = param1
        push    eax
        push    esi
        call dword ptr [DAT_0076b2ac]
        add     esp, 8
        mov     ebx, eax                    ; ebx = result
        neg     ebx
        sbb     bl, bl
        inc     bl                          ; bl = (result != 0) ? 1 : 0

        test    esi, esi
        je      L_check_result

        mov     cl, [esi - 1]               ; decrement ref count
        lea     eax, [esi - 1]
        dec     cl
        mov     [eax], cl
        jne     L_check_result
        push    eax
        call    FUN_004084e0                 ; free string
        add     esp, 4

    L_check_result:
        test    bl, bl
        je      L_loop                      ; continue if callback returned 0

        mov eax, dword ptr [DAT_007dd268]
        test    eax, eax
        je      L_loop

        mov     ecx, [esp + 0x10]           ; ecx = this
        push    edi
        call    FUN_00594a20                 ; process item
        jmp     L_loop

    L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     4
    }


}
