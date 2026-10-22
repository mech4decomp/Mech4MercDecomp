/*
 * FUN_004d2630 (67 B) — MLR network subsystem: check renderer version
 * validity. __thiscall (this=ECX), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416f60(void);

extern unsigned int g_007db0b8;

__declspec(naked) void FUN_004d2630(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        xor     eax, eax
        mov     ax, word ptr [esi + 0x40]
        lea     ecx, [esp + 0x4]
        push    ecx
        mov     dword ptr [esp + 0x8], eax
        mov     eax, dword ptr [g_007db0b8]
        lea     ecx, [eax + 0x14]
        call    FUN_00416f60
        mov     edx, eax
        xor     eax, eax
        mov     ax, word ptr [edx + 0x18]
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0x24]
        pop     esi
        cmp     ecx, eax
        ja      L_4d266f
        cmp     eax, -0x1
        jz      L_4d266f
        mov     eax, 0x1
        pop     ecx
        ret
L_4d266f:
        xor     eax, eax
        pop     ecx
        ret
    }
}
