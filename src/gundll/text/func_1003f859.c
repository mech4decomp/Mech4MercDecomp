/*
 * FUN_1003f859 (55 B) - __cdecl. In-place string transform: converts ASCII
 * digits '0'-'9' to 0-9, and removes ';' separators by shifting the tail.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_1003f859(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     al, byte ptr [ecx]
        test    al, al
        jz      L_878
        push    esi
L_864:
        cmp     al, 0x30
        jl      L_879
        cmp     al, 0x39
        jg      L_879
        sub     al, 0x30
        mov     byte ptr [ecx], al
L_870:
        inc     ecx
L_871:
        mov     al, byte ptr [ecx]
        test    al, al
        jnz     L_864
        pop     esi
L_878:
        ret
L_879:
        cmp     al, 0x3b
        jnz     L_870
        mov     eax, ecx
L_87f:
        mov     dl, byte ptr [eax + 1]
        lea     esi, [eax + 1]
        mov     byte ptr [eax], dl
        mov     eax, esi
        cmp     byte ptr [eax], 0
        jnz     L_87f
        jmp     L_871
    }
}
