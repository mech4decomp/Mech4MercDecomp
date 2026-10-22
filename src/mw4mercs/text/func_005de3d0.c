/*
 * FUN_005de3d0 (75 B) — __thiscall (ECX = this), plain RET. Destructor:
 * sets vtable 0x788640, calls FUN_00637b10, decrements refcounts on two
 * refcounted buffers (this+0x18, this+0x10) freeing when they hit zero,
 * then calls FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00637b10(void);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_005de3d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x788640
        call    FUN_00637b10
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        jz      L_3F8
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_3F8
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_3F8:
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      L_412
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_412
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_412:
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
