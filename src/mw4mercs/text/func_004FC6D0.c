/*
 * FUN_004FC6D0 (210 B) — in-.text data block function (block 0x4FC6C1).
 * Loops 0x12 times over a table, building a string buffer and calling
 * FUN_0040eda0 / FUN_00411d10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004fd5f0(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411d10(void);

extern void (__cdecl *g_0076b420)(void);   /* IAT @ 0x76b420 */

extern char g_0076b768;   /* byte @ 0x76b768 */
extern char g_76b9a8[];   /* string @ 0x76b9a8 */

__declspec(naked) void FUN_004FC6D0(void)
{
    __asm {
        sub     esp, 0x10c
        push    ebx
        push    ebp
        push    esi
        xor     esi, esi
        xor     ebp, ebp
        add     ecx, 0x14
        push    edi
        mov     dword ptr [esp + 0x10], ecx
        jmp     L6ED
L6E7:
        mov     ecx, dword ptr [esp + 0x10]
        xor     esi, esi
L6ED:
        mov     eax, dword ptr [ecx]
        cmp     eax, esi
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x18], esi
        jbe     L709
        push    eax
        mov     eax, dword ptr [ecx - 4]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_004fd5f0
L709:
        mov     cl, byte ptr [g_0076b768]
        mov     byte ptr [esp + 0x1c], cl
        xor     eax, eax
        mov     ecx, 0x3f
        lea     edi, [esp + 0x1d]
        rep stosd
        push    ebp
        stosw
        lea     edx, [esp + 0x20]
        push    offset g_76b9a8
        push    edx
        stosb
        call    dword ptr [g_0076b420]
        mov     ecx, dword ptr [esp + 0x12c]
        add     esp, 0xc
        lea     eax, [esp + 0x1c]
        push    eax
        call    FUN_0040eda0
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jbe     L772
        xor     edi, edi
L754:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [edi + ecx + 0x10]
        push    0x45
        push    edx
        mov     ecx, ebx
        call    FUN_00411d10
        mov     eax, dword ptr [esp + 0x18]
        inc     esi
        add     edi, 0x1c
        cmp     esi, eax
        jb      L754
L772:
        mov     ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        je      L780
        mov     eax, dword ptr [ecx]
        push    3
        call    dword ptr [eax]
L780:
        mov     ecx, dword ptr [esp + 0x10]
        inc     ebp
        add     ecx, 8
        cmp     ebp, 0x12
        mov     dword ptr [esp + 0x10], ecx
        jl      L6E7
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10c
        ret     4
    }
}
