/*
 * FUN_004efdf0 (77 B) — Adept::LightComponent teardown/update helper
 * (__stdcall, RET 0x4, 1 param). Calls FUN_004f0e50, then a helper chain
 * and virtual dispatch on the component.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f0e50(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00421e60(void);
extern void __cdecl FUN_0048ff20(void);
extern void __cdecl FUN_006f49a0(void);

extern int g_007b9584;   /* DAT_007b9584 */

__declspec(naked) void FUN_004efdf0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        push    esi
        call    FUN_004f0e50
        mov     eax, dword ptr [g_007b9584]
        push    eax
        call    FUN_006f4950
        push    esi
        call    FUN_00421e60
        push    eax
        push    esi
        call    FUN_0048ff20
        add     esp, 0xc
        mov     edi, eax
        call    FUN_006f49a0
        test    edi, edi
        jz      Le2a
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx]
Le2a:
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        pop     edi
        pop     esi
        ret     0x4
    }
}
