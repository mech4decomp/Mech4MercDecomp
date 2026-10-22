/*
 * FUN_0064d9f0 (328 B) — Tokenizer/parser state machine over a byte stream.
 *
 * Reads a "current token" from DAT_00805908, advances the stream pointer
 * DAT_00805918, and dispatches on token values (9, 8, 0x33) to perform
 * arithmetic on a float stack (DAT_0080592c) using FUN_0064d7e0 /
 * FUN_0064c950 as value sources.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_805908;
extern char *g_805918;
extern int *g_80592c;
extern int g_80d9bc;
extern int g_80d9b0;
extern int g_80d9b4;

extern int __cdecl FUN_0064d7e0(void);
extern int __cdecl FUN_0064c950(int);

__declspec(naked) void __cdecl FUN_0064d9f0(void)
{
    __asm {
        mov     eax, dword ptr [g_805908]
        push    ebx
        push    esi
        mov     esi, 0x9
        cmp     eax, esi
        push    edi
        jz      L_DA06
        cmp     eax, 0x8
        jnz     L_DA1C
L_DA06:
        mov     esi, eax
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
L_DA1C:
        call    FUN_0064d7e0
        cmp     esi, 0x8
        jnz     L_DA42
        cmp     eax, dword ptr [g_80d9bc]
        mov     ecx, dword ptr [g_80592c]
        jnz     L_DA3C
        mov     edx, dword ptr [ecx]
        neg     edx
        mov     dword ptr [ecx], edx
        jmp     L_DA42
L_DA3C:
        fld     dword ptr [ecx]
        fchs
        fstp    dword ptr [ecx]
L_DA42:
        mov     esi, dword ptr [g_805908]
        cmp     esi, 0x9
        jz      L_DA5B
        cmp     esi, 0x8
        jz      L_DA5B
        cmp     esi, 0x33
        jnz     L_DB34
L_DA5B:
        push    eax
        call    FUN_0064c950
        mov     edi, eax
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
        call    FUN_0064d7e0
        push    eax
        call    FUN_0064c950
        mov     edx, dword ptr [g_80592c]
        add     esp, 0x8
        cmp     esi, 0x33
        lea     ecx, [edx - 0x4]
        jnz     L_DAC2
        cmp     dword ptr [ecx], 0x0
        jnz     L_DAAE
        cmp     dword ptr [edx], 0x0
        jnz     L_DAAE
        xor     eax, eax
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [g_80d9b0]
        mov     dword ptr [g_80592c], ecx
        jmp     L_DA42
L_DAAE:
        mov     eax, 0x1
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [g_80d9b0]
        mov     dword ptr [g_80592c], ecx
        jmp     L_DA42
L_DAC2:
        mov     ebx, dword ptr [g_80d9bc]
        cmp     edi, ebx
        jnz     L_DAFB
        cmp     eax, ebx
        jnz     L_DAF7
        cmp     esi, 0x9
        jnz     L_DAE6
        mov     edx, dword ptr [edx]
        add     dword ptr [ecx], edx
        mov     eax, ebx
        mov     dword ptr [g_80592c], ecx
        jmp     L_DA42
L_DAE6:
        mov     eax, dword ptr [edx]
        sub     dword ptr [ecx], eax
        mov     eax, ebx
        mov     dword ptr [g_80592c], ecx
        jmp     L_DA42
L_DAF7:
        fild    dword ptr [ecx]
        fstp    dword ptr [ecx]
L_DAFB:
        cmp     eax, ebx
        jnz     L_DB03
        fild    dword ptr [edx]
        fstp    dword ptr [edx]
L_DB03:
        cmp     esi, 0x9
        jnz     L_DB1E
        fld     dword ptr [edx]
        mov     eax, dword ptr [g_80d9b4]
        fadd    dword ptr [ecx]
        mov     dword ptr [g_80592c], ecx
        fstp    dword ptr [ecx]
        jmp     L_DA42
L_DB1E:
        fld     dword ptr [ecx]
        mov     eax, dword ptr [g_80d9b4]
        fsub    dword ptr [edx]
        mov     dword ptr [g_80592c], ecx
        fstp    dword ptr [ecx]
        jmp     L_DA42
L_DB34:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
