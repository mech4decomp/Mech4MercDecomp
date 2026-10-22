/*
 * FUN_10037b0e (223 B) — __cdecl, RET.
 * Case-insensitive wide-char string compare (returns difference of the
 * two final chars). Uses a lock/refcount path when DAT_1007567c != 0.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_1007567c;
extern unsigned int g_10076a88;
extern void *g_10049120;
extern void *g_100491bc;
extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_10039b7a(void);
extern void __cdecl FUN_10037e7c(void);

__declspec(naked) void FUN_10037b0e(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        push    esi
        xor     esi, esi
        cmp     dword ptr [g_1007567c], esi
        jnz     L_b66
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
    L_b24:
        mov     ax, word ptr [ecx]
        cmp     ax, 0x5a
        ja      L_b36
        cmp     ax, 0x41
        jc      L_b36
        add     eax, 0x20
    L_b36:
        mov     dword ptr [ebp + 0xc], eax
        mov     ax, word ptr [edx]
        cmp     ax, 0x5a
        ja      L_b4b
        cmp     ax, 0x41
        jc      L_b4b
        add     eax, 0x20
    L_b4b:
        inc     ecx
        mov     dword ptr [ebp + 0x8], eax
        mov     eax, dword ptr [ebp + 0xc]
        inc     ecx
        inc     edx
        inc     edx
        cmp     ax, si
        jz      L_bdf
        cmp     ax, word ptr [ebp + 0x8]
        jz      L_b24
        jmp     L_bdf
    L_b66:
        mov     ebx, 0x10076a8c
        push    ebx
        call    dword ptr [g_10049120]
        cmp     dword ptr [g_10076a88], esi
        jz      L_b92
        push    ebx
        call    dword ptr [g_100491bc]
        push    0x13
        call    FUN_10039b19
        pop     ecx
        mov     dword ptr [ebp - 0x4], 0x1
        jmp     L_b95
    L_b92:
        mov     dword ptr [ebp - 0x4], esi
    L_b95:
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
    L_b9c:
        mov     ax, word ptr [esi]
        inc     esi
        push    eax
        inc     esi
        call    FUN_10037e7c
        mov     dword ptr [ebp + 0xc], eax
        mov     ax, word ptr [edi]
        inc     edi
        push    eax
        inc     edi
        call    FUN_10037e7c
        cmp     word ptr [ebp + 0xc], 0x0
        pop     ecx
        pop     ecx
        mov     dword ptr [ebp + 0x8], eax
        jz      L_bc7
        cmp     word ptr [ebp + 0xc], ax
        jz      L_b9c
    L_bc7:
        cmp     dword ptr [ebp - 0x4], 0x0
        pop     edi
        jz      L_bd8
        push    0x13
        call    FUN_10039b7a
        pop     ecx
        jmp     L_bdf
    L_bd8:
        push    ebx
        call    dword ptr [g_100491bc]
    L_bdf:
        movzx   ecx, word ptr [ebp + 0x8]
        movzx   eax, word ptr [ebp + 0xc]
        pop     esi
        sub     eax, ecx
        pop     ebx
        leave
        ret
    }
}
