/*
 * FUN_00567820 (89 B) — __cdecl (no args, RET). Advances a global string
 * cursor g_805918, records a byte to g_805908, looks up a token via
 * FUN_0064DB40/FUN_0064C950; if it equals g_80D9B4, converts a float at
 * g_80592C via FUN_0075DB4A. Advances the cursor again and returns.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064DB40(void);
extern void __cdecl FUN_0064C950(void);
extern void __cdecl FUN_0075DB4A(void);
extern int g_805918;
extern int g_805908;
extern int g_80d9b4;
extern int g_80592c;
extern int g_80d9bc;

__declspec(naked) void FUN_00567820(void)
{
    __asm {
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        inc     eax
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
        call    FUN_0064DB40
        push    eax
        call    FUN_0064C950
        mov     ecx, dword ptr [g_80d9b4]
        add     esp, 4
        cmp     eax, ecx
        jne     loc_56785f
        push    esi
        mov     esi, dword ptr [g_80592c]
        fld     dword ptr [esi]
        call    FUN_0075DB4A
        mov     dword ptr [esi], eax
        pop     esi
loc_56785f:
        mov     eax, dword ptr [g_805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_805918], eax
        mov     eax, dword ptr [g_80d9bc]
        mov     dword ptr [g_805908], edx
        ret
    }
}
