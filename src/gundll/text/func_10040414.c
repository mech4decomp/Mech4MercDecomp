/*
 * FUN_10040414 (102 B) - __cdecl. Compares the input string against "ACP"
 * (0x1004beb8) and "OCP" (0x1004beb4); selects a codepage id (0x1004 or 0xb),
 * calls the GetACP/GetOEMCP-style function pointer at 0x10075718 with the
 * global arg at 0x10075714, then calls FUN_100379be.
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_1003eb10(void);          /* rel32 call (strcmp) */
extern void __cdecl FUN_100379be(void);         /* rel32 call */
extern int g_10075714;                          /* dword at 0x10075714 */
extern int (*g_10075718)(void);                 /* fn ptr at 0x10075718 (IAT) */

__declspec(naked) void __cdecl FUN_10040414(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ecx
        push    esi
        mov     esi, dword ptr [ebp + 8]
        test    esi, esi
        jz      L_52
        cmp     byte ptr [esi], 0
        jz      L_52
        push    0x1004beb8
        push    esi
        call    FUN_1003eb10
        pop     ecx
        test    eax, eax
        pop     ecx
        jz      L_52
        push    0x1004beb4
        push    esi
        call    FUN_1003eb10
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L_70
        lea     eax, [ebp - 8]
        push    0x8
        push    eax
        push    0xb
        jmp     L_5d
L_52:
        lea     eax, [ebp - 8]
        push    0x8
        push    eax
        push    0x1004
L_5d:
        push    dword ptr [g_10075714]
        call    dword ptr [g_10075718]
        test    eax, eax
        jz      L_77
        lea     esi, [ebp - 8]
L_70:
        push    esi
        call    FUN_100379be
        pop     ecx
L_77:
        pop     esi
        leave
        ret
    }
}
