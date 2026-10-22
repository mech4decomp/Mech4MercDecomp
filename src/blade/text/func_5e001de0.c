/*
 * FUN_5e001de0 (450 B) — validates a writable buffer (IsBadWritePtr via global
 * fn ptr 0x5e03500c), zeroes it, then ORs a large set of capability flags into
 * the caps struct and fills a GUID-like sub-struct at +0xc4 from four globals.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * Match: target 100%
 */

extern unsigned long g_5e03500c;
extern unsigned long g_5e035730;
extern unsigned long g_5e035734;
extern unsigned long g_5e035738;
extern unsigned long g_5e03573c;

__declspec(naked) int __stdcall FUN_5e001de0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    0xec
        push    esi
        call    dword ptr [g_5e03500c]
        test    eax, eax
        jz      L1
        mov     eax, 0x80070057
        pop     esi
        ret     4
L1:
        push    ebx
        push    edi
        mov     ecx, 0x3b
        xor     eax, eax
        mov     edi, esi
        rep stosd
        mov     ebx, dword ptr [esi + 0x24]
        mov     edi, dword ptr [esi]
        mov     edx, dword ptr [esi + 0xc]
        or      ebx, 0x60
        mov     dword ptr [esi + 0x24], ebx
        mov     ebx, dword ptr [esi + 0x40]
        or      edi, 0x20dc1
        or      ebx, 0x70
        mov     dword ptr [esi], edi
        mov     dword ptr [esi + 0x40], ebx
        mov     ebx, dword ptr [esi + 0x44]
        mov     edi, 0xe0
        or      edx, edi
        or      ebx, edi
        mov     edi, dword ptr [esi + 0x48]
        mov     ecx, dword ptr [esi + 0x14]
        or      edi, 0x89
        mov     eax, dword ptr [esi + 0x18]
        mov     dword ptr [esi + 0x48], edi
        mov     edi, dword ptr [esi + 0x4c]
        or      edi, 0x12
        mov     dword ptr [esi + 0xc], edx
        mov     dword ptr [esi + 0x4c], edi
        mov     edi, dword ptr [esi + 0x50]
        or      edi, 0x23
        mov     edx, 0x2
        mov     dword ptr [esi + 0x50], edi
        mov     edi, dword ptr [esi + 0x54]
        or      edi, 0x20
        or      ecx, edx
        mov     dword ptr [esi + 0x54], edi
        mov     edi, dword ptr [esi + 0x58]
        or      edi, 0xc500f
        mov     dword ptr [esi + 0x14], ecx
        mov     dword ptr [esi + 0x58], edi
        mov     edi, dword ptr [esi + 0x5c]
        mov     ecx, 0x1
        or      edi, 0x67
        or      eax, ecx
        mov     dword ptr [esi + 0x5c], edi
        mov     edi, dword ptr [esi + 0x60]
        mov     dword ptr [esi + 0x18], eax
        mov     eax, dword ptr [esi + 0x64]
        or      edi, 0x10001
        or      al, 0x4b
        mov     dword ptr [esi + 0x60], edi
        mov     edi, dword ptr [esi + 0x68]
        mov     dword ptr [esi + 0x64], eax
        xor     eax, eax
        or      edi, 0x15
        mov     dword ptr [esi + 0x68], edi
        mov     edi, 0x400
        mov     dword ptr [esi + 0x74], edi
        mov     dword ptr [esi + 0x78], edi
        mov     edi, 0x100
        mov     dword ptr [esi + 0x4], 0x38
        mov     dword ptr [esi + 0x84], edi
        mov     dword ptr [esi + 0x88], edi
        mov     edi, dword ptr [esi + 0xb4]
        mov     dword ptr [esi + 0x34], eax
        mov     dword ptr [esi + 0x38], eax
        mov     dword ptr [esi + 0x3c], 0x38
        mov     dword ptr [esi + 0x44], ebx
        mov     dword ptr [esi + 0x6c], eax
        mov     dword ptr [esi + 0x70], eax
        mov     dword ptr [esi + 0x7c], ecx
        mov     dword ptr [esi + 0x80], ecx
        mov     dword ptr [esi + 0x8c], 0x64
        mov     dword ptr [esi + 0x90], ecx
        mov     dword ptr [esi + 0x94], eax
        mov     dword ptr [esi + 0x98], eax
        mov     dword ptr [esi + 0x9c], eax
        mov     dword ptr [esi + 0xa0], eax
        mov     dword ptr [esi + 0xa4], eax
        mov     dword ptr [esi + 0xa8], eax
        or      edi, 0xf
        mov     word ptr [esi + 0xb8], cx
        mov     word ptr [esi + 0xba], cx
        mov     dword ptr [esi + 0xb4], edi
        mov     edi, dword ptr [g_5e035730]
        lea     ecx, [esi + 0xc4]
        mov     dword ptr [esi + 0xbc], edx
        mov     dword ptr [esi + 0xc0], eax
        mov     dword ptr [ecx], edi
        mov     edi, dword ptr [g_5e035734]
        mov     word ptr [esi + 0xd4], ax
        mov     word ptr [esi + 0xd6], dx
        mov     dword ptr [ecx + 0x4], edi
        mov     edi, dword ptr [g_5e035738]
        mov     dword ptr [esi + 0xdc], eax
        mov     dword ptr [esi + 0xe0], eax
        mov     dword ptr [ecx + 0x8], edi
        mov     edi, dword ptr [g_5e03573c]
        mov     dword ptr [esi + 0xe4], eax
        mov     dword ptr [esi + 0xe8], eax
        mov     dword ptr [ecx + 0xc], edi
        pop     edi
        pop     ebx
        pop     esi
        ret     4
    }
}
