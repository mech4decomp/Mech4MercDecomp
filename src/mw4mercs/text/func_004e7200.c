/*
 * FUN_004e7200 (87 B) — MLR/Adept __thiscall destructor: installs the
 * vtable pointer (0x774200), tears down three sub-objects
 * (FUN_00416c60 x2, FUN_004169c0), frees two buffers (refcounted
 * FUN_004084e0), then calls base destructor FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004e7200(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x80]
        mov     dword ptr [esi], 0x774200
        call    FUN_00416c60
        lea     ecx, [esi + 0x6c]
        call    FUN_00416c60
        lea     ecx, [esi + 0x58]
        call    FUN_004169c0
        mov     eax, dword ptr [esi + 0x40]
        test    eax, eax
        jz      L723E
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L723E
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L723E:
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jz      L724E
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L724E:
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
