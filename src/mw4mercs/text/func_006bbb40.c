/*
 * FUN_006BBB40 (181 B) — Shutdown gosScript: unregister debug callbacks,
 * free resources, zero globals.
 *
 * __cdecl.
 *
 * Disassembly:
 *   A0 38 E2 82 00          mov     al, [0x0082e238]
 *   53                      push    ebx
 *   33 DB                   xor     ebx, ebx
 *   3A C3                   cmp     al, bl
 *   74 76                   jz      l_skip_init
 *   68 84 B5 79 00          push    0x79b584
 *   E8 xx xx xx xx          call    FUN_0070f080
 *   68 60 B5 79 00          push    0x79b560
 *   E8 xx xx xx xx          call    FUN_0070f080
 *   68 40 B5 79 00          push    0x79b540
 *   E8 xx xx xx xx          call    FUN_0070f080
 *   68 20 B5 79 00          push    0x79b520
 *   E8 xx xx xx xx          call    FUN_0070f080
 *   68 F8 B4 79 00          push    0x79b4f8
 *   E8 xx xx xx xx          call    FUN_0070f080
 *   68 D0 B4 79 00          push    0x79b4d0
 *   E8 xx xx xx xx          call    FUN_0070f080
 *   68 A8 B4 79 00          push    0x79b4a8
 *   E8 xx xx xx xx          call    FUN_0070f080
 *   68 78 B4 79 00          push    0x79b478
 *   E8 xx xx xx xx          call    FUN_0070f080
 *   68 44 B4 79 00          push    0x79b444
 *   E8 xx xx xx xx          call    FUN_0070f080
 *   68 14 B4 79 00          push    0x79b414
 *   E8 xx xx xx xx          call    FUN_0070f080
 *   89 1D 94 97 85 00       mov     [0x00859794], ebx
 *   89 1D 90 9B 85 00       mov     [0x00859b90], ebx
 *   88 1D 38 E2 82 00       mov     byte ptr [0x0082e238], bl
 *   skip_init:
 *   E8 xx xx xx xx          call    FUN_006ca960
 *   E8 xx xx xx xx          call    FUN_006bd030
 *   A1 E4 F3 82 00          mov     eax, [0x0082f3e4]
 *   3B C3                   cmp     eax, ebx
 *   89 1D 90 9B 85 00       mov     [0x00859b90], ebx
 *   89 1D EC F5 83 00       mov     [0x0083f5ec], ebx
 *   74 0C                   jz      l_skip_free
 *   50                      push    eax
 *   E8 xx xx xx xx          call    FUN_0072d7b0
 *   89 1D E4 F3 82 00       mov     [0x0082f3e4], ebx
 *   skip_free:
 *   89 1D 08 A2 83 00       mov     [0x0083a208], ebx
 *   5B                      pop     ebx
 *   C3                      ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_006ca960(void);
void __cdecl FUN_0070f080(const char *str);
void __cdecl FUN_0072d7b0(void *ptr);
void __cdecl FUN_006bd030(void);

__declspec(naked) void FUN_006bbb40(void)
{
    __asm {
; mov al, byte ptr [0x0082e238]
_emit 0xA0
_emit 0x38
_emit 0xE2
_emit 0x82
_emit 0x00
        push    ebx
        xor     ebx, ebx
        cmp     al, bl
        jz      l_skip_init
        push    0x79b584
        call    FUN_0070f080
        push    0x79b560
        call    FUN_0070f080
        push    0x79b540
        call    FUN_0070f080
        push    0x79b520
        call    FUN_0070f080
        push    0x79b4f8
        call    FUN_0070f080
        push    0x79b4d0
        call    FUN_0070f080
        push    0x79b4a8
        call    FUN_0070f080
        push    0x79b478
        call    FUN_0070f080
        push    0x79b444
        call    FUN_0070f080
        push    0x79b414
        call    FUN_0070f080
; mov [0x00859794], ebx
_emit 0x89
_emit 0x1D
_emit 0x94
_emit 0x97
_emit 0x85
_emit 0x00
; mov [0x00859b90], ebx
_emit 0x89
_emit 0x1D
_emit 0x90
_emit 0x9B
_emit 0x85
_emit 0x00
; mov byte ptr [0x0082e238], bl
_emit 0x88
_emit 0x1D
_emit 0x38
_emit 0xE2
_emit 0x82
_emit 0x00
l_skip_init:
        call    FUN_006ca960
        call    FUN_006bd030
; mov eax, [0x0082f3e4]
_emit 0xA1
_emit 0xE4
_emit 0xF3
_emit 0x82
_emit 0x00
        cmp     eax, ebx
; mov [0x00859b90], ebx
_emit 0x89
_emit 0x1D
_emit 0x90
_emit 0x9B
_emit 0x85
_emit 0x00
; mov [0x0083f5ec], ebx
_emit 0x89
_emit 0x1D
_emit 0xEC
_emit 0xF5
_emit 0x83
_emit 0x00
        jz      l_skip_free
        push    eax
        call    FUN_0072d7b0
; mov [0x0082f3e4], ebx
_emit 0x89
_emit 0x1D
_emit 0xE4
_emit 0xF3
_emit 0x82
_emit 0x00
l_skip_free:
; mov [0x0083a208], ebx
_emit 0x89
_emit 0x1D
_emit 0x08
_emit 0xA2
_emit 0x83
_emit 0x00
        pop     ebx
        ret
    }
}
