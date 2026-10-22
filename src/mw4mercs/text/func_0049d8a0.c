/*
 * FUN_0049d8a0 (396 B) - MLR particle/flare/debris subsystem object
 * constructor (__thiscall). Allocates a 0x52c-byte block via FUN_004937b0,
 * initializes a large set of member fields (counts, sizes, flags), calls
 * FUN_004ae3c0 on a series of sub-objects, and installs the vtable at
 * 0x770268.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004937b0(int size);
extern void __cdecl FUN_004ae3c0(void);

__declspec(naked) void FUN_0049d8a0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    0x52c
        call    FUN_004937b0
        xor     ebx, ebx
        mov     dword ptr [esi + 0x60], ebx
        mov     dword ptr [esi + 0x68], ebx
        mov     ebp, 0x1
        mov     dword ptr [esi + 0x70], ebp
        mov     dword ptr [esi + 0x7c], ebp
        mov     dword ptr [esi + 0x88], ebp
        lea     ecx, [esi + 0x9c]
        mov     dword ptr [esi + 0x94], ebx
        call    FUN_004ae3c0
        lea     ecx, [esi + 0xac]
        mov     dword ptr [esi + 0xa8], 0x6
        call    FUN_004ae3c0
        mov     edi, 0x2
        mov     dword ptr [esi + 0xb8], edi
        lea     ecx, [esi + 0xd4]
        mov     dword ptr [esi + 0xd0], 0x6
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0xe0], edi
        lea     ecx, [esi + 0xfc]
        mov     dword ptr [esi + 0xf8], 0x4
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x108], ebp
        lea     ecx, [esi + 0x11c]
        mov     dword ptr [esi + 0x118], 0x4
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x128], ebp
        lea     ecx, [esi + 0x13c]
        mov     dword ptr [esi + 0x138], 0x4
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x148], ebp
        lea     ecx, [esi + 0x15c]
        mov     dword ptr [esi + 0x158], 0x4
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x168], ebp
        mov     ebp, 0x6
        lea     ecx, [esi + 0x17c]
        mov     dword ptr [esi + 0x178], ebp
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x188], edi
        lea     ecx, [esi + 0x1a4]
        mov     dword ptr [esi + 0x1a0], ebp
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x1b0], edi
        mov     eax, 0xb
        mov     dword ptr [esi + 0x1c8], eax
        mov     dword ptr [esi + 0x1cc], edi
        mov     dword ptr [esi + 0x1e0], edi
        mov     dword ptr [esi + 0x1f8], eax
        mov     dword ptr [esi + 0x1fc], edi
        mov     dword ptr [esi + 0x210], edi
        mov     dword ptr [esi + 0x234], ebx
        mov     dword ptr [esi + 0x238], ebx
        mov     dword ptr [esi + 0x23c], ebx
        pop     edi
        mov     dword ptr [esi + 0x240], ebx
        mov     dword ptr [esi + 0x228], ebx
        mov     dword ptr [esi + 0x22c], ebx
        mov     byte ptr [esi + 0x230], bl
        mov     byte ptr [esi + 0x231], bl
        mov     dword ptr [esi + 0x244], ebx
        mov     byte ptr [esi + 0x233], bl
        mov     byte ptr [esi + 0x232], bl
        mov     dword ptr [esi], 0x770268
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
