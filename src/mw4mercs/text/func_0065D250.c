/*
 * FUN_0065D250 (41 B) — If [arg1+0x2fc] is non-null and
 * FUN_00415230(global, [obj+4]) returns true, returns that pointer;
 * otherwise returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00415230(void *a, void *b);

extern int g_7f23b0;   /* DAT_007f23b0 */

__declspec(naked) void *FUN_0065D250(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, dword ptr [eax + 0x2fc]
        test    esi, esi
        je      L_65d275
        mov     eax, dword ptr [g_7f23b0]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je      L_65d275
        mov     eax, esi
        pop     esi
        ret
L_65d275:
        xor     eax, eax
        pop     esi
        ret
    }
}
