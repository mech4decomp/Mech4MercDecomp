/*
 * FUN_004d2b10 (71 B) — MLR network subsystem: object constructor.
 * __thiscall (this=ECX), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00416e20(void);

extern unsigned int g_007b8c10;

__declspec(naked) void FUN_004d2b10(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     ebx, ebx
        push    0x1
        lea     edi, [esi + 0x14]
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_00416e20
        mov     dword ptr [edi], 0x772614
        mov     dword ptr [esi + 0x2c], ebx
        pop     edi
        mov     dword ptr [esi + 0x30], ebx
        mov     word ptr [esi + 0x10], bx
        mov     dword ptr [esi], 0x772610
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
    }
}
