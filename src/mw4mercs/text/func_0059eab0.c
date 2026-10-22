/*
 * FUN_0059eab0 (115 B) — __thiscall iterator method (inverted compare).
 *
 * Same as FUN_0059ea30 but with inverted comparison (jl vs jge).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_00416bc0(void);
int FUN_00416cc0(void);
void FUN_00415ca0(void);
void FUN_00416c60(void);

__declspec(naked) void __fastcall FUN_0059eab0(void)
{
    
__asm {
sub     esp, 0x14
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx                    ; edi = this
        lea     ebx, [edi + 0x10]           ; ebx = &this->field_10
        push    ebx                         ; arg
        lea     ecx, [esp + 0x10]           ; ecx = &temp
        call    FUN_00416bc0                 ; init temp

        lea     ecx, [esp + 0x0C]           ; ecx = &temp2
        mov     dword ptr [esp + 0x0C], 0x00783958
        call    FUN_00416cc0                 ; get first item
        mov     esi, eax                    ; esi = current item
        test    esi, esi
        je      L_done

    L_loop:
        cmp     dword ptr [esi + 0x14], 0x96
        jl      L_next                      ; skip if item->field_14 < 0x96

        mov     edx, [edi + 0x2C]           ; edx = this->field_2C
        mov     eax, [esi + 0x18]           ; eax = item->field_18
        sub     edx, eax
        push    esi                         ; arg = item
        mov     ecx, ebx                    ; ecx = &this->field_10
        mov     [edi + 0x2C], edx           ; this->field_2C -= item->field_18
        call    FUN_00415ca0                 ; process item

        test    esi, esi
        je      L_next
        mov     edx, [esi]                  ; edx = vtable
        push    1                           ; arg = 1
        mov     ecx, esi                    ; this = item
        call    [edx]                       ; vcall(0) - release/destruct

    L_next:
        lea     ecx, [esp + 0x0C]           ; ecx = &temp2
        call    FUN_00416cc0                 ; get next item
        mov     esi, eax
        test    esi, esi
        jne     L_loop

    L_done:
        lea     ecx, [esp + 0x0C]           ; ecx = &temp2
        call    FUN_00416c60                 ; destruct temp2

        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret
    }


}
