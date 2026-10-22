/*
 * FUN_0064a220 (322 B) — ABL token/stack push helper.
 *
 * Pushes values onto a growable stack at 0x0080592c (limit
 * 0x00805928 + 0xa000), calling FUN_00563060 when full. Handles
 * param_2 == -1 / param_1+1 / param_1 cases, else raises an ABL
 * syntax error via FUN_006fab90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_805928;   /* 0x00805928 stack base */
extern int *g_80592c;   /* 0x0080592c stack pointer */
extern int  g_805930;   /* 0x00805930 */

extern void __cdecl FUN_00563060(void);
extern int  __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0064a220(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [g_805928]
        push    esi
        mov     esi, dword ptr [g_80592c]
        add     esi, 0x4
        add     eax, 0xa000
        cmp     esi, eax
        mov     dword ptr [g_80592c], esi
        jc      L_64A24B
        push    0x0
        call    FUN_00563060
        add     esp, 0x4
L_64A24B:
        mov     eax, dword ptr [ebp + 0xc]
        cmp     eax, -0x1
        push    edi
        mov     edi, dword ptr [g_805930]
        mov     dword ptr [esi], 0x0
        jnz     L_64A291
        mov     esi, dword ptr [g_80592c]
        mov     ecx, dword ptr [g_805928]
        add     esi, 0x4
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [g_80592c], esi
        jc      L_64A289
        push    0x0
        call    FUN_00563060
        add     esp, 0x4
L_64A289:
        mov     dword ptr [esi], 0x0
        jmp     L_64A300
L_64A291:
        mov     ecx, dword ptr [ebp + 0x8]
        lea     edx, [ecx + 0x1]
        cmp     eax, edx
        jnz     L_64A2C6
        mov     esi, dword ptr [g_80592c]
        mov     eax, dword ptr [g_805928]
        add     esi, 0x4
        add     eax, 0xa000
        mov     dword ptr [g_80592c], esi
        cmp     esi, eax
L_64A2B6:
        jc      L_64A2C2
        push    0x0
        call    FUN_00563060
        add     esp, 0x4
L_64A2C2:
        mov     dword ptr [esi], edi
        jmp     L_64A300
L_64A2C6:
        cmp     eax, ecx
        jnz     L_64A2EC
        mov     esi, dword ptr [g_80592c]
        mov     ecx, dword ptr [g_805928]
        mov     edi, dword ptr [edi + 0x4]
        add     esi, 0x4
        add     ecx, 0xa000
        mov     dword ptr [g_80592c], esi
        cmp     esi, ecx
        jmp     L_64A2B6
L_64A2EC:
        push    0x2
        push    0x7929f4
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_64A300
        int     3
L_64A300:
        mov     esi, dword ptr [g_80592c]
        mov     edx, dword ptr [g_805928]
        mov     edi, dword ptr [g_805930]
        add     esi, 0x4
        add     edx, 0xa000
        cmp     esi, edx
        mov     dword ptr [g_80592c], esi
        jc      L_64A32F
        push    0x0
        call    FUN_00563060
        add     esp, 0x4
L_64A32F:
        mov     eax, dword ptr [g_805928]
        mov     dword ptr [esi], edi
        mov     esi, dword ptr [g_80592c]
        add     esi, 0x4
        add     eax, 0xa000
        cmp     esi, eax
        mov     dword ptr [g_80592c], esi
        pop     edi
        jc      L_64A359
        push    0x0
        call    FUN_00563060
        add     esp, 0x4
L_64A359:
        mov     dword ptr [esi], 0x0
        pop     esi
        pop     ebp
        ret
    }
}
