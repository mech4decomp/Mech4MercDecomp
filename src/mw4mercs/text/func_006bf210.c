/*
 * FUN_006BF210 (171 B) — Shutdown/cleanup: free all script handles, buffers,
 * and variable list entries.
 *
 * __cdecl.
 *
 * Disassembly:
 *   A1 48 F3 82 00          mov     eax, [0x0082f348]
 *   56                      push    esi
 *   57                      push    edi
 *   33 FF                   xor     edi, edi
 *   3B C7                   cmp     eax, edi
 *   74 0E                   jz      l_skip_handles
 *   handle_loop:
 *   8B 30                   mov     esi, [eax]
 *   50                      push    eax
 *   E8 xx xx xx xx          call    FUN_006bbe80
 *   3B F7                   cmp     esi, edi
 *   8B C6                   mov     eax, esi
 *   75 F2                   jnz     handle_loop
 *   skip_handles:
 *   A1 C0 F3 82 00          mov     eax, [0x0082f3c0]
 *   3B C7                   cmp     eax, edi
 *   89 3D 48 F3 82 00       mov     [0x0082f348], edi
 *   74 0C                   jz      l_skip_c0
 *   50                      push    eax
 *   E8 xx xx xx xx          call    FUN_006f4230
 *   89 3D C0 F3 82 00       mov     [0x0082f3c0], edi
 *   skip_c0:
 *   A1 C4 F3 82 00          mov     eax, [0x0082f3c4]
 *   3B C7                   cmp     eax, edi
 *   74 0C                   jz      l_skip_c4
 *   50                      push    eax
 *   E8 xx xx xx xx          call    FUN_006f4230
 *   89 3D C4 F3 82 00       mov     [0x0082f3c4], edi
 *   skip_c4:
 *   A1 C8 F3 82 00          mov     eax, [0x0082f3c8]
 *   3B C7                   cmp     eax, edi
 *   74 0C                   jz      l_skip_c8
 *   50                      push    eax
 *   E8 xx xx xx xx          call    FUN_006f4230
 *   89 3D C8 F3 82 00       mov     [0x0082f3c8], edi
 *   skip_c8:
 *   A1 CC F3 82 00          mov     eax, [0x0082f3cc]
 *   3B C7                   cmp     eax, edi
 *   74 0C                   jz      l_skip_cc
 *   50                      push    eax
 *   E8 xx xx xx xx          call    FUN_006f4230
 *   89 3D CC F3 82 00       mov     [0x0082f3cc], edi
 *   skip_cc:
 *   A1 D0 F3 82 00          mov     eax, [0x0082f3d0]
 *   3B C7                   cmp     eax, edi
 *   74 0C                   jz      l_skip_d0
 *   50                      push    eax
 *   E8 xx xx xx xx          call    FUN_006f4230
 *   89 3D D0 F3 82 00       mov     [0x0082f3d0], edi
 *   skip_d0:
 *   8B 35 BC F3 82 00       mov     esi, [0x0082f3bc]
 *   3B F7                   cmp     esi, edi
 *   74 0E                   jz      l_skip_bc
 *   var_loop:
 *   8B C6                   mov     eax, esi
 *   8B 36                   mov     esi, [esi]
 *   50                      push    eax
 *   E8 xx xx xx xx          call    FUN_006f4230
 *   3B F7                   cmp     esi, edi
 *   75 F2                   jnz     var_loop
 *   skip_bc:
 *   89 3D BC F3 82 00       mov     [0x0082f3bc], edi
 *   5F                      pop     edi
 *   5E                      pop     esi
 *   C3                      ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __stdcall FUN_006f4230(void *ptr);
void __cdecl FUN_006bf210(void);
int __cdecl FUN_006bbe80(void *handle);

__declspec(naked) void FUN_006bf210(void)
{
    __asm {
; mov eax, [0x0082f348]
_emit 0xA1
_emit 0x48
_emit 0xF3
_emit 0x82
_emit 0x00
        push    esi
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jz      l_skip_handles
handle_loop:
        mov     esi, dword ptr [eax]
        push    eax
        call    FUN_006bbe80
        cmp     esi, edi
        mov     eax, esi
        jnz     handle_loop
l_skip_handles:
; mov eax, [0x0082f3c0]
_emit 0xA1
_emit 0xC0
_emit 0xF3
_emit 0x82
_emit 0x00
        cmp     eax, edi
; mov [0x0082f348], edi
_emit 0x89
_emit 0x3D
_emit 0x48
_emit 0xF3
_emit 0x82
_emit 0x00
        jz      l_skip_c0
        push    eax
        call    FUN_006f4230
; mov [0x0082f3c0], edi
_emit 0x89
_emit 0x3D
_emit 0xC0
_emit 0xF3
_emit 0x82
_emit 0x00
l_skip_c0:
; mov eax, [0x0082f3c4]
_emit 0xA1
_emit 0xC4
_emit 0xF3
_emit 0x82
_emit 0x00
        cmp     eax, edi
        jz      l_skip_c4
        push    eax
        call    FUN_006f4230
; mov [0x0082f3c4], edi
_emit 0x89
_emit 0x3D
_emit 0xC4
_emit 0xF3
_emit 0x82
_emit 0x00
l_skip_c4:
; mov eax, [0x0082f3c8]
_emit 0xA1
_emit 0xC8
_emit 0xF3
_emit 0x82
_emit 0x00
        cmp     eax, edi
        jz      l_skip_c8
        push    eax
        call    FUN_006f4230
; mov [0x0082f3c8], edi
_emit 0x89
_emit 0x3D
_emit 0xC8
_emit 0xF3
_emit 0x82
_emit 0x00
l_skip_c8:
; mov eax, [0x0082f3cc]
_emit 0xA1
_emit 0xCC
_emit 0xF3
_emit 0x82
_emit 0x00
        cmp     eax, edi
        jz      l_skip_cc
        push    eax
        call    FUN_006f4230
; mov [0x0082f3cc], edi
_emit 0x89
_emit 0x3D
_emit 0xCC
_emit 0xF3
_emit 0x82
_emit 0x00
l_skip_cc:
; mov eax, [0x0082f3d0]
_emit 0xA1
_emit 0xD0
_emit 0xF3
_emit 0x82
_emit 0x00
        cmp     eax, edi
        jz      l_skip_d0
        push    eax
        call    FUN_006f4230
; mov [0x0082f3d0], edi
_emit 0x89
_emit 0x3D
_emit 0xD0
_emit 0xF3
_emit 0x82
_emit 0x00
l_skip_d0:
; mov esi, [0x0082f3bc]
_emit 0x8B
_emit 0x35
_emit 0xBC
_emit 0xF3
_emit 0x82
_emit 0x00
        cmp     esi, edi
        jz      l_skip_bc
var_loop:
        mov     eax, esi
        mov     esi, dword ptr [esi]
        push    eax
        call    FUN_006f4230
        cmp     esi, edi
        jnz     var_loop
l_skip_bc:
; mov [0x0082f3bc], edi
_emit 0x89
_emit 0x3D
_emit 0xBC
_emit 0xF3
_emit 0x82
_emit 0x00
        pop     edi
        pop     esi
        ret
    }
}
