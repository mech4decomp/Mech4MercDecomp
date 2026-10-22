/*
 * FUN_100187c0 (242 B) - __fastcall constructor with SEH frame. Sets up
 * exception registration, calls sub-ctors, initializes buffer descriptors
 * (each {ptr,size} pair), and installs vtables.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_10021688;
extern unsigned long g_100219ec;
extern unsigned long g_100219cc;
extern unsigned long g_100268e8;
extern unsigned long g_100268dc;
extern void __cdecl FUN_10013050(void);
extern void __cdecl FUN_100065b0(void);

__declspec(naked) void __cdecl FUN_100187c0(void)
{
    __asm {
        push    -1
        push    0x10020058
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 8], esi
        mov     dword ptr [esi], offset g_10021688
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
        mov     dword ptr [esi + 0xd8], edi
        mov     dword ptr [esi + 0xdc], edi
        mov     dword ptr [esi + 0xe0], edi
        mov     dword ptr [esi + 0xe4], edi
        mov     dword ptr [esi + 0xe8], edi
        mov     dword ptr [esi + 0xec], eax
        mov     dword ptr [esi + 0x174], edi
        mov     dword ptr [esi + 0x178], edi
        mov     dword ptr [esi + 0x17c], edi
        mov     dword ptr [esi + 0x180], edi
        mov     dword ptr [esi + 0x184], edi
        mov     dword ptr [esi + 0x188], eax
        mov     dword ptr [esi + 0x4], edi
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi + 0x18], edi
        mov     dword ptr [esi + 0x34], edi
        mov     dword ptr [esi + 0x38], edi
        mov     dword ptr [esi + 0x8], edi
        mov     dword ptr [esi + 0x170], edi
        mov     dword ptr [esi + 0x20c], edi
        mov     dword ptr [esi + 0x210], edi
        mov     dword ptr [esi], offset g_100219ec
        mov     dword ptr [esi + 0x1c], offset g_100219cc
        mov     dword ptr [esi + 0x28], 0xa
        mov     dword ptr [esi + 0x2c], offset g_100268e8
        mov     dword ptr [esi + 0x30], offset g_100268dc
        mov     eax, esi
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
