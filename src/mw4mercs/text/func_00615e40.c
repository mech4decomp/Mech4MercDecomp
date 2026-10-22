/*
 * FUN_00615e40 (90 B) — __thiscall (ECX = this), RET 0x4 (1 stack param).
 * Destructor: installs vtable 0x78c4fc, decrements refcounts at this+0x14
 * and this+0x10 (freeing when they hit zero), calls FUN_00415380, and frees
 * this if (param & 1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *param);
extern void __stdcall FUN_00415380(void);

__declspec(naked) void __stdcall FUN_00615e40(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x78c4fc
        mov     eax, dword ptr [esi + 0x14]
        test    eax, eax
        jz      L2
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L2:
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      L3
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L3:
        mov     ecx, esi
        call    FUN_00415380
        test    byte ptr [esp + 0x8], 0x1
        jz      L_ret
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_ret:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
