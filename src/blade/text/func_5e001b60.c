/*
 * FUN_5e001b60 (640 B) — validates two writable buffers (via IsBadWritePtr
 * through global fn ptr at 0x5e03500c), zeroes them, then ORs a large set of
 * capability flags into param_2 (a DirectDraw-style caps struct).
 *
 * __stdcall, RET 8 (two stack params).
 *
 * Match: target 100%
 */

extern unsigned long g_5e03500c;

__declspec(naked) int __stdcall FUN_5e001b60(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        mov     edi, dword ptr [g_5e03500c]
        push    0xfc
        push    ebx
        call    edi
        test    eax, eax
        jz      L1
        pop     edi
        pop     esi
        mov     eax, 0x80070057
        pop     ebx
        ret     8
L1:
        mov     esi, dword ptr [esp + 0x14]
        push    0xfc
        push    esi
        call    edi
        test    eax, eax
        jz      L2
        pop     edi
        pop     esi
        mov     eax, 0x80070057
        pop     ebx
        ret     8
L2:
        cmp     dword ptr [ebx], 0xfc
        jnc     L3
        pop     edi
        pop     esi
        mov     eax, 0x80070057
        pop     ebx
        ret     8
L3:
        cmp     dword ptr [esi], 0xfc
        jnc     L4
        pop     edi
        pop     esi
        mov     eax, 0x80070057
        pop     ebx
        ret     8
L4:
        mov     ecx, 0x3f
        xor     eax, eax
        mov     edi, ebx
        push    ebp
        rep stosd
        mov     ecx, 0x3f
        mov     edi, esi
        rep stosd
        mov     ebp, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0x4]
        or      ebp, 0x549
        mov     edx, 0x2
        mov     dword ptr [esi + 0xc], ebp
        mov     ebp, dword ptr [esi + 0x38]
        or      ebp, 0x80
        or      ecx, 0x7ff
        mov     dword ptr [esi + 0x38], ebp
        mov     ebp, dword ptr [esi + 0x3c]
        or      ebp, edx
        mov     dword ptr [esi + 0x4], ecx
        mov     dword ptr [esi + 0x3c], ebp
        mov     ebp, dword ptr [esi + 0x40]
        mov     ecx, 0x1
        mov     edi, dword ptr [esi + 0x24]
        or      ebp, ecx
        or      edi, edx
        mov     dword ptr [esi + 0x40], ebp
        mov     ebp, dword ptr [esi + 0x48]
        or      ebp, edx
        mov     dword ptr [esi + 0x24], edi
        mov     dword ptr [esi + 0x48], ebp
        mov     ebp, dword ptr [esi + 0x4c]
        or      ebp, 0x40
        mov     edi, 0x38
        mov     dword ptr [esi + 0x4c], ebp
        mov     ebp, dword ptr [esi + 0x54]
        or      ebp, edx
        mov     edx, dword ptr [esi + 0x68]
        mov     dword ptr [esi + 0x2c], edi
        mov     dword ptr [esi + 0x64], edi
        mov     edi, dword ptr [esi + 0x6c]
        or      edx, 0x70
        or      edi, 0xe0
        mov     eax, dword ptr [esi + 0x8]
        mov     dword ptr [esi + 0x68], edx
        mov     edx, dword ptr [esi + 0x70]
        mov     dword ptr [esi + 0x6c], edi
        mov     edi, dword ptr [esi + 0x74]
        or      dl, 0x88
        or      edi, 0x12
        mov     dword ptr [esi + 0x70], edx
        mov     edx, dword ptr [esi + 0x78]
        mov     dword ptr [esi + 0x74], edi
        mov     edi, dword ptr [esi + 0x7c]
        mov     dword ptr [ebx], 0xfc
        mov     ebx, dword ptr [esi + 0x14]
        or      edx, 0x23
        or      edi, 0x20
        or      eax, ecx
        mov     dword ptr [esi + 0x78], edx
        mov     edx, dword ptr [esi + 0x80]
        or      ebx, ecx
        mov     dword ptr [esi + 0x7c], edi
        mov     edi, dword ptr [esi + 0x84]
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0x14], ebx
        xor     eax, eax
        or      edx, 0xc500f
        mov     ebx, 0x10
        or      edi, 0x67
        mov     dword ptr [esi + 0x80], edx
        mov     edx, dword ptr [esi + 0x88]
        mov     dword ptr [esi], 0xfc
        mov     dword ptr [esi + 0x10], 0x8
        mov     dword ptr [esi + 0x18], eax
        mov     dword ptr [esi + 0x1c], ebx
        mov     dword ptr [esi + 0x28], ecx
        mov     dword ptr [esi + 0x54], ebp
        mov     dword ptr [esi + 0x5c], eax
        mov     dword ptr [esi + 0x60], eax
        mov     dword ptr [esi + 0x84], edi
        mov     edi, dword ptr [esi + 0x8c]
        or      edx, 0x1000101
        mov     dword ptr [esi + 0x88], edx
        mov     edx, dword ptr [esi + 0x90]
        or      edi, 0x4b
        or      edx, 0x15
        mov     dword ptr [esi + 0x8c], edi
        mov     edi, dword ptr [esi + 0x9c]
        mov     dword ptr [esi + 0x90], edx
        mov     edx, 0x400
        or      edi, edx
        mov     dword ptr [esi + 0x94], eax
        mov     dword ptr [esi + 0x9c], edi
        mov     edi, dword ptr [esi + 0xa0]
        or      edi, edx
        mov     edx, 0x100
        mov     dword ptr [esi + 0x98], eax
        mov     dword ptr [esi + 0xa4], eax
        mov     dword ptr [esi + 0xb4], edx
        mov     dword ptr [esi + 0xb8], edx
        mov     edx, dword ptr [esi + 0xf0]
        mov     dword ptr [esi + 0xbc], eax
        mov     dword ptr [esi + 0xc0], eax
        mov     dword ptr [esi + 0xc4], eax
        mov     dword ptr [esi + 0xc8], eax
        mov     dword ptr [esi + 0xd8], eax
        mov     dword ptr [esi + 0xdc], eax
        mov     dword ptr [esi + 0xe0], eax
        mov     dword ptr [esi + 0xe4], eax
        mov     dword ptr [esi + 0xe8], eax
        mov     eax, dword ptr [esi + 0xf4]
        or      edx, ecx
        or      al, 0xf
        mov     dword ptr [esi + 0xa0], edi
        pop     ebp
        mov     dword ptr [esi + 0xa8], 0x800
        mov     dword ptr [esi + 0xac], ecx
        mov     dword ptr [esi + 0xb0], ecx
        mov     dword ptr [esi + 0xcc], 0x64
        mov     dword ptr [esi + 0xd0], ecx
        mov     dword ptr [esi + 0xd4], ebx
        mov     dword ptr [esi + 0xf0], edx
        mov     dword ptr [esi + 0xf4], eax
        mov     word ptr [esi + 0xf8], cx
        mov     word ptr [esi + 0xfa], cx
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     8
    }
}
