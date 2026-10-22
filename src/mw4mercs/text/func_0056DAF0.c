/*
 * FUN_0056DAF0 (427 B) — Player shooting timer check.
 *
 * Reads a bytecode stream to get a group ID and a time value,
 * then checks if any player in the group has exceeded their
 * shooting timer. Pushes 0 or 1 onto the global stack.
 *
 * __cdecl (no params), returns DAT_0080d9b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_0056DAF0(void)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064db26(void);
extern int DAT_0080592c;
extern void __cdecl FUN_0064dafc(void);
extern int DAT_007dab40;
extern int DAT_007dab44;
extern int DAT_007dde2c;
extern void __cdecl FUN_006fab65(void);
extern void __cdecl FUN_006fab45(void);
extern void __cdecl FUN_10041fcb6(void);
extern int DAT_00805928;
extern void __cdecl FUN_100562f5c(void);
extern int DAT_0080d9b0;
extern void __cdecl FUN_10041fc4b(void);
extern void __cdecl FUN_00707d1c(void);
extern void __cdecl FUN_100562ed0(void);
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        /* __emit: MSVC6 encodes mov eax,[imm32] as mov eax,imm32 (B8) not A1 */
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        push    ebx
        push    esi
        inc     eax
        push    edi
        /* __emit: MSVC6 cannot encode mov dword ptr [imm32], reg in inline asm */
        mov dword ptr [DAT_00805908], ecx
        /* __emit: MSVC6 cannot encode mov [imm32], eax in inline asm */
        mov dword ptr [DAT_00805918], eax
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_0064db26
        /* __emit: MSVC6 encodes mov eax,[imm32] as mov eax,imm32 (B8) not A1 */
        mov eax, dword ptr [DAT_0080592c]
        mov     edi, dword ptr [eax]
        sub     eax, 4
        /* __emit: MSVC6 cannot encode mov [imm32], eax in inline asm */
        mov dword ptr [DAT_0080592c], eax
        /* __emit: MSVC6 encodes mov eax,[imm32] as mov eax,imm32 (B8) not A1 */
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov     ebx, edi
        /* __emit: MSVC6 cannot encode mov dword ptr [imm32], reg in inline asm */
        mov dword ptr [DAT_00805908], edx
        /* __emit: MSVC6 cannot encode mov [imm32], eax in inline asm */
        mov dword ptr [DAT_00805918], eax
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_0064dafc
        /* __emit: MSVC6 encodes mov eax,[imm32] as mov eax,imm32 (B8) not A1 */
        mov eax, dword ptr [DAT_0080592c]
        mov     ecx, dword ptr [eax]
        /* __emit: MSVC6 encodes mov edx,[imm32] as mov edx,imm32 (BA) not 8B 15 */
        mov edx, dword ptr [DAT_007dab40]
        sub     eax, 4
        /* __emit: MSVC6 cannot encode mov [imm32], eax in inline asm */
        mov dword ptr [DAT_0080592c], eax
        /* __emit: MSVC6 encodes mov eax,[imm32] as mov eax,imm32 (B8) not A1 */
        mov eax, dword ptr [DAT_007dab44]
        mov     esi, dword ptr [eax]
        /* __emit: MSVC6 encodes mov al,[imm32] as mov al,imm8 (B0) not A0 */
        mov al, byte ptr [DAT_007dde2c]
        xor     edx, esi
        mov     esi, dword ptr [edx + 0x10]
        mov     dword ptr [ebp - 4], ecx
        xor     esi, 0x85739531
        test    al, al
        fild    dword ptr [ebp - 4]
        /* __emit: MSVC6 encodes fstp [mem] as fst (D9) dropping the pop; need DD */
        __emit 0xDD
        __emit 0x5D
        __emit 0xF0
        jz      label_skip_assert

        test    edi, edi
        jge     label_check_max
        push    0x7803f0
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_006fab65
        add     esp, 4
        test    eax, eax
        jz      label_check_max
        int     3

label_check_max:
        /* __emit: MSVC6 encodes mov al,[imm32] as mov al,imm8 (B0) not A0 */
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      label_skip_assert
        cmp     edi, 0x20
        jl      label_skip_assert
        push    0x7803c8
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_006fab45
        add     esp, 4
        test    eax, eax
        jz      label_skip_assert
        int     3

label_skip_assert:
        mov     eax, dword ptr [esi + 0x2c]
        xor     edi, edi
        test    eax, eax
        mov     dword ptr [ebp - 4], eax
        jle     label_push_zero

        mov     esi, dword ptr [esi + 0x28]

label_inner:
        mov     ecx, dword ptr [esi + 0x14]
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_10041fcb6
        test    eax, eax
        jz      label_next
        test    ebx, ebx
        jz      label_match_found

label_next:
        mov     eax, dword ptr [ebp - 4]
        dec     ebx
        inc     edi
        add     esi, 0x1c
        cmp     edi, eax
        jl      label_inner

label_push_zero:
        /* __emit: MSVC6 encodes mov esi,[imm32] as mov esi,imm32 (BE) not 8B 35 */
        mov esi, dword ptr [DAT_0080592c]
        /* __emit: MSVC6 encodes mov edx,[imm32] as mov edx,imm32 (BA) not 8B 15 */
        mov edx, dword ptr [DAT_00805928]
        add     esi, 4
        add     edx, 0xa000
        cmp     esi, edx
        /* __emit: MSVC6 cannot encode mov [imm32], esi in inline asm */
        mov dword ptr [DAT_0080592c], esi
        jc      label_skip_grow0
        push    0
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_100562f5c
        add     esp, 4

label_skip_grow0:
        mov     dword ptr [esi], 0
        ; fall through to label_epilogue

label_epilogue:
        /* __emit: MSVC6 encodes mov eax,[imm32] as mov eax,imm32 (B8) not A1 */
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        pop     edi
        inc     eax
        pop     esi
        /* __emit: MSVC6 cannot encode mov [imm32], eax in inline asm */
        mov dword ptr [DAT_00805918], eax
        /* __emit: MSVC6 encodes mov eax,[imm32] as mov eax,imm32 (B8) not A1 */
        mov eax, dword ptr [DAT_0080d9b0]
        /* __emit: MSVC6 cannot encode mov dword ptr [imm32], reg in inline asm */
        mov dword ptr [DAT_00805908], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

label_match_found:
        mov     ecx, dword ptr [esi + 0x14]
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_10041fc4b
        mov     ecx, dword ptr [eax + 0x178]
        mov     edx, dword ptr [ecx + 0x8d4]
        mov     eax, dword ptr [ecx + 0x8d8]
        push    0
        mov     dword ptr [ebp - 8], edx
        mov     dword ptr [ebp - 4], eax
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_00707d1c
        fsub    qword ptr [ebp - 0x10]
        fcomp   qword ptr [ebp - 8]
        /* __emit: MSVC6 inserts 9B WAIT before FNSTSW AX */
        fnstsw ax
        test    ah, 1
        jz      label_set_false
        mov     ebx, 1
        jmp     label_push_result

label_set_false:
        xor     ebx, ebx

label_push_result:
        /* __emit: MSVC6 encodes mov esi,[imm32] as mov esi,imm32 (BE) not 8B 35 */
        mov esi, dword ptr [DAT_0080592c]
        /* __emit: MSVC6 encodes mov ecx,[imm32] as mov ecx,imm32 (B9) not 8B 0D */
        mov ecx, dword ptr [DAT_00805928]
        add     esi, 4
        add     ecx, 0xa000
        cmp     esi, ecx
        /* __emit: MSVC6 cannot encode mov [imm32], esi in inline asm */
        mov dword ptr [DAT_0080592c], esi
        jc      label_skip_grow1
        push    0
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_100562ed0
        add     esp, 4

label_skip_grow1:
        xor     edx, edx
        test    bl, bl
        setnz   dl
        mov     dword ptr [esi], edx
        jmp     label_epilogue
    }


}
