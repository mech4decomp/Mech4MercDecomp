/*
 * FUNC_0040ed60 (54 B) — __thiscall, RET 0x4. Wraps FUN_0040ecc0; on a miss
 * logs an error (FUN_006fab90) and asserts (INT3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0040ed60(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        mov     ebx, dword ptr [ebp+8]
        push    esi
        push    edi
        mov     esi, ecx
        push    ebx
        call    FUN_0040ecc0
        mov     edi, eax
        test    edi, edi
        jnz     loc_40ED8D
        mov     eax, dword ptr [esi]
        push    ebx
        push    eax
        push    0x76d194
        call    FUN_006fab90
        add     esp, 0xc
        test    eax, eax
        jz      loc_40ED8D
        int     3
loc_40ED8D:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x4
    }
}
