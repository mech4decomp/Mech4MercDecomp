/*
 * FUN_006FCE40 (184 B) — Large object constructor (initializer).
 *
 * __fastcall (ECX = this), no stack params.
 * Initializes a large object (~0x2F480 bytes) with vtables, zeros
 * arrays of various sizes (1000 dwords, 100 * 32-byte blocks,
 * 700 * 256-byte blocks), then calls FUN_006fde20 and sets globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fde20(void);

__declspec(naked) void *__fastcall FUN_006FCE40(void)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi + 0x04], 0x7a0bcc
        mov     dword ptr [esi], 0x7a0bc8
        mov     dword ptr [esi + 0x04], 0x7a0bc0
        mov     [esi + 0x08], ebx
        mov     [esi + 0x0c], ebx
        mov     [esi + 0x10], ebx
        mov     [esi + 0x14], ebx
        mov     [esi + 0x18], ebx
        mov     [esi + 0x1c], ebx
        mov     [esi + 0x20], ebx
        mov     byte ptr [esi + 0x24], 1
        mov     [esi + 0x28], ebx
        mov     [esi + 0x2c], ebx
        lea     eax, [esi + 0xfd0]
        mov     ecx, 0x3e8
    l_zero_dwords:
        mov     [eax + 0xfffff060], ebx
        mov     [eax], ebx
        add     eax, 4
        dec     ecx
        jnz     l_zero_dwords
        mov     [esi + 0x1f70], ebx
        mov     [esi + 0x2bf4], ebx
        lea     eax, [esi + 0x2bf8]
        mov     ecx, 100
    l_zero_bytes_32:
        mov     [eax + 0xfffff37c], bl
        mov     [eax], bl
        add     eax, 0x20
        dec     ecx
        jnz     l_zero_bytes_32
        mov     [esi + 0x3878], ebx
        lea     eax, [esi + 0x387c]
        mov     ecx, 0x2bc
    l_zero_bytes_256:
        mov     [eax], bl
        add     eax, 0x100
        dec     ecx
        jnz     l_zero_bytes_256
        mov     byte ptr [esi + 0x2f47c], bl
        call    FUN_006fde20
        mov     eax, esi
        pop     esi
        _emit   0x89
        _emit   0x1D
        _emit   0x4C
        _emit   0x68
        _emit   0x85
        _emit   0x00
        _emit   0x89
        _emit   0x1D
        _emit   0x48
        _emit   0x68
        _emit   0x85
        _emit   0x00
        _emit   0xC7
        _emit   0x05
        _emit   0x08
        _emit   0x6F
        _emit   0x7B
        _emit   0x00
        _emit   0xFF
        _emit   0xFF
        _emit   0xFF
        _emit   0xFF
        pop     ebx
        ret
    }
}
