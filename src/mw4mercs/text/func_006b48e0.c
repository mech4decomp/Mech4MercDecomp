/*
 * FUN_006B48E0 (97 B) — Unregister a gosScript variable from the linked list.
 *
 * Walks the singly-linked list at DAT_0082f3bc, finds node whose field_08
 * matches param_1, unlinks it, and frees it.
 *
 * __cdecl, RET 4 (one stack param: variable handle).
 *
 * Disassembly:
 *   55                      push    ebp
 *   8B EC                   mov     ebp, esp
 *   A0 38 E2 82 00          mov     al, [0x0082e238]
 *   84 C0                   test    al, al
 *   75 12                   jnz     ok
 *   68 94 A0 79 00          push    0x79a094
 *   E8 xx xx xx xx          call    FUN_006fab90
 *   83 C4 04                add     esp, 4
 *   85 C0                   test    eax, eax
 *   74 01                   jz      ok
 *   CC                      int     3
 *   ok:
 *   A1 BC F3 82 00          mov     eax, [0x0082f3bc]
 *   57                      push    edi
 *   33 FF                   xor     edi, edi
 *   85 C0                   test    eax, eax
 *   74 32                   jz      l_done
 *   53                      push    ebx
 *   8B 5D 08                mov     ebx, [ebp + 8]
 *   56                      push    esi
 *   loop:
 *   3B 58 08                cmp     ebx, [eax + 8]
 *   8B 30                   mov     esi, [eax]
 *   75 1C                   jnz     l_next
 *   85 FF                   test    edi, edi
 *   74 0A                   jz      head
 *   50                      push    eax
 *   89 37                   mov     [edi], esi
 *   E8 xx xx xx xx          call    FUN_006f4230
 *   EB 10                   jmp     l_next2
 *   head:
 *   50                      push    eax
 *   89 35 BC F3 82 00       mov     [0x0082f3bc], esi
 *   E8 xx xx xx xx          call    FUN_006f4230
 *   EB 02                   jmp     l_next2
 *   next:
 *   8B F8                   mov     edi, eax
 *   next2:
 *   85 F6                   test    esi, esi
 *   8B C6                   mov     eax, esi
 *   75 D5                   jnz     l_loop
 *   5E                      pop     esi
 *   5B                      pop     ebx
 *   done:
 *   5F                      pop     edi
 *   5D                      pop     ebp
 *   C2 04 00                ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __stdcall FUN_006f4230(void *ptr);
int __cdecl FUN_006fab90(const char *msg);

__declspec(naked) void FUN_006b48e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
; mov al, byte ptr [0x0082e238]
_emit 0xA0
_emit 0x38
_emit 0xE2
_emit 0x82
_emit 0x00
        test    al, al
        jnz     ok
        push    0x79a094
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      ok
        int     3
ok:
; mov eax, [0x0082f3bc]
_emit 0xA1
_emit 0xBC
_emit 0xF3
_emit 0x82
_emit 0x00
        push    edi
        xor     edi, edi
        test    eax, eax
        jz      l_done
        push    ebx
        mov     ebx, dword ptr [ebp + 8]
        push    esi
l_loop:
        cmp     ebx, dword ptr [eax + 8]
        mov     esi, dword ptr [eax]
        jnz     l_next
        test    edi, edi
        jz      head
        push    eax
        mov     dword ptr [edi], esi
        call    FUN_006f4230
        jmp     l_next2
head:
        push    eax
; mov [0x0082f3bc], esi
_emit 0x89
_emit 0x35
_emit 0xBC
_emit 0xF3
_emit 0x82
_emit 0x00
        call    FUN_006f4230
        jmp     l_next2
l_next:
        mov     edi, eax
l_next2:
        test    esi, esi
        mov     eax, esi
        jnz     l_loop
        pop     esi
        pop     ebx
l_done:
        pop     edi
        pop     ebp
        ret     4
    }
}
