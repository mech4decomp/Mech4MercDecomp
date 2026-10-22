/*
 * FUN_5e0327ce (250 B) - printf-style formatter. Uses InterlockedIncrement/
 * Decrement on DAT_5e77abe4 as a reentrancy guard, then walks the format
 * string copying bytes (expanding high-bit chars) and dispatching '%'
 * escapes to FUN_5e0328c8.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77abe4;   /* DAT_5e77abe4 (reentrancy counter) */
extern int g_5e77abe0;   /* DAT_5e77abe0 */
extern int g_5e77abd8;   /* DAT_5e77abd8 */
extern int g_5e039fc8;   /* PTR_PTR_DAT_5e039fc8 */
extern int g_5e0391c0;   /* PTR_DAT_5e0391c0 (char-class table) */
extern int *g_5e0350b0;  /* IAT: InterlockedIncrement */
extern int *g_5e0350ac;  /* IAT: InterlockedDecrement */

extern void __cdecl FUN_5e02c830(int);
extern void __cdecl FUN_5e02c891(int);
extern void __cdecl FUN_5e0328c8(int, int, int, int, int);

__declspec(naked) void FUN_5e0327ce(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ecx
        mov     eax, dword ptr [ebp+0xc]
        push    ebx
        push    esi
        push    edi
        mov     edi, offset g_5e77abe4
        mov     dword ptr [ebp-0x4], eax
        push    edi
        call    dword ptr [g_5e0350b0]
        mov     ebx, dword ptr [g_5e0350ac]
        xor     esi, esi
        cmp     dword ptr [g_5e77abe0], esi
        jz      L280c
        push    edi
        call    ebx
        push    0x13
        call    FUN_5e02c830
        pop     ecx
        mov     dword ptr [ebp-0x8], 1
        jmp     L280f
    L280c:
        mov     dword ptr [ebp-0x8], esi
    L280f:
        mov     eax, dword ptr [ebp+0x18]
        cmp     eax, esi
        jnz     L281b
        mov     eax, dword ptr [g_5e039fc8]
    L281b:
        cmp     dword ptr [ebp-0x4], esi
        mov     dword ptr [ebp+0x18], eax
        jbe     L289a
        mov     esi, dword ptr [ebp+0x10]
    L2826:
        mov     al, byte ptr [esi]
        test    al, al
        jz      L289a
        cmp     al, 0x25
        jz      L2862
        mov     edx, dword ptr [g_5e0391c0]
        movzx   ecx, al
        test    byte ptr [edx+ecx*2+1], 0x80
        jz      L2852
        cmp     dword ptr [ebp-0x4], 1
        jbe     L2852
        mov     ecx, dword ptr [ebp+0x8]
        mov     byte ptr [ecx], al
        inc     dword ptr [ebp+0x8]
        inc     esi
        dec     dword ptr [ebp-0x4]
    L2852:
        mov     ecx, dword ptr [ebp+0x8]
        mov     al, byte ptr [esi]
        mov     byte ptr [ecx], al
        inc     dword ptr [ebp+0x8]
        inc     esi
        dec     dword ptr [ebp-0x4]
        jmp     L2894
    L2862:
        and     dword ptr [g_5e77abd8], 0
        inc     esi
        cmp     byte ptr [esi], 0x23
        jnz     L287a
        mov     dword ptr [g_5e77abd8], 1
        inc     esi
    L287a:
        push    dword ptr [ebp+0x18]
        lea     eax, [ebp-0x4]
        push    eax
        lea     eax, [ebp+0x8]
        push    eax
        mov     al, byte ptr [esi]
        push    dword ptr [ebp+0x14]
        push    eax
        call    FUN_5e0328c8
        add     esp, 0x14
        inc     esi
    L2894:
        cmp     dword ptr [ebp-0x4], 0
        ja      L2826
    L289a:
        cmp     dword ptr [ebp-0x8], 0
        jz      L28aa
        push    0x13
        call    FUN_5e02c891
        pop     ecx
        jmp     L28ad
    L28aa:
        push    edi
        call    ebx
    L28ad:
        cmp     dword ptr [ebp-0x4], 0
        pop     edi
        pop     esi
        pop     ebx
        jbe     L28c4
        mov     eax, dword ptr [ebp+0x8]
        and     byte ptr [eax], 0
        mov     eax, dword ptr [ebp+0xc]
        sub     eax, dword ptr [ebp-0x4]
        leave
        ret
    L28c4:
        xor     eax, eax
        leave
        ret
    }
}
