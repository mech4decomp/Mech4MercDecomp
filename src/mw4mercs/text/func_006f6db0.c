/*
 * FUN_006F6DB0 (125 B) — Object constructor with field initialization.
 *
 * __fastcall (ECX = this). Calls FUN_006F68C0, initializes many
 * fields to 0/9999, sets vtable to 0x79FD24, allocates three
 * 0xFF-byte buffers via malloc, stores them at +0x2c/+0x34/+0x3c,
 * and zeroes the first byte of each.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f68c0(void);

__declspec(naked) void __cdecl FUN_006f6db0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_006f68c0
        _emit   0x8B
        _emit   0x3D
        _emit   0x94
        _emit   0xB2
        _emit   0x76
        _emit   0x00
        xor     ebx, ebx
        mov     eax, 0x270f
        push    0xff
        mov     byte ptr [esi + 0x10], bl
        mov     dword ptr [esi + 0x14], ebx
        mov     dword ptr [esi + 0x18], eax
        mov     byte ptr [esi + 0x1c], bl
        mov     byte ptr [esi + 0x1d], bl
        mov     byte ptr [esi + 0x1e], bl
        mov     dword ptr [esi + 0x20], ebx
        mov     dword ptr [esi + 0x24], eax
        mov     byte ptr [esi + 0x28], bl
        mov     dword ptr [esi + 0x2c], ebx
        mov     byte ptr [esi + 0x30], bl
        mov     dword ptr [esi + 0x34], ebx
        mov     byte ptr [esi + 0x38], bl
        mov     dword ptr [esi + 0x3c], ebx
        mov     byte ptr [esi + 0x40], bl
        mov     byte ptr [esi + 0x41], bl
        mov     byte ptr [esi + 0x42], bl
        mov     dword ptr [esi], 0x79fd24
        call    edi
        push    0xff
        mov     dword ptr [esi + 0x2c], eax
        mov     byte ptr [eax], bl
        call    edi
        push    0xff
        mov     dword ptr [esi + 0x34], eax
        mov     byte ptr [eax], bl
        call    edi
        add     esp, 0xc
        mov     dword ptr [esi + 0x3c], eax
        mov     byte ptr [eax], bl
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
    }
}
