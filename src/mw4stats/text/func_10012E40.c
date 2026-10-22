/*
 * FUN_10012E40 (512 B, __fastcall, ECX = this) - Large constructor with
 * SEH frame. Sets up vtable pointers, initializes many sub-object
 * fields (mostly 0 / 0x400), calls sub-constructors.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10013050(void);
extern void __cdecl FUN_100065b0(void);
extern void __cdecl FUN_10001170(void);
extern void __cdecl FUN_1001a8b0(void);

__declspec(naked) void __cdecl FUN_10012E40(void)
{
    __asm {
        push    -1
        push    0x1001fdee
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebp
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
        mov     ebp, 0x400
        lea     ecx, [esi + 0x3c]
        push    ebp
        mov     byte ptr [esp + 0x1c], 1
        call    FUN_10001170
        mov     ecx, esi
        mov     byte ptr [esp + 0x18], 2
        mov     dword ptr [esi], 0x10021644
        mov     dword ptr [esi + 0x1c], 0x10021624
        call    FUN_1001a8b0
        mov     dword ptr [esi + 0xd8], edi
        mov     dword ptr [esi + 0xdc], edi
        mov     dword ptr [esi + 0xe0], edi
        mov     dword ptr [esi + 0xe4], edi
        mov     dword ptr [esi + 0xe8], edi
        mov     dword ptr [esi + 0xec], ebp
        mov     dword ptr [esi + 0x170], edi
        mov     dword ptr [esi + 0x174], edi
        mov     dword ptr [esi + 0x178], edi
        mov     dword ptr [esi + 0x17c], edi
        mov     dword ptr [esi + 0x180], edi
        mov     dword ptr [esi + 0x184], ebp
        mov     dword ptr [esi + 0x208], edi
        mov     dword ptr [esi + 0x20c], edi
        mov     dword ptr [esi + 0x210], edi
        mov     dword ptr [esi + 0x214], edi
        mov     dword ptr [esi + 0x218], edi
        mov     dword ptr [esi + 0x21c], ebp
        mov     dword ptr [esi + 0x2a0], edi
        mov     dword ptr [esi + 0x2a4], edi
        mov     dword ptr [esi + 0x2a8], edi
        mov     dword ptr [esi + 0x2ac], edi
        mov     dword ptr [esi + 0x2b0], edi
        mov     dword ptr [esi + 0x2b4], ebp
        mov     dword ptr [esi + 0x338], edi
        mov     dword ptr [esi + 0x33c], edi
        mov     dword ptr [esi + 0x340], edi
        mov     dword ptr [esi + 0x344], edi
        mov     dword ptr [esi + 0x348], edi
        mov     dword ptr [esi + 0x34c], ebp
        mov     dword ptr [esi + 0x3d0], edi
        mov     dword ptr [esi + 0x3d4], edi
        mov     dword ptr [esi + 0x3d8], edi
        mov     dword ptr [esi + 0x3dc], edi
        mov     dword ptr [esi + 0x3e0], edi
        mov     dword ptr [esi + 0x3e4], ebp
        mov     dword ptr [esi + 0x468], edi
        mov     dword ptr [esi + 0x46c], edi
        mov     dword ptr [esi + 0x470], edi
        mov     dword ptr [esi + 0x474], edi
        mov     dword ptr [esi + 0x478], edi
        mov     dword ptr [esi + 0x47c], ebp
        mov     dword ptr [esi + 0x500], edi
        mov     dword ptr [esi + 0x504], edi
        mov     dword ptr [esi + 0x508], edi
        mov     dword ptr [esi + 0x50c], edi
        mov     dword ptr [esi + 0x510], edi
        mov     dword ptr [esi + 0x514], ebp
        mov     dword ptr [esi + 0x598], edi
        mov     dword ptr [esi + 0x59c], edi
        mov     dword ptr [esi + 0x5a0], edi
        mov     dword ptr [esi + 0x5a4], edi
        mov     dword ptr [esi + 0x5a8], edi
        mov     dword ptr [esi + 0x5ac], ebp
        mov     dword ptr [esi], 0x100215dc
        mov     dword ptr [esi + 0x1c], 0x100215bc
        mov     dword ptr [esi + 4], edi
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi + 0x18], edi
        mov     dword ptr [esi + 0x34], edi
        mov     dword ptr [esi + 0x38], edi
        mov     dword ptr [esi + 8], edi
        mov     dword ptr [esi + 0x630], edi
        mov     dword ptr [esi + 0x28], 2
        mov     dword ptr [esi + 0x2c], 0x10026678
        mov     dword ptr [esi + 0x30], 0x10026668
        mov     byte ptr [esi + 0xd4], 1
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
