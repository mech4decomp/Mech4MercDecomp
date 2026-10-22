/*
 * FUN_005808B0 (247 B) — __stdcall function.
 * Looks up a resource by ID, with debug assertions.
 * arg1 = resource ID (or -1 for default)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_005808B0(void)
{
    

extern int DAT_0080d964;
extern int DAT_007dde2c;
extern void __cdecl FUN_1005666a8(void);
extern void __cdecl FUN_006fabc2(void);
extern void __cdecl FUN_100566682(void);
extern void __cdecl FUN_006fab9c(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004fcab6(void);
extern void __cdecl FUN_10056663d(void);
extern void __cdecl FUN_006fab57(void);
extern int DAT_007dc690;
extern void __cdecl FUN_100415178(void);
extern void __cdecl FUN_10056660a(void);
extern void __cdecl FUN_006fab24(void);
__asm {
push    ebp
        mov     ebp, esp
        push    esi
        push    edi
        mov     edi, [ebp + 8]              ; edi = arg1 (resource ID)
        cmp     edi, -1
        jne     L_check_flag

        ; Return default value
        mov eax, dword ptr [DAT_0080d964]
        pop     edi
        pop     esi
        pop     ebp
        ret

    L_check_flag:
        mov al, byte ptr [DAT_007dde2c]
        mov     esi, edi
        sar     esi, 0x18                   ; esi = high byte of ID (table index)
        test    al, al
        je      L_after_assert              ; if debug disabled, skip all assertions

        ; Debug assertion: table index must be >= 0
        test    esi, esi
        jge     L_skip_assert1
        push    0x0077F724
        ; call FUN_005666D0
        call FUN_1005666a8
        push    eax
        ; call FUN_006FABF0
        call FUN_006fabc2
        add     esp, 8
        test    eax, eax
        je      L_skip_assert1
        int     3

    L_skip_assert1:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        je      L_after_assert

        ; Debug assertion: table index must be < 0x12
        cmp     esi, 0x12
        jl      L_after_assert
        push    0x0077F724
        ; call FUN_005666D0
        call FUN_100566682
        push    eax
        ; call FUN_006FABF0
        call FUN_006fab9c
        add     esp, 8
        test    eax, eax
        je      L_after_assert
        int     3

    L_after_assert:
        ; XOR obfuscation: decrypt function pointer
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, [eax]                  ; deref
        xor     eax, ecx
        mov     ecx, [eax + 0x10]           ; get vtable method
        push    edi                         ; pass resource ID
        xor     ecx, 0x85739531             ; decrypt
        ; call FUN_004FCB30
        call FUN_1004fcab6
        mov     esi, eax                    ; esi = result

        ; Debug assertion: result must not be null
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        je      L_skip_assert3
        test    esi, esi
        jne     L_skip_assert3a
        push    0x0077F724
        ; call FUN_005666D0
        call FUN_10056663d
        push    eax
        ; call FUN_006FABF0
        call FUN_006fab57
        add     esp, 8
        test    eax, eax
        je      L_skip_assert3a
        int     3

    L_skip_assert3a:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        je      L_skip_assert3

        ; Debug assertion: check if result is in a list
        mov eax, dword ptr [DAT_007dc690]
        mov     ecx, [esi + 4]              ; ecx = result->field_4
        push    eax
        ; call FUN_004146B0 (not 0x415230 as capstone says)
        call FUN_100415178
        test    al, al
        jne     L_skip_assert3
        push    0x0077F68C
        ; call FUN_005666D0
        call FUN_10056660a
        push    eax
        ; call FUN_006FABF0
        call FUN_006fab24
        add     esp, 8
        test    eax, eax
        je      L_skip_assert3
        int     3

    L_skip_assert3:
        test    esi, esi
        jne     L_return_result
        pop     edi
        xor     eax, eax
        pop     esi
        pop     ebp
        ret

    L_return_result:
        xor     eax, eax
        cmp     esi, -1
        sete    al
        pop     edi
        dec     eax
        and     eax, esi
        pop     esi
        pop     ebp
        ret
    }


}
