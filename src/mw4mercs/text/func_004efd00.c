/*
 * FUN_004efd00 (142 B) — Adept::LightComponent constructor (__thiscall,
 * RET 0xC, 3 params). Sets vtable 0x774ce0, calls FUN_004f0ce0, then
 * builds the component via a chain of helper calls and virtual dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004efdb0(void);
extern void __cdecl FUN_004f0ce0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00421e60(void);
extern void __cdecl FUN_0048ff20(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004b6460(void);
extern void __cdecl FUN_004da840(void);

extern int  g_007b9584;   /* DAT_007b9584 */
extern int  g_007daa08;   /* DAT_007daa08 */
extern int  g_774ce0;     /* vtable @ 0x774ce0 */

__declspec(naked) void FUN_004efd00(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_004efdb0
        mov     ebx, dword ptr [esp + 0x20]
        mov     edi, dword ptr [esp + 0x1c]
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        push    ebx
        push    edi
        push    eax
        mov     ecx, esi
        call    FUN_004f0ce0
        mov     ecx, dword ptr [g_007b9584]
        push    ecx
        mov     dword ptr [esi], offset g_774ce0
        call    FUN_006f4950
        push    edi
        call    FUN_00421e60
        push    eax
        push    edi
        call    FUN_0048ff20
        add     esp, 0xc
        mov     ebp, eax
        call    FUN_006f49a0
        mov     edx, dword ptr [g_007daa08]
        mov     ecx, dword ptr [edx]
        mov     eax, dword ptr [ecx]
        push    ebp
        call    dword ptr [eax + 0xc]
        mov     ecx, dword ptr [esi + 0x24]
        push    eax
        call    FUN_004b6460
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [ebx + 0x4c]
        push    edx
        mov     dword ptr [esi + 0x28], ecx
        call    FUN_004da840
        pop     edi
        mov     dword ptr [esi + 0x2c], eax
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
