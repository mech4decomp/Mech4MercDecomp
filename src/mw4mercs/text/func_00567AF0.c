/*
 * FUN_00567AF0 (145 B) — __cdecl (no args, RET 0). Same shape as
 * FUN_00567A50: reads a byte from the string at [0x805918], stores its
 * sign-extended value to 0x805908, and calls FUN_0064DB40 four times.
 * Decrements 0x80592C by 4 each iteration.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_805918;
extern int g_805908;
extern int g_80592c;
extern void __cdecl FUN_0064DB40(void);

__declspec(naked) void FUN_00567AF0(void)
{
    __asm {
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        inc     eax
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
        call    FUN_0064DB40
        mov     edx, dword ptr [g_80592c]
        mov     eax, dword ptr [g_805918]
        sub     edx, 4
        mov     dword ptr [g_80592c], edx
        movsx   edx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_805908], edx
        mov     dword ptr [g_805918], eax
        call    FUN_0064DB40
        mov     eax, dword ptr [g_805918]
        mov     edx, dword ptr [g_80592c]
        movsx   ecx, byte ptr [eax]
        sub     edx, 4
        inc     eax
        mov     dword ptr [g_80592c], edx
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
        call    FUN_0064DB40
        mov     edx, dword ptr [g_80592c]
        mov     eax, dword ptr [g_805918]
        sub     edx, 4
        mov     dword ptr [g_80592c], edx
        movsx   edx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_805918], eax
        mov     dword ptr [g_805908], edx
        xor     eax, eax
        ret
    }
}
