/*
 * FUN_00422660 (130 B) — MLR object dtor (__thiscall). Sets vtable
 * 0x76ddc0, calls FUN_0048fa40, releases a handle (FUN_004906f0 +
 * virtual delete), frees a buffer (FUN_004084e0), decrements a
 * refcount, and calls base dtor FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0048fa40(void);
extern void FUN_004906f0(void);
extern void FUN_004084e0(void *p);
extern void FUN_00415380(void);

__declspec(naked) void FUN_00422660(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x30]
        push    edi
        push    esi
        mov     dword ptr [esi], 0x76ddc0
        call    FUN_0048fa40
        mov     edi, dword ptr [esi + 0x2c]
        test    edi, edi
        jz      LA3
        mov     eax, dword ptr [edi + 0x10]
        push    eax
        mov     eax, dword ptr [esi + 0x30]
        mov     ecx, dword ptr [eax + 0x10034]
        call    FUN_004906f0
        test    eax, eax
        jnz     LA3
        test    edi, edi
        jz      L9C
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx]
L9C:
        mov     dword ptr [esi + 0x2c], 0x0
LA3:
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        jz      LBE
        push    eax
        mov     byte ptr [esi + 0x24], 0x1
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x28], 0x0
LBE:
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      LD8
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     LD8
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
LD8:
        mov     ecx, esi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
