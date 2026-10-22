/*
 * FUN_00539160 (49 B) — __cdecl.
 * Reads byte from [0x7DB094+0x28], pushes it with args
 * (1, 0, 0x35), decodes global pointer, calls
 * FUN_004CE190(decoded+0x14, 1, 0, 0x35, byte_val).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004CE190(int, int, int, int, int);

__declspec(naked) void __cdecl FUN_00539160(void)
{
    __asm {
        _emit   0x8B
        _emit   0x0D
        _emit   0x94
        _emit   0xB0
        _emit   0x7D
        _emit   0x00
        _emit   0x8B
        _emit   0x15
        _emit   0x44
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        _emit   0x8B
        _emit   0x0D
        _emit   0x40
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        push    1
        push    0
        push    0x35
        push    eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004CE190
        ret
    }
}
