/*
 * FUN_0056CC10 (334 B) — Timer set function.
 *
 * Reads a bytecode stream to get a group ID and timer ID, then
 * initializes a timer entry in the timer array.
 *
 * __cdecl (no params), returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_0056CC10(void)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064db28(void);
extern int DAT_0080592c;
extern int DAT_007dde2c;
extern void __cdecl FUN_100566bb8(void);
extern void __cdecl FUN_100566687(void);
extern void __cdecl FUN_006faba1(void);
extern void __cdecl FUN_0064dad0(void);
extern int DAT_007dab40;
extern int DAT_007dab44;
extern void __cdecl FUN_10056661f(void);
extern void __cdecl FUN_006fab39(void);
extern void __cdecl FUN_1005665fa(void);
extern void __cdecl FUN_006fab14(void);
extern void __cdecl FUN_00707d63(void);
extern void __cdecl FUN_00707d4e(void);
__asm {
push    ebp
        mov     ebp, esp
        push    ecx
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
        call FUN_0064db28
        /* __emit: MSVC6 encodes mov eax,[imm32] as mov eax,imm32 (B8) not A1 */
        mov eax, dword ptr [DAT_0080592c]
        mov     edi, dword ptr [eax]
        sub     eax, 4
        /* __emit: MSVC6 cannot encode mov [imm32], eax in inline asm */
        mov dword ptr [DAT_0080592c], eax
        /* __emit: MSVC6 encodes mov al,[imm32] as mov al,imm8 (B0) not A0 */
        mov al, byte ptr [DAT_007dde2c]
        xor     ebx, ebx
        cmp     al, bl
        jz      label_skip_assert1
        push    edi
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_100566bb8
        add     esp, 4
        test    al, al
        jz      label_skip_assert1
        push    0x7801e4
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_100566687
        push    eax
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_006faba1
        add     esp, 8
        test    eax, eax
        jz      label_skip_assert1
        int     3

label_skip_assert1:
        /* __emit: MSVC6 encodes mov eax,[imm32] as mov eax,imm32 (B8) not A1 */
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        /* __emit: MSVC6 cannot encode mov dword ptr [imm32], reg in inline asm */
        mov dword ptr [DAT_00805908], edx
        /* __emit: MSVC6 cannot encode mov [imm32], eax in inline asm */
        mov dword ptr [DAT_00805918], eax
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_0064dad0
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
        mov     esi, dword ptr [edx + 0x20]
        xor     esi, 0x85739531
        cmp     al, bl
        mov     dword ptr [ebp - 4], ecx
        jz      label_skip_assert2

        cmp     edi, ebx
        jge     label_check_max
        push    0x7801b0
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_10056661f
        push    eax
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_006fab39
        add     esp, 8
        test    eax, eax
        jz      label_check_max
        int     3

label_check_max:
        /* __emit: MSVC6 cannot encode cmp byte ptr [imm32], reg in inline asm */
        cmp byte ptr [DAT_007dde2c], bl
        jz      label_skip_assert2
        cmp     edi, 0x20
        jl      label_skip_assert2
        push    0x780178
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_1005665fa
        push    eax
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_006fab14
        add     esp, 8
        test    eax, eax
        jz      label_skip_assert2
        int     3

label_skip_assert2:
        lea     ecx, [edi + edi * 2]
        shl     ecx, 4
        mov     eax, dword ptr [ecx + esi + 0x1be0]
        cmp     eax, ebx
        lea     esi, [ecx + esi + 0x1bb8]
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi + 8], ebx
        mov     dword ptr [esi + 4], ebx
        mov     dword ptr [esi + 0xc], ebx
        jz      label_skip_clear_time
        push    ebx
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_00707d63
        /* __emit: MSVC6 encodes fstp [mem] as fst (D9) dropping the pop; need DD */
        __emit 0xDD
        __emit 0x5E
        __emit 0x18

label_skip_clear_time:
        mov     dword ptr [esi + 0x20], ebx
        mov     dword ptr [esi + 0x10], ebx
        push    ebx
        mov     dword ptr [esi + 0x24], ebx
        mov     dword ptr [esi + 0x14], ebx
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_00707d4e
        fisub   dword ptr [ebp - 4]
        /* __emit: MSVC6 encodes mov eax,[imm32] as mov eax,imm32 (B8) not A1 */
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        pop     edi
        inc     eax
        /* __emit: MSVC6 cannot encode mov [imm32], eax in inline asm */
        mov dword ptr [DAT_00805918], eax
        /* __emit: MSVC6 cannot encode mov dword ptr [imm32], reg in inline asm */
        mov dword ptr [DAT_00805908], edx
        /* __emit: MSVC6 encodes fstp [mem] as fst (D9) dropping the pop; need DD */
        __emit 0xDD
        __emit 0x1E
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
