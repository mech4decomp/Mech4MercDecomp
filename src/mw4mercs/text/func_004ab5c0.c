/*
 * FUN_004ab5c0 (393 B) — MLR subsystem constructor variant (__thiscall,
 * RET 0x4). Calls base ctor FUN_004937b0, initializes member fields, sets
 * vtable 0x7704ac, and constructs sub-objects via FUN_004ae3c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004937b0(int);
extern void __cdecl FUN_004ae3c0(void);

__declspec(naked) void FUN_004ab5c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004937b0
        xor     ebx, ebx
        lea     ecx, [esi + 0x68]
        mov     dword ptr [esi + 0x60], ebx
        call    FUN_004ae3c0
        mov     edi, 1
        mov     dword ptr [esi + 0x74], edi
        mov     dword ptr [esi + 0x80], edi
        mov     dword ptr [esi + 0x8c], edi
        mov     dword ptr [esi + 0x98], ebx
        mov     ebp, 2
        mov     dword ptr [esi + 0xa0], ebp
        lea     ecx, [esi + 0xb8]
        mov     dword ptr [esi + 0xb4], 5
        call    FUN_004ae3c0
        lea     ecx, [esi + 0xc4]
        call    FUN_004ae3c0
        lea     ecx, [esi + 0xd8]
        mov     dword ptr [esi + 0xd4], 6
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0xe4], ebp
        mov     eax, 8
        mov     dword ptr [esi + 0xfc], eax
        mov     dword ptr [esi + 0x100], ebx
        mov     dword ptr [esi + 0x108], edi
        mov     dword ptr [esi + 0x118], eax
        mov     dword ptr [esi + 0x11c], ebx
        mov     dword ptr [esi + 0x124], edi
        mov     dword ptr [esi + 0x134], eax
        mov     dword ptr [esi + 0x138], ebx
        mov     dword ptr [esi + 0x140], edi
        mov     eax, 0xa
        mov     dword ptr [esi + 0x150], eax
        mov     dword ptr [esi + 0x154], ebp
        mov     dword ptr [esi + 0x168], edi
        mov     dword ptr [esi + 0x178], eax
        mov     dword ptr [esi + 0x17c], ebp
        mov     dword ptr [esi + 0x190], edi
        mov     dword ptr [esi + 0x1a0], eax
        mov     dword ptr [esi + 0x1a4], ebp
        mov     dword ptr [esi + 0x1b8], edi
        lea     ecx, [esi + 0x1cc]
        mov     dword ptr [esi + 0x1c8], 5
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x1d8]
        call    FUN_004ae3c0
        mov     ebp, 4
        lea     ecx, [esi + 0x1ec]
        mov     dword ptr [esi + 0x1e8], ebp
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x1f8], edi
        lea     ecx, [esi + 0x20c]
        mov     dword ptr [esi + 0x208], ebp
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x218], edi
        lea     ecx, [esi + 0x22c]
        mov     dword ptr [esi + 0x228], ebp
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x238], edi
        lea     ecx, [esi + 0x24c]
        mov     dword ptr [esi + 0x248], ebp
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x258], edi
        pop     edi
        mov     dword ptr [esi + 0x268], ebx
        mov     dword ptr [esi], 0x7704ac
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
