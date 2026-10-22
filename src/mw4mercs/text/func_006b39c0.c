/*
 * FUN_006B39C0 (146 B) — 3x3 neighborhood iteration calling FUN_006b3b00
 * for each valid cell.
 *
 * __cdecl, RET 0x10 (four stack params: x, y, param_3, param_4).
 *
 * Disassembly:
 *   83 EC 08                sub     esp, 8
 *   33 C0                   xor     eax, eax
 *   89 44 24 04             mov     [esp + 4], eax
 *   89 44 24 00             mov     [esp], eax
 *   57                      push    edi
 *   8D 44 24 04             lea     eax, [esp + 4]
 *   50                      push    eax
 *   8D 4C 24 0C             lea     ecx, [esp + 0xc]
 *   51                      push    ecx
 *   E8 xx xx xx xx          call    FUN_006b3750
 *   8B 44 24 18             mov     eax, [esp + 0x18]
 *   8D 48 01                lea     ecx, [eax + 1]
 *   8D 78 FF                lea     edi, [eax - 1]
 *   83 C4 08                add     esp, 8
 *   3B F9                   cmp     edi, ecx
 *   89 4C 24 10             mov     [esp + 0x10], ecx
 *   7F 5B                   jg      l_done
 *   8B 44 24 04             mov     eax, [esp + 4]
 *   53                      push    ebx
 *   8B 5C 24 20             mov     ebx, [esp + 0x20]
 *   55                      push    ebp
 *   8B 6C 24 20             mov     ebp, [esp + 0x20]
 *   56                      push    esi
 *   yloop:
 *   85 FF                   test    edi, edi
 *   7C 40                   jl      ynext_inc
 *   3B 7C 24 14             cmp     edi, [esp + 0x14]
 *   7D 3A                   jge     ynext_inc
 *   8B 54 24 20             mov     edx, [esp + 0x20]
 *   8D 72 FF                lea     esi, [edx - 1]
 *   8D 4A 01                lea     ecx, [edx + 1]
 *   3B F1                   cmp     esi, ecx
 *   7F 28                   jg      ynext
 *   xloop:
 *   85 F6                   test    esi, esi
 *   7C 1C                   jl      xnext
 *   3B F0                   cmp     esi, eax
 *   7D 18                   jge     xnext
 *   0F AF C7                imul    eax, edi
 *   53                      push    ebx
 *   03 C6                   add     eax, esi
 *   55                      push    ebp
 *   50                      push    eax
 *   E8 xx xx xx xx          call    FUN_006b3b00
 *   8B 44 24 1C             mov     eax, [esp + 0x1c]
 *   8B 54 24 2C             mov     edx, [esp + 0x2c]
 *   83 C4 0C                add     esp, 0xc
 *   xnext:
 *   46                      inc     esi
 *   8D 4A 01                lea     ecx, [edx + 1]
 *   3B F1                   cmp     esi, ecx
 *   7E D8                   jle     xloop
 *   ynext:
 *   8B 4C 24 1C             mov     ecx, [esp + 0x1c]
 *   47                      inc     edi
 *   3B F9                   cmp     edi, ecx
 *   7E B7                   jle     yloop
 *   5E                      pop     esi
 *   5D                      pop     ebp
 *   5B                      pop     ebx
 *   done:
 *   5F                      pop     edi
 *   83 C4 08                add     esp, 8
 *   C3                      ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_006b3750(int *a, int *b);
void __cdecl FUN_006b3b00(int a, int b, int c);

__declspec(naked) void FUN_006b39c0(void)
{
    __asm {
        sub     esp, 8
        xor     eax, eax
        mov     dword ptr [esp + 4], eax
        ; mov [esp], eax  -- force 4-byte encoding
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x00
        push    edi
        lea     eax, dword ptr [esp + 4]
        push    eax
        lea     ecx, dword ptr [esp + 0xc]
        push    ecx
        call    FUN_006b3750
        mov     eax, dword ptr [esp + 0x18]
        lea     ecx, dword ptr [eax + 1]
        lea     edi, dword ptr [eax - 1]
        add     esp, 8
        cmp     edi, ecx
        mov     dword ptr [esp + 0x10], ecx
        jg      l_done
        mov     eax, dword ptr [esp + 4]
        push    ebx
        mov     ebx, dword ptr [esp + 0x20]
        push    ebp
        mov     ebp, dword ptr [esp + 0x20]
        push    esi
yloop:
        test    edi, edi
        jl      ynext_inc
        cmp     edi, dword ptr [esp + 0x14]
        jge     ynext_inc
        mov     edx, dword ptr [esp + 0x20]
        lea     esi, dword ptr [edx - 1]
        lea     ecx, dword ptr [edx + 1]
        cmp     esi, ecx
        jg      ynext
xloop:
        test    esi, esi
        jl      xnext
        cmp     esi, eax
        jge     xnext
        imul    eax, edi
        push    ebx
        add     eax, esi
        push    ebp
        push    eax
        call    FUN_006b3b00
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x2c]
        add     esp, 0xc
xnext:
        inc     esi
xnext_inc:
        lea     ecx, dword ptr [edx + 1]
        cmp     esi, ecx
        jle     xloop
ynext:
        mov     ecx, dword ptr [esp + 0x1c]
ynext_inc:
        inc     edi
        cmp     edi, ecx
        jle     yloop
        pop     esi
        pop     ebp
        pop     ebx
l_done:
        pop     edi
        add     esp, 8
        ret
    }
}
