/*
 * FUN_1004547a (264 B) — __cdecl.
 * Locale-info wrapper (GetLocaleInfoW/A + MultiByteToWideChar) with SEH frame.
 *
 * CFLAGS: /O1
 */

extern int g_1007580c;
extern int g_1007568c;
extern int *g_1004918c;
extern int *g_10049170;
extern int *g_10049100;
extern void __cdecl FUN_10037940(void);

__declspec(naked) void FUN_1004547a(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -0x1
        push    0x1004c0e0
        push    0x1003eb9c
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x14
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        mov     eax, dword ptr [g_1007580c]
        xor     edi, edi
        cmp     eax, edi
        jnz     L_d9
        push    edi
        push    edi
        push    0x1
        push    edi
        call    dword ptr [g_1004918c]
        test    eax, eax
        jz      L_be
        push    0x1
        jmp     L_d3
    L_be:
        push    edi
        push    edi
        push    0x1
        push    edi
        call    dword ptr [g_10049170]
        test    eax, eax
        jz      L_579
        push    0x2
    L_d3:
        pop     eax
        mov     dword ptr [g_1007580c], eax
    L_d9:
        cmp     eax, 0x1
        jnz     L_f5
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_1004918c]
        jmp     L_57b
    L_f5:
        cmp     eax, 0x2
        jnz     L_579
        cmp     dword ptr [ebp + 0x18], edi
        jnz     L_507
        mov     eax, dword ptr [g_1007568c]
        mov     dword ptr [ebp + 0x18], eax
    L_507:
        push    edi
        push    edi
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_10049170]
        mov     dword ptr [ebp - 0x1c], eax
        cmp     eax, edi
        jz      L_579
        mov     dword ptr [ebp - 0x4], edi
        add     eax, 0x3
        and     al, 0xfc
        call    FUN_10037940
        mov     dword ptr [ebp - 0x18], esp
        mov     esi, esp
        mov     dword ptr [ebp - 0x20], esi
        jmp     L_53e
        /* dead/unreachable code in reference (compiler leftover) */
        push    1
        pop     eax
        ret
        mov     esp, dword ptr [ebp - 0x18]
        xor     edi, edi
        xor     esi, esi
    L_53e:
        or      dword ptr [ebp - 0x4], 0xffffffff
        cmp     esi, edi
        jz      L_579
        push    dword ptr [ebp - 0x1c]
        push    esi
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_10049170]
        test    eax, eax
        jz      L_579
        cmp     dword ptr [ebp + 0x14], edi
        jnz     L_563
        push    edi
        push    edi
        jmp     L_569
    L_563:
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
    L_569:
        push    -0x1
        push    esi
        push    0x1
        push    dword ptr [ebp + 0x18]
        call    dword ptr [g_10049100]
        jmp     L_57b
    L_579:
        xor     eax, eax
    L_57b:
        lea     esp, [ebp - 0x30]
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
