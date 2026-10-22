/*
 * FUN_00701740 (68 B) — gosScript object constructor/initializer
 * (__thiscall, 1 stack arg). Zeroes the object fields, sets +0x14 to -2,
 * then registers the object via FUN_007018c0 / FUN_007019a0 and stores the
 * arg into +0x14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007018c0(void);
extern void __cdecl FUN_007019a0(void);

__declspec(naked) void FUN_00701740(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, ecx
        push    edi
        xor     edi, edi
        mov     dword ptr [esi], edi
        push    ebx
        mov     dword ptr [esi + 0x4], edi
        mov     word ptr [esi + 0x8], di
        mov     word ptr [esi + 0xa], di
        mov     word ptr [esi + 0xc], di
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0x14], 0xfffffffe
        mov     dword ptr [esi + 0x18], edi
        call    FUN_007018c0
        cmp     eax, edi
        jz      L_done
        push    eax
        call    FUN_007019a0
L_done:
        pop     edi
        mov     dword ptr [esi + 0x14], ebx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
