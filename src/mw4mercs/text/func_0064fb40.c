/*
 * FUN_0064FB40 (187 B) — Parser loop over a global string buffer.
 *
 * Reads a character stream from global pointer 0x00805918, tracks a
 * 'I'-prefixed length marker, calls FUN_0064db40 / FUN_0064ea80, and
 * loops until a '%' terminator or a flag at 0x0080d969 is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_5918;   /* 0x00805918 */
extern unsigned long g_5908;   /* 0x00805908 */
extern unsigned long g_592c;   /* 0x0080592c */
extern unsigned char g_d969;   /* 0x0080d969 */
extern unsigned long g_5a28;   /* 0x007b5a28 */

extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064ea80(void);
extern void __cdecl FUN_00563060(void);

__declspec(naked) void FUN_0064fb40(void)
{
    __asm {
        mov     eax, dword ptr [g_5918]
        movsx   ecx, byte ptr [eax]
        push    ebx
        push    ebp
        push    esi
        push    edi
        inc     eax
        xor     edi, edi
        cmp     ecx, 0x49
        jnz     l_5d
        mov     ecx, dword ptr [eax]
        lea     edi, [eax + ecx*1 + -0x1]
        add     eax, 0x4
    l_5d:
        xor     bl, bl
        mov     ebp, eax
        xor     esi, esi
    l_63:
        movsx   edx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_5908], edx
        mov     dword ptr [g_5918], eax
        call    FUN_0064db40
        mov     eax, dword ptr [g_592c]
        cmp     dword ptr [eax], 0x0
        jnz     l_87
        mov     eax, edi
        mov     bl, 0x1
        jmp     l_8c
    l_87:
        mov     eax, dword ptr [g_5918]
    l_8c:
        mov     edx, dword ptr [g_592c]
        movsx   ecx, byte ptr [eax]
        sub     edx, 0x4
        test    bl, bl
        mov     dword ptr [g_592c], edx
        mov     dword ptr [g_5908], ecx
        jnz     l_f0
        inc     eax
        cmp     ecx, 0x25
        mov     dword ptr [g_5918], eax
        jz      l_ca
    l_b3:
        call    FUN_0064ea80
        mov     al, byte ptr [g_d969]
        test    al, al
        jnz     l_f6
        cmp     dword ptr [g_5908], 0x25
        jnz     l_b3
    l_ca:
        mov     ecx, dword ptr [g_5a28]
        inc     esi
        cmp     esi, ecx
        mov     eax, ebp
        mov     dword ptr [g_5918], eax
        jnz     l_63
        push    0x1
        call    FUN_00563060
        mov     eax, dword ptr [g_5918]
        add     esp, 0x4
        jmp     l_63
    l_f0:
        inc     eax
        mov     dword ptr [g_5918], eax
    l_f6:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
