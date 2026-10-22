/*
 * FUN_0055fc30 (200 B) — Particle/sprite init with texture (__thiscall).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern float DAT_0076d064;
extern void __cdecl FUN_00717a60(void);

__declspec(naked) void FUN_0055fc30(void)
{
    __asm {
        mov     al, byte ptr [esp + 0x20]
        push    ebx
        push    esi
        xor     ebx, ebx
        cmp     al, bl
        push    ebx
        push    ebx
        mov     esi, ecx
        push    ebx
        jz      l_load_tex0
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    2
        jmp     l_call_load
    l_load_tex0:
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        push    ebx
    l_call_load:
        call    FUN_00717a60
        fld     dword ptr [esp + 0x10]
        fcom    dword ptr [DAT_0076d064]
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [esi], eax
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [esi + 0x18], eax
        fnstsw  ax
        mov     dword ptr [esi + 0x14], edx
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
        mov     dword ptr [esi + 0x20], eax
        fxch    st(1)
        mov     dword ptr [esi + 0x34], eax
        fstp    dword ptr [esi + 8]
        mov     dword ptr [esi + 0x30], eax
        mov     eax, 3
        fstp    dword ptr [esi + 0xc]
        mov     dword ptr [esi + 0x38], eax
        mov     dword ptr [esi + 0x3c], eax
        mov     dword ptr [esi + 0x1c], ebx
        fstp    dword ptr [esi + 0x10]
        mov     dword ptr [esi + 0x24], ebx
        mov     dword ptr [esi + 0x2c], ebx
        mov     dword ptr [esi + 0x28], ebx
        mov     byte ptr [esi + 0x40], bl
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x20
    }
}
