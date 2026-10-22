/*
 * FUN_004f32f0 (80 B) — MLR/Adept component destructor (__thiscall).
 * Calls a virtual method on the sub-object at +0x2c, tears down the
 * +0x40 and +0x24 sub-objects, releases a ref-counted buffer at +0x18,
 * then calls the base destructor FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_00416320(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004f32f0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x2c]
        lea     esi, [edi + 0x2c]
        mov     ecx, esi
        call    dword ptr [eax + 0x8]
        lea     ecx, [edi + 0x40]
        call    FUN_00417980
        mov     ecx, esi
        mov     dword ptr [esi], 0x7750a4
        call    FUN_00416320
        lea     ecx, [edi + 0x24]
        call    FUN_00417980
        mov     eax, dword ptr [edi + 0x18]
        test    eax, eax
        jz      L3336
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L3336
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L3336:
        mov     ecx, edi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
