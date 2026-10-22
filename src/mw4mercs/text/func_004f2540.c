/*
 * FUN_004f2540 (155 B) — MLR/Adept AudioRenderer constructor (__thiscall).
 * Sets up the AudioRenderer object: calls FUN_004f3280 (log/init),
 * FUN_004f3070, FUN_004f31a0, FUN_00416280, installs vtables 0x775020/0x775040,
 * and zero-fills a buffer region.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc864;
extern int g_00858998;

extern void __cdecl FUN_004f3280(void);
extern void __cdecl FUN_004f3070(void);
extern void __cdecl FUN_004f31a0(void);
extern void __cdecl FUN_00416280(void);

__declspec(naked) void FUN_004f2540(void)
{
    __asm {
        mov     eax, dword ptr [g_007dc864]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x7730cc
        push    0x2
        mov     esi, ecx
        push    eax
        call    FUN_004f3280
        lea     ecx, [esi + 0x48]
        xor     ebx, ebx
        push    0x5
        mov     dword ptr [ecx], ebx
        mov     dword ptr [ecx + 0x4], ebx
        call    FUN_004f3070
        mov     ecx, dword ptr [g_00858998]
        lea     edi, [esi + 0x50]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [edi], ebx
        mov     dword ptr [edi + 0x4], ebx
        call    FUN_004f31a0
        push    0x1
        push    ebx
        lea     ebp, [esi + 0x58]
        push    0x65
        mov     ecx, ebp
        call    FUN_00416280
        mov     edi, dword ptr [edi]
        mov     dword ptr [ebp], 0x775040
        mov     dword ptr [esi + 0x6c], ebx
        mov     dword ptr [esi + 0x70], ebx
        mov     dword ptr [esi + 0x78], ebx
        mov     dword ptr [esi + 0x7c], ebx
        mov     dword ptr [esi + 0x80], ebx
        mov     dword ptr [esi + 0x84], ebx
        mov     dword ptr [esi + 0x88], ebx
        mov     dword ptr [esi], 0x775020
        mov     ecx, dword ptr [esi + 0x54]
        shl     ecx, 0x2
        mov     edx, ecx
        shr     ecx, 0x2
        xor     eax, eax
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep stosb
        pop     edi
        mov     dword ptr [esi + 0x74], ebx
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
