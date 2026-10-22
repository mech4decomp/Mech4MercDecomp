/*
 * FUN_0072A680 (230 B) — in-.text data block function (block 0x72A680).
 * Removes a node from a linked list (head 0x8816c8), frees resources via
 * FUN_00717c10 / FUN_006f4230; calls FUN_006fab90 (assert) on errors.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00717c10(void);
extern void __cdecl FUN_006f4230(void);

extern int  g_008816c8;   /* DAT_008816c8 */
extern int  g_008816cc;   /* DAT_008816cc */
extern char g_7a5910[];   /* string @ 0x7a5910 */
extern char g_7a58f8[];   /* string @ 0x7a58f8 */

__declspec(naked) void FUN_0072A680(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        mov     esi, dword ptr [g_008816c8]
        push    edi
        mov     edi, dword ptr [ebp + 8]
        mov     eax, dword ptr [edi]
        xor     ebx, ebx
        cmp     eax, 0x4587abba
        je      L6AC
        push    offset g_7a5910
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        je      L6AC
        int     3
L6AC:
        test    esi, esi
        je      L6BD
L6B0:
        cmp     esi, edi
        je      L6D6
        mov     ebx, esi
        mov     esi, dword ptr [esi + 4]
        test    esi, esi
        jne     L6B0
L6BD:
        push    offset g_7a58f8
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        je      L6CF
        int     3
L6CF:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     4
L6D6:
        dec     dword ptr [esi + 8]
        jne     L6CF
        test    ebx, ebx
        je      L6E7
        mov     eax, dword ptr [esi + 4]
        mov     dword ptr [ebx + 4], eax
        jmp     L6F0
L6E7:
        mov     ecx, dword ptr [esi + 4]
        mov     dword ptr [g_008816c8], ecx
L6F0:
        mov     eax, dword ptr [esi + 0x134]
        test    eax, eax
        jne     L72F
        mov     eax, dword ptr [esi + 0x758]
        xor     ebx, ebx
        test    eax, eax
        jbe     L72F
        lea     edi, [esi + 0x760]
L70C:
        mov     eax, dword ptr [edi]
        test    eax, eax
        je      L71E
        push    eax
        call    FUN_00717c10
        mov     dword ptr [edi], 0
L71E:
        mov     eax, dword ptr [esi + 0x758]
        inc     ebx
        add     edi, 4
        cmp     ebx, eax
        jb      L70C
        mov     edi, dword ptr [ebp + 8]
L72F:
        mov     eax, dword ptr [esi + 0x75c]
        test    eax, eax
        je      L743
        mov     dword ptr [esi + 0x75c], 0
L743:
        push    esi
        call    FUN_006f4230
        cmp     edi, dword ptr [g_008816cc]
        jne     L6CF
        pop     edi
        pop     esi
        mov     dword ptr [g_008816cc], 0
        pop     ebx
        pop     ebp
        ret     4
    }
}
