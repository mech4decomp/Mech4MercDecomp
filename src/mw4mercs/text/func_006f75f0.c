/*
 * FUN_006F75F0 (128 B) — Object constructor (__thiscall).
 *
 * Initializes a 0x58-byte object with vtable 0x79FD34. Stores the
 * parameter, reads globals 0x0079FC18/0x0079FC1C, zeroes many fields,
 * sets some to 1, sets field_18 to -1, allocates 400 bytes via malloc
 * (0x0076B294), stores result at +0x10, sets +0x14=0, +0x18=0x32.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006f75f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        _emit   0x8B
        _emit   0x15
        _emit   0x1C
        _emit   0xFC
        _emit   0x79
        _emit   0x00
        push    ebx
        xor     ebx, ebx
        push    esi
        mov     esi, ecx
        _emit   0x8B
        _emit   0x0D
        _emit   0x18
        _emit   0xFC
        _emit   0x79
        _emit   0x00
        mov     dword ptr [esi + 4], eax
        mov     eax, 1
        mov     dword ptr [esi + 0x4C], ecx
        mov     dword ptr [esi + 0x1C], ebx
        mov     dword ptr [esi + 0x44], ebx
        push    0x190
        mov     dword ptr [esi + 8], ebx
        mov     byte ptr [esi + 0x0C], al
        mov     byte ptr [esi + 0x0D], al
        mov     dword ptr [esi + 0x10], ebx
        mov     dword ptr [esi + 0x14], ebx
        mov     dword ptr [esi + 0x18], 0xFFFFFFFF
        mov     dword ptr [esi + 0x20], ebx
        mov     dword ptr [esi + 0x24], ebx
        mov     dword ptr [esi + 0x28], ebx
        mov     dword ptr [esi + 0x2C], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi + 0x40], ebx
        mov     dword ptr [esi + 0x48], ebx
        mov     dword ptr [esi + 0x50], edx
        mov     byte ptr [esi + 0x54], bl
        mov     dword ptr [esi], 0x79FD34
        _emit   0xFF
        _emit   0x15
        _emit   0x94
        _emit   0xB2
        _emit   0x76
        _emit   0x00
        add     esp, 4
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x14], ebx
        mov     dword ptr [esi + 0x18], 0x32
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     4
    }
}
