/*
 * FUN_10007570 (97 B) - __stdcall, RET 0x8.  Crypto helper: validates arg2,
 * acquires a provider via FUN_10007ac0, derives a key via FUN_10007b90,
 * then calls FUN_10007660(arg1, 0, 0) and stores (result >= 0) into *arg2.
 * Returns an HRESULT-style code.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_10007ac0(void);   /* rel32 call, RET 0x8 (2 args) */
extern void __stdcall FUN_10007b90(void);   /* rel32 call, RET 0x4 (1 arg) */
extern void __stdcall FUN_10007660(void);   /* rel32 call, RET 0xc (3 args) */

__declspec(naked) void __stdcall FUN_10007570(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        test    esi, esi
        jne     L_7582
        mov     eax, 0x80070057
        pop     esi
        ret     0x8
L_7582:
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        push    0
        push    edi
        call    FUN_10007ac0
        test    eax, eax
        jge     L_75a0
        pop     edi
        mov     dword ptr [esi], 0
        xor     eax, eax
        pop     esi
        ret     0x8
L_75a0:
        push    edi
        call    FUN_10007b90
        test    eax, eax
        jge     L_75b7
        pop     edi
        mov     dword ptr [esi], 0
        xor     eax, eax
        pop     esi
        ret     0x8
L_75b7:
        push    0
        push    0
        push    edi
        call    FUN_10007660
        xor     ecx, ecx
        test    eax, eax
        setge   cl
        pop     edi
        xor     eax, eax
        mov     dword ptr [esi], ecx
        pop     esi
        ret     0x8
    }
}
