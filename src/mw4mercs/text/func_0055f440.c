/*
 * FUN_0055f440 (186 B) — Particle/sprite initialization (__thiscall).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007da848;
extern float DAT_0076d064;
extern void __cdecl FUN_0048f380(void);

__declspec(naked) void FUN_0055f440(void)
{
    __asm {
        mov     eax, [esp + 4]
        push    ebx
        push    esi
        xor     ebx, ebx
        push    ebx
        mov     esi, ecx
        mov     ecx, dword ptr [DAT_007da848]
        push    eax
        call    FUN_0048f380
        fld     dword ptr [esp + 0x10]
        fcom    dword ptr [DAT_0076d064]
        mov     ecx, [esp + 0x20]
        mov     edx, [esp + 0x24]
        mov     [esi], eax
        mov     [esi + 0x14], ecx
        fnstsw  ax
        mov     [esi + 0x18], edx
        test    ah, 0x41
        jnz     l_skip_div1
        fdiv    dword ptr [esp + 0x20]
    l_skip_div1:
        fld     dword ptr [esp + 0x14]
        fcom    dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_skip_div2
        fdiv    dword ptr [esp + 0x24]
    l_skip_div2:
        fld     dword ptr [esp + 0x18]
        fcom    dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_skip_div3
        fdiv    dword ptr [esp + 0x20]
    l_skip_div3:
        fld     dword ptr [esp + 0x1c]
        fcom    dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_skip_div4
        fdiv    dword ptr [esp + 0x24]
    l_skip_div4:
        fxch    st(3)
        mov     eax, 0x3f800000
        fstp    dword ptr [esi + 4]
        mov     [esi + 0x20], eax
        fxch    st(1)
        mov     [esi + 0x34], eax
        fstp    dword ptr [esi + 8]
        mov     [esi + 0x30], eax
        mov     eax, 3
        fstp    dword ptr [esi + 0xc]
        mov     [esi + 0x38], eax
        mov     [esi + 0x3c], eax
        mov     [esi + 0x1c], ebx
        fstp    dword ptr [esi + 0x10]
        mov     [esi + 0x24], ebx
        mov     [esi + 0x2c], ebx
        mov     [esi + 0x28], ebx
        mov     [esi + 0x40], bl
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x1c
    }
}
