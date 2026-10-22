/*
 * FUN_00684fb0 (160 B) — HUD element teardown/update. Calls two
 * update helpers (FUN_00687ee0 / FUN_00687f20) with element fields,
 * then frees a chain of sub-objects (at +0x64, +0x38, +0x50, +0x44)
 * via FUN_004084e0, calling per-type destructors first.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00687ee0(void);
extern void __cdecl FUN_00687f20(void);
extern void __cdecl FUN_0068f370(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005d9500(void);

__declspec(naked) void FUN_00684fb0(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esi + 0x44]
        mov     eax, dword ptr [esi + 0x48]
        push    0x0
        push    ecx
        push    edx
        push    eax
        push    eax
        call    FUN_00687ee0
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esi + 0x50]
        push    0x0
        push    ecx
        mov     dword ptr [esi + 0x48], eax
        mov     eax, dword ptr [esi + 0x54]
        push    edx
        push    eax
        push    eax
        call    FUN_00687f20
        mov     edi, dword ptr [esi + 0x64]
        add     esp, 0x28
        test    edi, edi
        mov     dword ptr [esi + 0x54], eax
        jz      L_684fff
        mov     ecx, edi
        call    FUN_0068f370
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_684fff:
        mov     edi, dword ptr [esi + 0x38]
        test    edi, edi
        mov     dword ptr [esi + 0x64], 0x0
        jz      L_68501d
        mov     ecx, edi
        call    FUN_005d9500
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_68501d:
        mov     eax, dword ptr [esi + 0x50]
        test    eax, eax
        mov     dword ptr [esi + 0x38], 0x0
        mov     dword ptr [esp + 0x8], eax
        jz      L_685038
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_685038:
        mov     esi, dword ptr [esi + 0x44]
        test    esi, esi
        mov     dword ptr [esp + 0x8], esi
        jz      L_68504c
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_68504c:
        pop     edi
        pop     esi
        pop     ecx
        ret
    }
}
