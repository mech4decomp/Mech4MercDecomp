/*
 * FUN_1003fa7d (55 B) — __cdecl. In-place digit/';' string transform.
 */

__declspec(naked) void __cdecl FUN_1003fa7d(void)
{
    __asm {
        mov     ecx, dword ptr [esp+4]
        mov     al, byte ptr [ecx]
        test    al, al
        jz      L_ret
        push    esi
L_cmp30:
        cmp     al, 0x30
        jl      L_cmp3b
        cmp     al, 0x39
        jg      L_cmp3b
        sub     al, 0x30
        mov     byte ptr [ecx], al
L_inc:
        inc     ecx
L_load:
        mov     al, byte ptr [ecx]
        test    al, al
        jnz     L_cmp30
        pop     esi
L_ret:
        ret
L_cmp3b:
        cmp     al, 0x3b
        jnz     L_inc
        mov     eax, ecx
L_shift:
        mov     dl, byte ptr [eax+1]
        lea     esi, [eax+1]
        mov     byte ptr [eax], dl
        mov     eax, esi
        cmp     byte ptr [eax], 0
        jnz     L_shift
        jmp     L_load
    }
}
