/*
 * FUN_1004558d (275 B) — __cdecl.
 * Locale-info wrapper (GetLocaleInfoW/A + WideCharToMultiByte) with SEH frame.
 * (Sibling of FUN_1004547a with different globals/constants.)
 *
 * CFLAGS: /O1
 */

extern int g_10075810;
extern int g_1007568c;
extern int *g_1004918c;
extern int *g_10049170;
extern int *g_100490fc;
extern void __cdecl FUN_10037940(void);

__declspec(naked) void FUN_1004558d(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -0x1
        push    0x1004c0f0
        push    0x1003eb9c
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x14
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        mov     eax, dword ptr [g_10075810]
        xor     esi, esi
        cmp     eax, esi
        jnz     L_55ec
        push    esi
        push    esi
        push    0x1
        push    esi
        call    dword ptr [g_1004918c]
        test    eax, eax
        jz      L_55d1
        push    0x1
        jmp     L_55e6
    L_55d1:
        push    esi
        push    esi
        push    0x1
        push    esi
        call    dword ptr [g_10049170]
        test    eax, eax
        jz      L_5697
        push    0x2
    L_55e6:
        pop     eax
        mov     dword ptr [g_10075810], eax
    L_55ec:
        cmp     eax, 0x2
        jnz     L_5608
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_10049170]
        jmp     L_5699
    L_5608:
        cmp     eax, 0x1
        jnz     L_5697
        cmp     dword ptr [ebp + 0x18], esi
        jnz     L_561e
        mov     eax, dword ptr [g_1007568c]
        mov     dword ptr [ebp + 0x18], eax
    L_561e:
        push    esi
        push    esi
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_1004918c]
        mov     dword ptr [ebp - 0x1c], eax
        cmp     eax, esi
        jz      L_5697
        mov     dword ptr [ebp - 0x4], esi
        add     eax, eax
        add     eax, 0x3
        and     al, 0xfc
        call    FUN_10037940
        mov     dword ptr [ebp - 0x18], esp
        mov     edi, esp
        mov     dword ptr [ebp - 0x20], edi
        jmp     L_5657
        /* dead/unreachable code in reference (compiler leftover) */
        push    1
        pop     eax
        ret
        mov     esp, dword ptr [ebp - 0x18]
        xor     esi, esi
        xor     edi, edi
    L_5657:
        or      dword ptr [ebp - 0x4], 0xffffffff
        cmp     edi, esi
        jz      L_5697
        push    dword ptr [ebp - 0x1c]
        push    edi
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_1004918c]
        test    eax, eax
        jz      L_5697
        cmp     dword ptr [ebp + 0x14], esi
        push    esi
        push    esi
        jnz     L_567e
        push    esi
        push    esi
        jmp     L_5684
    L_567e:
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
    L_5684:
        push    -0x1
        push    edi
        push    0x220
        push    dword ptr [ebp + 0x18]
        call    dword ptr [g_100490fc]
        jmp     L_5699
    L_5697:
        xor     eax, eax
    L_5699:
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
