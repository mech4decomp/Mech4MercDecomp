/*
 * FUN_006BC040 (104 B) — Grow a global int array (realloc + copy).
 *
 * If param_1 > DAT_0082eaf4 (current count), allocates (param_1 + 0x20) * 4 bytes,
 * copies old data, frees old buffer, updates globals.
 *
 * __cdecl, RET 8 (two stack params: new_count, optional ptr-to-ptr for relocation).
 *
 * Disassembly:
 *   8B 44 24 04             mov     eax, [esp + 4]
 *   3B 05 F4 EA 82 00       cmp     eax, [0x0082eaf4]
 *   7E 59                   jle     l_skip
 *   53                      push    ebx
 *   8B 1D C0 F3 82 00       mov     ebx, [0x0082f3c0]
 *   55                      push    ebp
 *   8D 68 20                lea     ebp, [eax + 0x20]
 *   A1 1C E2 82 00          mov     eax, [0x0082e21c]
 *   50                      push    eax
 *   8D 0C AD 00 00 00 00    lea     ecx, [ebp*4]
 *   51                      push    ecx
 *   E8 xx xx xx xx          call    FUN_006f3c80
 *   8B 4C 24 10             mov     ecx, [esp + 0x10]
 *   85 C9                   test    ecx, ecx
 *   A3 C0 F3 82 00          mov     [0x0082f3c0], eax
 *   74 0C                   jz      nocopy
 *   8B 11                   mov     edx, [ecx]
 *   2B D3                   sub     edx, ebx
 *   C1 FA 02                sar     edx, 2
 *   8D 14 90                lea     edx, [eax + edx*4]
 *   89 11                   mov     [ecx], edx
 *   nocopy:
 *   85 DB                   test    ebx, ebx
 *   74 16                   jz      l_skipfree
 *   8B 0D F4 EA 82 00       mov     ecx, [0x0082eaf4]
 *   56                      push    esi
 *   57                      push    edi
 *   8B F8                   mov     edi, eax
 *   8B F3                   mov     esi, ebx
 *   53                      push    ebx
 *   F3 A5                   rep movsd
 *   E8 xx xx xx xx          call    FUN_006f4230
 *   5F                      pop     edi
 *   5E                      pop     esi
 *   skipfree:
 *   89 2D F4 EA 82 00       mov     [0x0082eaf4], ebp
 *   5D                      pop     ebp
 *   5B                      pop     ebx
 *   skip:
 *   C2 08 00                ret     8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __stdcall FUN_006f4230(void *ptr);
void *__stdcall FUN_006f3c80(int size, int param);

__declspec(naked) void FUN_006bc040(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        ; cmp eax, [0x0082eaf4]
        _emit 0x3B
        _emit 0x05
        _emit 0xF4
        _emit 0xEA
        _emit 0x82
        _emit 0x00
        jle     l_skip
        push    ebx
; mov ebx, [0x0082f3c0]
_emit 0x8B
_emit 0x1D
_emit 0xC0
_emit 0xF3
_emit 0x82
_emit 0x00
        push    ebp
        lea     ebp, dword ptr [eax + 0x20]
; mov eax, [0x0082e21c]
_emit 0xA1
_emit 0x1C
_emit 0xE2
_emit 0x82
_emit 0x00
        push    eax
        lea     ecx, dword ptr [ebp*4]
        push    ecx
        call    FUN_006f3c80
        mov     ecx, dword ptr [esp + 0x10]
        test    ecx, ecx
; mov [0x0082f3c0], eax
_emit 0xA3
_emit 0xC0
_emit 0xF3
_emit 0x82
_emit 0x00
        jz      nocopy
        mov     edx, dword ptr [ecx]
        sub     edx, ebx
        sar     edx, 2
        lea     edx, dword ptr [eax + edx*4]
        mov     dword ptr [ecx], edx
nocopy:
        test    ebx, ebx
        jz      l_skipfree
; mov ecx, [0x0082eaf4]
_emit 0x8B
_emit 0x0D
_emit 0xF4
_emit 0xEA
_emit 0x82
_emit 0x00
        push    esi
        push    edi
        mov     edi, eax
        mov     esi, ebx
        push    ebx
        rep movsd
        call    FUN_006f4230
        pop     edi
        pop     esi
l_skipfree:
        ; mov [0x0082eaf4], ebp
        _emit 0x89
        _emit 0x2D
        _emit 0xF4
        _emit 0xEA
        _emit 0x82
        _emit 0x00
        pop     ebp
        pop     ebx
l_skip:
        ret     8
    }
}
