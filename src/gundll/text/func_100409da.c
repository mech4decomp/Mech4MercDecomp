/*
 * FUN_100409da (395 B) — __cdecl.
 * WriteFile wrapper with CRLF translation for text-mode handles.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10076aa0[];
extern void __cdecl FUN_10040902(void);
extern void __cdecl FUN_1004277d(void);
extern void __cdecl FUN_10042786(void);
extern void __cdecl FUN_1004270a(void);
extern int *g_10049124;   /* IAT: WriteFile */
extern int *g_100490e4;   /* IAT: GetLastError */

__declspec(naked) void FUN_100409da(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x414
        push    ebx
        push    esi
        push    edi
        xor     edi, edi
        cmp     dword ptr [ebp + 0x10], edi
        mov     dword ptr [ebp - 0x8], edi
        mov     dword ptr [ebp - 0x10], edi
        jnz     L_100409fa
    L_100409f3:
        xor     eax, eax
        jmp     L_10040b60
    L_100409fa:
        mov     eax, dword ptr [ebp + 0x8]
        sar     eax, 0x5
        lea     ebx, [g_10076aa0 + eax*4]
        mov     eax, dword ptr [ebp + 0x8]
        and     eax, 0x1f
        lea     esi, [eax + eax*8]
        mov     eax, dword ptr [ebx]
        shl     esi, 0x2
        test    byte ptr [eax + esi + 0x4], 0x20
        jz      L_10040a2a
        push    0x2
        push    edi
        push    dword ptr [ebp + 0x8]
        call    FUN_10040902
        add     esp, 0xc
    L_10040a2a:
        mov     eax, dword ptr [ebx]
        add     eax, esi
        test    byte ptr [eax + 0x4], 0x80
        jz      L_10040af9
        mov     eax, dword ptr [ebp + 0xc]
        cmp     dword ptr [ebp + 0x10], edi
        mov     dword ptr [ebp - 0x4], eax
        mov     dword ptr [ebp + 0x8], edi
        jbe     L_10040b34
    L_10040a4a:
        lea     eax, [ebp - 0x414]
    L_10040a50:
        mov     ecx, dword ptr [ebp - 0x4]
        sub     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, dword ptr [ebp + 0x10]
        jnc     L_10040a84
    L_10040a5b:
        mov     ecx, dword ptr [ebp - 0x4]
        inc     dword ptr [ebp - 0x4]
        mov     cl, byte ptr [ecx]
        cmp     cl, 0xa
        jnz     L_10040a6f
        inc     dword ptr [ebp - 0x10]
        mov     byte ptr [eax], 0xd
        inc     eax
    L_10040a6f:
        mov     byte ptr [eax], cl
        inc     eax
        mov     ecx, eax
        lea     edx, [ebp - 0x414]
        sub     ecx, edx
        cmp     ecx, 0x400
        jl      L_10040a50
    L_10040a84:
        mov     edi, eax
        lea     eax, [ebp - 0x414]
        sub     edi, eax
        lea     eax, [ebp - 0xc]
        push    0x0
        push    eax
        lea     eax, [ebp - 0x414]
        push    edi
        push    eax
        mov     eax, dword ptr [ebx]
        push    dword ptr [eax + esi]
        call    dword ptr [g_10049124]
        test    eax, eax
        jz      L_10040aee
        mov     eax, dword ptr [ebp - 0xc]
        add     dword ptr [ebp - 0x8], eax
        cmp     eax, edi
        jl      L_10040ac0
        mov     eax, dword ptr [ebp - 0x4]
        sub     eax, dword ptr [ebp + 0xc]
        cmp     eax, dword ptr [ebp + 0x10]
        jc      L_10040a4a
    L_10040ac0:
        xor     edi, edi
    L_10040ac2:
        mov     eax, dword ptr [ebp - 0x8]
        cmp     eax, edi
        jnz     L_10040b5d
        cmp     dword ptr [ebp + 0x8], edi
        jz      L_10040b34
        push    0x5
        pop     esi
        cmp     dword ptr [ebp + 0x8], esi
        jnz     L_10040b26
        call    FUN_1004277d
        mov     dword ptr [eax], 0x9
        call    FUN_10042786
        mov     dword ptr [eax], esi
        jmp     L_10040b2f
    L_10040aee:
        call    dword ptr [g_100490e4]
        mov     dword ptr [ebp + 0x8], eax
        jmp     L_10040ac0
    L_10040af9:
        lea     ecx, [ebp - 0xc]
        push    edi
        push    ecx
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [eax]
        call    dword ptr [g_10049124]
        test    eax, eax
        jz      L_10040b1b
        mov     eax, dword ptr [ebp - 0xc]
        mov     dword ptr [ebp + 0x8], edi
        mov     dword ptr [ebp - 0x8], eax
        jmp     L_10040ac2
    L_10040b1b:
        call    dword ptr [g_100490e4]
        mov     dword ptr [ebp + 0x8], eax
        jmp     L_10040ac2
    L_10040b26:
        push    dword ptr [ebp + 0x8]
        call    FUN_1004270a
        pop     ecx
    L_10040b2f:
        or      eax, 0xffffffff
        jmp     L_10040b60
    L_10040b34:
        mov     eax, dword ptr [ebx]
        test    byte ptr [eax + esi + 0x4], 0x40
        jz      L_10040b49
        mov     eax, dword ptr [ebp + 0xc]
        cmp     byte ptr [eax], 0x1a
        jz      L_100409f3
    L_10040b49:
        call    FUN_1004277d
        mov     dword ptr [eax], 0x1c
        call    FUN_10042786
        mov     dword ptr [eax], edi
        jmp     L_10040b2f
    L_10040b5d:
        sub     eax, dword ptr [ebp - 0x10]
    L_10040b60:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
