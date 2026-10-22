/*
 * FUN_0064de40 (140 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Copy-construct/assign helper: if param != this+4, calls FUN_0064e2d0 on
 * this+4, copies *param into this+4, clears low bit of *param. Then, if
 * *(this+4) & ~3 is nonzero, builds a local range via FUN_0064dfc0 and
 * invokes a virtual method (vtable+0xC) on each element, then frees the
 * range with FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0064e2d0(void);          /* __thiscall: ECX=this+4 */
extern void __stdcall FUN_0064dfc0(void *p);       /* __thiscall: ECX=this, __stdcall cleanup */
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_0064de40(void *param_1)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        mov     ebx, ecx
        push    edi
        lea     edi, [ebx + 0x4]
        cmp     esi, edi
        jz      L_DE63
        mov     ecx, edi
        call    FUN_0064e2d0
        mov     eax, dword ptr [esi]
        mov     dword ptr [edi], eax
        and     eax, 0xfffffffe
        mov     dword ptr [esi], eax
L_DE63:
        test    dword ptr [edi], 0xfffffffc
        jz      L_DEC3
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [esp + 0x10], 0x0
        mov     dword ptr [esp + 0x14], 0x0
        mov     dword ptr [esp + 0x18], 0x0
        call    FUN_0064dfc0
        mov     esi, dword ptr [esp + 0xc]
        cmp     esi, dword ptr [esp + 0x10]
        jz      L_DEB6
L_DE99:
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [esi]
        and     ecx, 0xfffffffc
        mov     edx, dword ptr [ecx]
        push    eax
        push    ebx
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [esp + 0x10]
        add     esi, 0x4
        cmp     esi, eax
        jnz     L_DE99
        mov     esi, dword ptr [esp + 0xc]
L_DEB6:
        test    esi, esi
        jz      L_DEC3
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_DEC3:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret     4
    }
}
