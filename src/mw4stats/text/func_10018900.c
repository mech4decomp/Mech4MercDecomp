/*
 * FUN_10018900 (192 B) - __fastcall cleanup/destructor with SEH frame.
 * Frees three buffer groups (via free pointer at 0x100210ec) if their
 * size/count fields are nonzero, then calls FUN_100067d0 on this+0x20
 * and installs vtable 0x10021688.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_100210ec;
extern unsigned long g_10021688;
extern void __cdecl FUN_100067d0(void);

__declspec(naked) void __cdecl FUN_10018900(void)
{
    __asm {
        push    -1
        push    0x10020078
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebx
        mov     ebx, dword ptr [g_100210ec]
        push    esi
        mov     esi, ecx
        push    edi
        xor     edi, edi
        mov     eax, dword ptr [esi + 0x180]
        mov     dword ptr [esp + 0xc], esi
        cmp     eax, edi
        jbe     short L1
        mov     eax, dword ptr [esi + 0x174]
        cmp     eax, edi
        jz      short L1
        push    eax
        call    ebx
        add     esp, 4
L1:
        mov     dword ptr [esi + 0x174], edi
        mov     dword ptr [esi + 0x184], edi
        mov     dword ptr [esi + 0x180], edi
        mov     eax, dword ptr [esi + 0xe4]
        cmp     eax, edi
        jbe     short L2
        mov     eax, dword ptr [esi + 0xd8]
        cmp     eax, edi
        jz      short L2
        push    eax
        call    ebx
        add     esp, 4
L2:
        mov     dword ptr [esi + 0xd8], edi
        mov     dword ptr [esi + 0xe8], edi
        mov     dword ptr [esi + 0xe4], edi
        mov     eax, dword ptr [esi + 0x48]
        mov     dword ptr [esp + 0x18], edi
        cmp     eax, edi
        jbe     short L3
        mov     eax, dword ptr [esi + 0x3c]
        cmp     eax, edi
        jz      short L3
        push    eax
        call    ebx
        add     esp, 4
L3:
        lea     ecx, [esi + 0x20]
        mov     dword ptr [esi + 0x3c], edi
        mov     dword ptr [esi + 0x4c], edi
        mov     dword ptr [esi + 0x48], edi
        call    FUN_100067d0
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi], offset g_10021688
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
