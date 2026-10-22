/*
 * FUN_006BD030 (125 B) — Shutdown gosScript heap: free all heap regions.
 *
 * __cdecl.
 *
 * Disassembly:
 *   E8 xx xx xx xx          call    FUN_006bf210
 *   E8 xx xx xx xx          call    FUN_006bfe30
 *   A1 2C E2 82 00          mov     eax, [0x0082e22c]
 *   6A 01                   push    1
 *   50                      push    eax
 *   E8 xx xx xx xx          call    FUN_006f4850
 *   8B 0D 28 E2 82 00       mov     ecx, [0x0082e228]
 *   6A 01                   push    1
 *   51                      push    ecx
 *   E8 xx xx xx xx          call    FUN_006f4850
 *   8B 15 24 E2 82 00       mov     edx, [0x0082e224]
 *   6A 01                   push    1
 *   52                      push    edx
 *   E8 xx xx xx xx          call    FUN_006f4850
 *   A1 20 E2 82 00          mov     eax, [0x0082e220]
 *   6A 01                   push    1
 *   50                      push    eax
 *   E8 xx xx xx xx          call    FUN_006f4850
 *   8B 0D 1C E2 82 00       mov     ecx, [0x0082e21c]
 *   6A 01                   push    1
 *   51                      push    ecx
 *   E8 xx xx xx xx          call    FUN_006f4850
 *   8B 15 30 E2 82 00       mov     edx, [0x0082e230]
 *   6A 01                   push    1
 *   52                      push    edx
 *   E8 xx xx xx xx          call    FUN_006f4850
 *   33 C0                   xor     eax, eax
 *   A3 30 E2 82 00          mov     [0x0082e230], eax
 *   A3 2C E2 82 00          mov     [0x0082e22c], eax
 *   A3 28 E2 82 00          mov     [0x0082e228], eax
 *   A3 24 E2 82 00          mov     [0x0082e224], eax
 *   A3 20 E2 82 00          mov     [0x0082e220], eax
 *   A3 1C E2 82 00          mov     [0x0082e21c], eax
 *   C3                      ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __stdcall FUN_006f4850(int handle, int mode);
void __cdecl FUN_006bd030(void);
void __cdecl FUN_006bf210(void);
void __cdecl FUN_006bfe30(void);

__declspec(naked) void FUN_006bd030(void)
{
    __asm {
        call    FUN_006bf210
        call    FUN_006bfe30
; mov eax, [0x0082e22c]
_emit 0xA1
_emit 0x2C
_emit 0xE2
_emit 0x82
_emit 0x00
        push    1
        push    eax
        call    FUN_006f4850
; mov ecx, [0x0082e228]
_emit 0x8B
_emit 0x0D
_emit 0x28
_emit 0xE2
_emit 0x82
_emit 0x00
        push    1
        push    ecx
        call    FUN_006f4850
; mov edx, [0x0082e224]
_emit 0x8B
_emit 0x15
_emit 0x24
_emit 0xE2
_emit 0x82
_emit 0x00
        push    1
        push    edx
        call    FUN_006f4850
; mov eax, [0x0082e220]
_emit 0xA1
_emit 0x20
_emit 0xE2
_emit 0x82
_emit 0x00
        push    1
        push    eax
        call    FUN_006f4850
; mov ecx, [0x0082e21c]
_emit 0x8B
_emit 0x0D
_emit 0x1C
_emit 0xE2
_emit 0x82
_emit 0x00
        push    1
        push    ecx
        call    FUN_006f4850
; mov edx, [0x0082e230]
_emit 0x8B
_emit 0x15
_emit 0x30
_emit 0xE2
_emit 0x82
_emit 0x00
        push    1
        push    edx
        call    FUN_006f4850
        xor     eax, eax
; mov [0x0082e230], eax
_emit 0xA3
_emit 0x30
_emit 0xE2
_emit 0x82
_emit 0x00
; mov [0x0082e22c], eax
_emit 0xA3
_emit 0x2C
_emit 0xE2
_emit 0x82
_emit 0x00
; mov [0x0082e228], eax
_emit 0xA3
_emit 0x28
_emit 0xE2
_emit 0x82
_emit 0x00
; mov [0x0082e224], eax
_emit 0xA3
_emit 0x24
_emit 0xE2
_emit 0x82
_emit 0x00
; mov [0x0082e220], eax
_emit 0xA3
_emit 0x20
_emit 0xE2
_emit 0x82
_emit 0x00
; mov [0x0082e21c], eax
_emit 0xA3
_emit 0x1C
_emit 0xE2
_emit 0x82
_emit 0x00
        ret
    }
}
