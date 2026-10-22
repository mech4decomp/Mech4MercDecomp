/*
 * FUN_004652e0 (92 B) — MLR PMesh-family constructor (__thiscall, RET 4).
 * Calls sub-constructors FUN_0047ac10 / FUN_00491340, then issues four
 * virtual calls (vtable+0x24) to fill member buffers at +0x90/+0x94/+0x98/+0x9c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0047ac10(void);
extern void __cdecl FUN_00491340(void);

__declspec(naked) void FUN_004652e0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_0047ac10
        push    edi
        lea     ecx, [esi + 0x74]
        call    FUN_00491340
        mov     eax, dword ptr [edi]
        push    0x4
        lea     ecx, [esi + 0x90]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi + 0x94]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi + 0x98]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        add     esi, 0x9c
        push    esi
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        ret     0x4
    }
}
