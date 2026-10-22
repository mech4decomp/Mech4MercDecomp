/*
 * FUN_004ee460 (44 B) — __thiscall destructor. Sets vtable 0x774a50,
 * decrements a refcount at [this+0x10]-1 (freeing when it hits 0),
 * then chains to FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00774a50;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004ee460(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], offset g_00774a50
        mov     eax, dword ptr [esi+0x10]
        test    eax, eax
        jz      L_004ee483
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_004ee483
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_004ee483:
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
