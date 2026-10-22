/*
 * FUN_004d44f0 (85 B) — MLR network/server subsystem. __thiscall (ECX=this),
 * RET 0x4 (one stack arg). Calls a base helper, then conditionally releases
 * a shared server object (refcounted via 0x7dc11c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc120;
extern int g_007dc11c;

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004d44f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_4d453f
        mov     ecx, dword ptr [g_007dc120]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007dc11c]
        jnz     L_4d453f
        push    edi
        mov     edi, dword ptr [g_007dc120]
        test    edi, edi
        jz      L_4d452e
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_4d452e:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007dc120], 0x0
        pop     esi
        ret     0x4
L_4d453f:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
