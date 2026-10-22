/*
 * FUN_006BCF90 (158 B) — Initialize gosScript heap names and call init functions.
 *
 * __cdecl.
 *
 * Disassembly:
 *   6A 00                   push    0
 *   6A 00                   push    0
 *   68 88 B6 79 00          push    0x79b688
 *   E8 xx xx xx xx          call    FUN_006f4710
 *   50                      push    eax
 *   6A 00                   push    0
 *   68 80 B6 79 00          push    0x79b680
 *   A3 30 E2 82 00          mov     [0x0082e230], eax
 *   E8 xx xx xx xx          call    FUN_006f4710
 *   A3 1C E2 82 00          mov     [0x0082e21c], eax
 *   A1 30 E2 82 00          mov     eax, [0x0082e230]
 *   50                      push    eax
 *   6A 00                   push    0
 *   68 78 B6 79 00          push    0x79b678
 *   E8 xx xx xx xx          call    FUN_006f4710
 *   8B 0D 30 E2 82 00       mov     ecx, [0x0082e230]
 *   51                      push    ecx
 *   6A 00                   push    0
 *   68 6C B6 79 00          push    0x79b66c
 *   A3 20 E2 82 00          mov     [0x0082e220], eax
 *   E8 xx xx xx xx          call    FUN_006f4710
 *   8B 15 30 E2 82 00       mov     edx, [0x0082e230]
 *   52                      push    edx
 *   6A 00                   push    0
 *   68 60 B6 79 00          push    0x79b660
 *   A3 24 E2 82 00          mov     [0x0082e224], eax
 *   E8 xx xx xx xx          call    FUN_006f4710
 *   A3 28 E2 82 00          mov     [0x0082e228], eax
 *   A1 30 E2 82 00          mov     eax, [0x0082e230]
 *   50                      push    eax
 *   6A 00                   push    0
 *   68 58 B6 79 00          push    0x79b658
 *   E8 xx xx xx xx          call    FUN_006f4710
 *   8B 0D 1C E2 82 00       mov     ecx, [0x0082e21c]
 *   51                      push    ecx
 *   A3 2C E2 82 00          mov     [0x0082e22c], eax
 *   E8 xx xx xx xx          call    FUN_006f4950
 *   E8 xx xx xx xx          call    FUN_006bf090
 *   E8 xx xx xx xx          call    FUN_006bfc90
 *   E9 xx xx xx xx          jmp     FUN_006f49a0
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

int __stdcall FUN_006f4710(const char *name, int flags, int parent);
void __stdcall FUN_006f4950(int ctx);
void __stdcall FUN_006f49a0(void);
void __cdecl FUN_006bf090(void);
void __cdecl FUN_006bfc90(void);

__declspec(naked) void FUN_006bcf90(void)
{
    __asm {
        push    0
        push    0
        push    0x79b688
        call    FUN_006f4710
        push    eax
        push    0
        push    0x79b680
; mov [0x0082e230], eax
_emit 0xA3
_emit 0x30
_emit 0xE2
_emit 0x82
_emit 0x00
        call    FUN_006f4710
; mov [0x0082e21c], eax
_emit 0xA3
_emit 0x1C
_emit 0xE2
_emit 0x82
_emit 0x00
; mov eax, [0x0082e230]
_emit 0xA1
_emit 0x30
_emit 0xE2
_emit 0x82
_emit 0x00
        push    eax
        push    0
        push    0x79b678
        call    FUN_006f4710
; mov ecx, [0x0082e230]
_emit 0x8B
_emit 0x0D
_emit 0x30
_emit 0xE2
_emit 0x82
_emit 0x00
        push    ecx
        push    0
        push    0x79b66c
; mov [0x0082e220], eax
_emit 0xA3
_emit 0x20
_emit 0xE2
_emit 0x82
_emit 0x00
        call    FUN_006f4710
; mov edx, [0x0082e230]
_emit 0x8B
_emit 0x15
_emit 0x30
_emit 0xE2
_emit 0x82
_emit 0x00
        push    edx
        push    0
        push    0x79b660
; mov [0x0082e224], eax
_emit 0xA3
_emit 0x24
_emit 0xE2
_emit 0x82
_emit 0x00
        call    FUN_006f4710
; mov [0x0082e228], eax
_emit 0xA3
_emit 0x28
_emit 0xE2
_emit 0x82
_emit 0x00
; mov eax, [0x0082e230]
_emit 0xA1
_emit 0x30
_emit 0xE2
_emit 0x82
_emit 0x00
        push    eax
        push    0
        push    0x79b658
        call    FUN_006f4710
; mov ecx, [0x0082e21c]
_emit 0x8B
_emit 0x0D
_emit 0x1C
_emit 0xE2
_emit 0x82
_emit 0x00
        push    ecx
; mov [0x0082e22c], eax
_emit 0xA3
_emit 0x2C
_emit 0xE2
_emit 0x82
_emit 0x00
        call    FUN_006f4950
        call    FUN_006bf090
        call    FUN_006bfc90
        jmp     FUN_006f49a0
    }
}
