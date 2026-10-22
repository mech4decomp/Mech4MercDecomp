/*
 * FUN_00609da0 (60 B) — __thiscall destructor.
 *
 * Sets vtable 0x78bf78, calls FUN_00609fb0(), destroys sub-objects at
 * [this+0x30] and [this+0x18], then decrements a refcount at [this+8]-1
 * and frees it via FUN_004084e0() when it reaches zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00609fb0(void);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00609da0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x78bf78
        call    FUN_00609fb0
        lea     ecx, [esi + 0x30]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x18]
        call    FUN_004169c0
        mov     esi, dword ptr [esi + 0x8]
        test    esi, esi
        jz      L_done
        mov     cl, byte ptr [esi + -0x1]
        lea     eax, [esi + -0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_done
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_done:
        pop     esi
        ret
    }
}
