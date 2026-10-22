/*
 * FUN_1002e090 (110 B) — __stdcall, RET 0x14.
 * Wrapper: if param_5 non-null, allocates a temp buffer and calls
 * FUN_10002790; then calls FUN_10038141 and stores result.
 *
 * CFLAGS: /O1
 */

extern void FUN_10037940(void);
extern void FUN_10002790(void);
extern void FUN_10038141(void);

__declspec(naked) void __stdcall FUN_1002e090(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x18]
        push    ebx
        push    esi
        xor     esi, esi
        test    eax, eax
        push    edi
        mov     ebx, 1005503Ch
        jz      L_e0ce
        mov     esi, dword ptr [eax]
        lea     edi, [esi + esi + 4]
        mov     eax, edi
        add     eax, 3
        and     eax, 0FFFFFFFCh
        call    FUN_10037940
        mov     eax, dword ptr [ebp + 0x18]
        mov     ecx, dword ptr [eax + 4]
        mov     ebx, esp
        push    esi
        push    ecx
        push    edi
        push    ebx
        call    FUN_10002790
        mov     esi, eax
        test    esi, esi
        jl      L_e0f2
    L_e0ce:
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 8]
        push    ebx
        push    10049E58h
        push    edx
        push    100514F8h
        push    eax
        push    ecx
        call    FUN_10038141
        mov     edx, dword ptr [ebp + 0x10]
        add     esp, 0x18
        mov     dword ptr [edx], eax
    L_e0f2:
        mov     eax, esi
        lea     esp, [ebp - 0xc]
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x14
    }
}
