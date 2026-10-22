/*
 * FUN_5e0312d3 (55 B) - in-place string transform: converts ASCII digit
 * runs to their numeric values and shifts out ';' separators.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e0312d3(void)
{
    __asm {
        mov     ecx, dword ptr [esp+4]
        mov     al, byte ptr [ecx]
        test    al, al
        jz      ret_label
        push    esi
digit_loop:
        cmp     al, 0x30
        jl      semi
        cmp     al, 0x39
        jg      semi
        sub     al, 0x30
        mov     byte ptr [ecx], al
next:
        inc     ecx
load_next:
        mov     al, byte ptr [ecx]
        test    al, al
        jnz     digit_loop
        pop     esi
ret_label:
        ret
semi:
        cmp     al, 0x3b
        jnz     next
        mov     eax, ecx
shift_loop:
        mov     dl, byte ptr [eax+1]
        lea     esi, [eax+1]
        mov     byte ptr [eax], dl
        mov     eax, esi
        cmp     byte ptr [eax], 0
        jnz     shift_loop
        jmp     load_next
    }
}
