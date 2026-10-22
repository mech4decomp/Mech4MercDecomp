/*
 * FUN_004F3CC0 (276 B) — MLR/Adept render-state setup. __thiscall (ECX = this),
 * RET 4. Virtual call [this->vtbl+0x48](1), reads globals 0x7b8cec/0x7b8ce8/
 * 0x7b8cf0, branches on this[0x180] to build a transform via FUN_00419460 /
 * FUN_0041acb0 / FUN_00428850 / FUN_00419480 / FUN_0041a070, then REP MOVSD
 * 0xc dwords to the caller's return-address buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7b8cec;
extern unsigned int g_7b8ce8;
extern unsigned int g_7b8cf0;
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0041acb0(void);
extern void __cdecl FUN_00428850(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041a070(void);

__declspec(naked) void __fastcall FUN_004f3cc0(void)
{
    __asm {
        sub     esp, 0x84
        push    esi
        push    edi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    0x1
        call    dword ptr [eax + 0x48]
        mov     ecx, dword ptr [g_7b8cec]
        mov     edx, dword ptr [g_7b8ce8]
        mov     eax, dword ptr [g_7b8cf0]
        mov     dword ptr [esp + 0x18], ecx
        push    0x7b9460
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [esp + 0x20], eax
        call    FUN_00419460
        mov     eax, dword ptr [esi + 0x180]
        test    eax, eax
        jnz     L1
        mov     esi, dword ptr [esi + 0xd8]
        add     esi, 0x80
        push    esi
        lea     ecx, [esp + 0x18]
        call    FUN_0041acb0
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0x1c]
        mov     edx, dword ptr [esi + 0x2c]
        mov     dword ptr [esp + 0xc], ecx
        mov     dword ptr [esp + 0x10], edx
        jmp     L2
L1:
        add     eax, 0x10
        push    eax
        lea     ecx, [esp + 0x60]
        call    FUN_00428850
        mov     ecx, 0xc
        lea     esi, [esp + 0x5c]
        lea     edi, [esp + 0x2c]
        lea     eax, [esp + 0x2c]
        rep movsd
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_0041acb0
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x18], ecx
        lea     ecx, [esp + 0x2c]
        push    ecx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [esp + 0x20], eax
        call    FUN_00419480
        mov     edx, dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0xc], edx
        mov     dword ptr [esp + 0x10], eax
L2:
        mov     ecx, dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x38]
        mov     edx, dword ptr [esp + 0x10]
        lea     eax, [esp + 0x14]
        mov     dword ptr [esp + 0x48], ecx
        push    eax
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x5c], edx
        call    FUN_0041a070
        mov     eax, dword ptr [esp + 0x90]
        mov     ecx, 0xc
        lea     esi, [esp + 0x2c]
        mov     edi, eax
        rep movsd
        pop     edi
        pop     esi
        add     esp, 0x84
        ret     4
    }
}
