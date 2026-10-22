/*
 * FUN_0064f640 (264 B) — Text/stream parser (tokenizer) using global
 * stream state at 0x805908/0x805918/0x80592c.
 *
 * __cdecl, RET 0 (no args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064ea80(void);

extern int   g_805918;
extern int   g_805908;
extern int   g_80592c;
extern int   g_80d9bc;
extern char  g_80d969;

__declspec(naked) void __cdecl FUN_0064f640(void)
{
    __asm {
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax]
        push    esi
        inc     eax
        xor     esi, esi
        cmp     ecx, 0x49
        jnz     L_64f65a
        mov     ecx, dword ptr [eax]
        lea     esi, [ecx + eax - 1]
        add     eax, 4
L_64f65a:
        movsx   edx, byte ptr [eax]
        inc     eax
        push    edi
        mov     dword ptr [g_805908], edx
        mov     dword ptr [g_805918], eax
        call    FUN_0064db40
        cmp     eax, dword ptr [g_80d9bc]
        jz      L_64f68b
        cmp     dword ptr [eax + 0x4], 2
        jz      L_64f68b
        mov     ecx, dword ptr [g_80592c]
        xor     eax, eax
        mov     al, byte ptr [ecx]
        mov     edi, eax
        jmp     L_64f693
L_64f68b:
        mov     edx, dword ptr [g_80592c]
        mov     edi, dword ptr [edx]
L_64f693:
        mov     eax, dword ptr [g_80592c]
        mov     ecx, dword ptr [esi + 0x1]
        sub     eax, 4
        mov     dword ptr [g_80592c], eax
        lea     eax, [esi + 0x1]
        add     eax, 4
        mov     esi, ecx
        xor     ecx, ecx
L_64f6ad:
        mov     edx, esi
        dec     esi
        test    edx, edx
        jz      L_64f6c7
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [eax + 0x4]
        add     eax, 4
        lea     ecx, [ecx + eax - 1]
        add     eax, 4
        cmp     edx, edi
        jnz     L_64f6ad
L_64f6c7:
        test    esi, esi
        pop     edi
        jl      L_64f735
        movsx   edx, byte ptr [ecx]
        mov     esi, 0x2c
        cmp     edx, esi
        lea     eax, [ecx + 0x1]
        mov     dword ptr [g_805908], edx
        mov     dword ptr [g_805918], eax
        jz      L_64f711
        call    FUN_0064ea80
        mov     al, byte ptr [g_80d969]
        test    al, al
        jnz     L_64f746
L_64f6f4:
        cmp     dword ptr [g_805908], esi
        jz      L_64f70c
        call    FUN_0064ea80
        mov     al, byte ptr [g_80d969]
        test    al, al
        jz      L_64f6f4
        pop     esi
        ret
L_64f70c:
        mov     eax, dword ptr [g_805918]
L_64f711:
        movsx   ecx, byte ptr [eax + 0x1]
        inc     eax
        inc     eax
        xor     edx, edx
        cmp     ecx, 0x49
        jnz     L_64f724
        mov     edx, dword ptr [eax]
        lea     edx, [edx + eax - 1]
L_64f724:
        movsx   eax, byte ptr [edx]
        inc     edx
        mov     dword ptr [g_805908], eax
        mov     dword ptr [g_805918], edx
        pop     esi
        ret
L_64f735:
        movsx   ecx, byte ptr [eax + 0x1]
        inc     eax
        inc     eax
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
L_64f746:
        pop     esi
        ret
    }
}
