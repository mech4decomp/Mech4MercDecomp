/*
 * FUN_00567930 (88 B) — __cdecl (no args, RET). Advances a global string
 * cursor g_805918, records a byte to g_805908, then looks up a token via
 * FUN_0064DB40/FUN_0064C950; if it's not a type-3 entry matching g_80D9B8,
 * calls FUN_00563060(6). Advances the cursor again and returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064DB40(void);
extern void __cdecl FUN_0064C950(void);
extern void __cdecl FUN_00563060(void);
extern int g_805918;
extern int g_805908;
extern int g_80d9b8;

__declspec(naked) void FUN_00567930(void)
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
        mov     ecx, dword ptr [eax + 4]
        add     esp, 4
        cmp     ecx, 3
        jne     loc_567967
        mov     edx, dword ptr [eax + 0x14]
        cmp     edx, dword ptr [g_80d9b8]
        je      loc_567971
loc_567967:
        push    6
        call    FUN_00563060
        add     esp, 4
loc_567971:
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_805918], eax
        mov     dword ptr [g_805908], ecx
        xor     eax, eax
        ret
    }
}
