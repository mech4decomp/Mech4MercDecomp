/*
 * FUN_10015F10 (499 B) - __fastcall constructor with SEH frame.
 * Sets vtable 0x10021688, calls FUN_10013050, sub-ctor FUN_100065b0
 * on this+0x20, FUN_10001170 on this+0x3c, FUN_1001a8b0 on this,
 * zeroes nine 0x94-byte field groups (5 dwords + 0x400 cap each),
 * then installs vtable 0x100217f8 and sub-vtable 0x100217d8.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10013050(void);
extern void __cdecl FUN_100065b0(void);
extern void __cdecl FUN_10001170(void);
extern void __cdecl FUN_1001a8b0(void);

__declspec(naked) void __cdecl FUN_10015F10(void)
{
    __asm {
        push    -1
        push    0x1001ff2e
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0xc], esi
        mov     dword ptr [esi], 0x10021688
        call    FUN_10013050
        xor     edi, edi
        lea     ecx, [esi + 0x20]
        mov     dword ptr [esp + 0x18], edi
        call    FUN_100065b0
        mov     ebx, 0x400
        lea     ecx, [esi + 0x3c]
        push    ebx
        mov     byte ptr [esp + 0x1c], 1
        call    FUN_10001170
        mov     ecx, esi
        mov     byte ptr [esp + 0x18], 2
        mov     dword ptr [esi], 0x1002185c
        mov     dword ptr [esi + 0x1c], 0x1002183c
        call    FUN_1001a8b0
        mov     dword ptr [esi + 0xd4], edi
        mov     dword ptr [esi + 0xd8], edi
        mov     dword ptr [esi + 0xdc], edi
        mov     dword ptr [esi + 0xe0], edi
        mov     dword ptr [esi + 0xe4], edi
        mov     dword ptr [esi + 0xe8], ebx
        mov     dword ptr [esi + 0x16c], edi
        mov     dword ptr [esi + 0x170], edi
        mov     dword ptr [esi + 0x174], edi
        mov     dword ptr [esi + 0x178], edi
        mov     dword ptr [esi + 0x17c], edi
        mov     dword ptr [esi + 0x180], ebx
        mov     dword ptr [esi + 0x204], edi
        mov     dword ptr [esi + 0x208], edi
        mov     dword ptr [esi + 0x20c], edi
        mov     dword ptr [esi + 0x210], edi
        mov     dword ptr [esi + 0x214], edi
        mov     dword ptr [esi + 0x218], ebx
        mov     dword ptr [esi + 0x29c], edi
        mov     dword ptr [esi + 0x2a0], edi
        mov     dword ptr [esi + 0x2a4], edi
        mov     dword ptr [esi + 0x2a8], edi
        mov     dword ptr [esi + 0x2ac], edi
        mov     dword ptr [esi + 0x2b0], ebx
        mov     dword ptr [esi + 0x334], edi
        mov     dword ptr [esi + 0x338], edi
        mov     dword ptr [esi + 0x33c], edi
        mov     dword ptr [esi + 0x340], edi
        mov     dword ptr [esi + 0x344], edi
        mov     dword ptr [esi + 0x348], ebx
        mov     dword ptr [esi + 0x3cc], edi
        mov     dword ptr [esi + 0x3d0], edi
        mov     dword ptr [esi + 0x3d4], edi
        mov     dword ptr [esi + 0x3d8], edi
        mov     dword ptr [esi + 0x3dc], edi
        mov     dword ptr [esi + 0x3e0], ebx
        mov     dword ptr [esi + 0x464], edi
        mov     dword ptr [esi + 0x468], edi
        mov     dword ptr [esi + 0x46c], edi
        mov     dword ptr [esi + 0x470], edi
        mov     dword ptr [esi + 0x474], edi
        mov     dword ptr [esi + 0x478], ebx
        mov     dword ptr [esi + 0x4fc], edi
        mov     dword ptr [esi + 0x500], edi
        mov     dword ptr [esi + 0x504], edi
        mov     dword ptr [esi + 0x508], edi
        mov     dword ptr [esi + 0x50c], edi
        mov     dword ptr [esi + 0x510], ebx
        mov     dword ptr [esi + 0x594], edi
        mov     dword ptr [esi + 0x598], edi
        mov     dword ptr [esi + 0x59c], edi
        mov     dword ptr [esi + 0x5a0], edi
        mov     dword ptr [esi + 0x5a4], edi
        mov     dword ptr [esi + 0x5a8], ebx
        mov     dword ptr [esi], 0x100217f8
        mov     dword ptr [esi + 0x1c], 0x100217d8
        mov     dword ptr [esi + 0x4], edi
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi + 0x18], edi
        mov     dword ptr [esi + 0x34], edi
        mov     dword ptr [esi + 0x38], edi
        mov     dword ptr [esi + 0x8], edi
        mov     dword ptr [esi + 0x28], 7
        mov     dword ptr [esi + 0x2c], 0x100267f8
        mov     dword ptr [esi + 0x30], 0x100267e8
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
