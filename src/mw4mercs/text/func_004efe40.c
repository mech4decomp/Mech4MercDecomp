/*
 * FUN_004efe40 (81 B) — Adept::LightComponent create/acquire (__cdecl,
 * 2 params). Looks up an existing component via FUN_004f2250; if found
 * tears it down via FUN_004efdf0 and returns it. Otherwise allocates a
 * new one (0x30 bytes) and constructs it via FUN_004efd00.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f2250(void);
extern void __cdecl FUN_004efdf0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004efd00(void);

extern int g_007dc820;   /* DAT_007dc820 */

__declspec(naked) void FUN_004efe40(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        call    FUN_004f2250
        mov     esi, eax
        add     esp, 0x8
        test    esi, esi
        jz      Le69
        push    edi
        mov     ecx, esi
        call    FUN_004efdf0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
Le69:
        push    0x30
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      Le8b
        mov     ecx, dword ptr [g_007dc820]
        push    ebx
        push    edi
        push    ecx
        mov     ecx, eax
        call    FUN_004efd00
        pop     edi
        pop     esi
        pop     ebx
        ret
Le8b:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret
    }
}
