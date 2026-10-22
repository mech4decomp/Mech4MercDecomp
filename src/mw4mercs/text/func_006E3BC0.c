/*
 * FUN_006E3BC0 (36 B) — __cdecl. Loops [esp+8] times calling FUN_006E29E0
 * on successive dwords starting at [esp+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006E29E0(void);

__declspec(naked) void FUN_006E3BC0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        je      L_ret
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        lea     edi, [eax + 1]
    L_loop:
        mov     ecx, esi
        call    FUN_006E29E0
        add     esi, 4
        dec     edi
        jne     L_loop
        pop     edi
        pop     esi
    L_ret:
        ret
    }
}
