/*
 * FUN_10015760 (192 B) - __fastcall destructor with SEH frame.
 * Frees three buffers (at +0x16c, +0xd4, +0x3c) guarded by their
 * count fields, then calls sub-destructor FUN_100067d0 on this+0x20
 * and sets vtable 0x10021688.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100067d0(void);
extern void *g_100210ec;   /* IAT: free */

__declspec(naked) void __cdecl FUN_10015760(void)
{
    __asm {
        push    -1
        push    0x1001fef8
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
        mov     eax, dword ptr [esi + 0x178]
        mov     dword ptr [esp + 0xc], esi
        cmp     eax, edi
        jbe     skip1
        mov     eax, dword ptr [esi + 0x16c]
        cmp     eax, edi
        jz      skip1
        push    eax
        call    ebx
        add     esp, 4
skip1:
        mov     dword ptr [esi + 0x16c], edi
        mov     dword ptr [esi + 0x17c], edi
        mov     dword ptr [esi + 0x178], edi
        mov     eax, dword ptr [esi + 0xe0]
        cmp     eax, edi
        jbe     skip2
        mov     eax, dword ptr [esi + 0xd4]
        cmp     eax, edi
        jz      skip2
        push    eax
        call    ebx
        add     esp, 4
skip2:
        mov     dword ptr [esi + 0xd4], edi
        mov     dword ptr [esi + 0xe4], edi
        mov     dword ptr [esi + 0xe0], edi
        mov     eax, dword ptr [esi + 0x48]
        mov     dword ptr [esp + 0x18], edi
        cmp     eax, edi
        jbe     skip3
        mov     eax, dword ptr [esi + 0x3c]
        cmp     eax, edi
        jz      skip3
        push    eax
        call    ebx
        add     esp, 4
skip3:
        lea     ecx, [esi + 0x20]
        mov     dword ptr [esi + 0x3c], edi
        mov     dword ptr [esi + 0x4c], edi
        mov     dword ptr [esi + 0x48], edi
        call    FUN_100067d0
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi], 0x10021688
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
