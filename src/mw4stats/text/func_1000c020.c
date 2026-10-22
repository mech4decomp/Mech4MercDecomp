/*
 * FUN_1000c020 (316 B) - __fastcall. Destructor for the stats object
 * (ECX = this). Sets the vtable pointer @ 0x100214c8, then for each of the
 * 7 growable-buffer triplets (data/len/cap) frees the data buffer if
 * len!=0 && data!=0 and zeroes all three fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210ec;   /* free IAT @ 0x100210ec */
extern void *g_100214c8;   /* vtable @ 0x100214c8 */

__declspec(naked) void __cdecl FUN_1000c020(void)
{
    __asm {
        push    ebx
        push    esi
        mov     ebx, dword ptr [g_100210ec]
        mov     esi, ecx
        push    edi
        xor     edi, edi
        mov     dword ptr [esi], offset g_100214c8
        mov     eax, dword ptr [esi + 0x3e8]
        cmp     eax, edi
        jbe     L04D
        mov     eax, dword ptr [esi + 0x3dc]
        cmp     eax, edi
        jz      L04D
        push    eax
        call    ebx
        add     esp, 0x4
L04D:
        mov     dword ptr [esi + 0x3dc], edi
        mov     dword ptr [esi + 0x3ec], edi
        mov     dword ptr [esi + 0x3e8], edi
        mov     eax, dword ptr [esi + 0x350]
        cmp     eax, edi
        jbe     L079
        mov     eax, dword ptr [esi + 0x344]
        cmp     eax, edi
        jz      L079
        push    eax
        call    ebx
        add     esp, 0x4
L079:
        mov     dword ptr [esi + 0x344], edi
        mov     dword ptr [esi + 0x354], edi
        mov     dword ptr [esi + 0x350], edi
        mov     eax, dword ptr [esi + 0x2b8]
        cmp     eax, edi
        jbe     L0A5
        mov     eax, dword ptr [esi + 0x2ac]
        cmp     eax, edi
        jz      L0A5
        push    eax
        call    ebx
        add     esp, 0x4
L0A5:
        mov     dword ptr [esi + 0x2ac], edi
        mov     dword ptr [esi + 0x2bc], edi
        mov     dword ptr [esi + 0x2b8], edi
        mov     eax, dword ptr [esi + 0x220]
        cmp     eax, edi
        jbe     L0D1
        mov     eax, dword ptr [esi + 0x214]
        cmp     eax, edi
        jz      L0D1
        push    eax
        call    ebx
        add     esp, 0x4
L0D1:
        mov     dword ptr [esi + 0x214], edi
        mov     dword ptr [esi + 0x224], edi
        mov     dword ptr [esi + 0x220], edi
        mov     eax, dword ptr [esi + 0x188]
        cmp     eax, edi
        jbe     L0FD
        mov     eax, dword ptr [esi + 0x17c]
        cmp     eax, edi
        jz      L0FD
        push    eax
        call    ebx
        add     esp, 0x4
L0FD:
        mov     dword ptr [esi + 0x17c], edi
        mov     dword ptr [esi + 0x18c], edi
        mov     dword ptr [esi + 0x188], edi
        mov     eax, dword ptr [esi + 0xf0]
        cmp     eax, edi
        jbe     L129
        mov     eax, dword ptr [esi + 0xe4]
        cmp     eax, edi
        jz      L129
        push    eax
        call    ebx
        add     esp, 0x4
L129:
        mov     dword ptr [esi + 0xe4], edi
        mov     dword ptr [esi + 0xf4], edi
        mov     dword ptr [esi + 0xf0], edi
        mov     eax, dword ptr [esi + 0x58]
        cmp     eax, edi
        jbe     L14F
        mov     eax, dword ptr [esi + 0x4c]
        cmp     eax, edi
        jz      L14F
        push    eax
        call    ebx
        add     esp, 0x4
L14F:
        mov     dword ptr [esi + 0x4c], edi
        mov     dword ptr [esi + 0x5c], edi
        mov     dword ptr [esi + 0x58], edi
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
