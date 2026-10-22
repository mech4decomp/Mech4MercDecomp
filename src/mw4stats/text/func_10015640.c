/*
 * FUN_10015640 (224 B) - __fastcall constructor with SEH frame.
 * Sets vtable 0x10021688, calls FUN_10013050, sub-ctor FUN_100065b0
 * on this+0x20, zeroes a large field block, then installs vtable
 * 0x10021794 and sub-vtable 0x10021774.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10013050(void);
extern void __cdecl FUN_100065b0(void);

__declspec(naked) void __cdecl FUN_10015640(void)
{
    __asm {
        push    -1
        push    0x1001fed8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 8], esi
        mov     dword ptr [esi], 0x10021688
        call    FUN_10013050
        xor     edi, edi
        lea     ecx, [esi + 0x20]
        mov     dword ptr [esp + 0x14], edi
        call    FUN_100065b0
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, 0x400
        mov     dword ptr [esi + 0x3c], edi
        mov     dword ptr [esi + 0x40], edi
        mov     dword ptr [esi + 0x44], edi
        mov     dword ptr [esi + 0x48], edi
        mov     dword ptr [esi + 0x4c], edi
        mov     dword ptr [esi + 0x50], eax
        mov     dword ptr [esi + 0xd4], edi
        mov     dword ptr [esi + 0xd8], edi
        mov     dword ptr [esi + 0xdc], edi
        mov     dword ptr [esi + 0xe0], edi
        mov     dword ptr [esi + 0xe4], edi
        mov     dword ptr [esi + 0xe8], eax
        mov     dword ptr [esi + 0x16c], edi
        mov     dword ptr [esi + 0x170], edi
        mov     dword ptr [esi + 0x174], edi
        mov     dword ptr [esi + 0x178], edi
        mov     dword ptr [esi + 0x17c], edi
        mov     dword ptr [esi + 0x180], eax
        mov     dword ptr [esi + 0x4], edi
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi + 0x18], edi
        mov     dword ptr [esi + 0x34], edi
        mov     dword ptr [esi + 0x38], edi
        mov     dword ptr [esi + 0x8], edi
        mov     dword ptr [esi], 0x10021794
        mov     dword ptr [esi + 0x1c], 0x10021774
        mov     dword ptr [esi + 0x28], 0x6
        mov     dword ptr [esi + 0x2c], 0x100267c8
        mov     dword ptr [esi + 0x30], 0x100267bc
        mov     eax, esi
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
