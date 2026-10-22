/*
 * FUN_006E3AA0 (76 B) — String trim trailing whitespace.
 *
 * __fastcall (ECX = this). Calls FUN_006E2970, then walks the string
 * at this+0x00. For each character, calls isspace (0x0076B398). Tracks
 * the last whitespace position. When the string ends, if a whitespace
 * position was found, null-terminates at that position and stores the
 * new length at this-8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006e2970(void);

__declspec(naked) void __fastcall FUN_006e3aa0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_006e2970
        mov     ebx, dword ptr [esi]
        mov     edi, ebx
        mov     al, byte ptr [edi]
        xor     esi, esi
        test    al, al
        jz      l_done
        push    ebp
        _emit   0x8B
        _emit   0x2D
        _emit   0x98
        _emit   0xB3
        _emit   0x76
        _emit   0x00
    l_loop:
        movsx   eax, al
        push    eax
        call    ebp
        add     esp, 4
        test    eax, eax
        jz      l_notspace
        test    esi, esi
        jnz     l_next
        mov     esi, edi
        jmp     l_next
    l_notspace:
        xor     esi, esi
    l_next:
        mov     al, byte ptr [edi + 1]
        inc     edi
        test    al, al
        jnz     l_loop
        test    esi, esi
        pop     ebp
        jz      l_done
        mov     byte ptr [esi], al
        sub     esi, ebx
        mov     dword ptr [ebx - 8], esi
    l_done:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
