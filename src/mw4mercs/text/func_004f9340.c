/*
 * FUN_004f9340 (64 B) — MLR/Adept: destructor. Sets vtable 0x775a70,
 * decrements refcount on this+0x1c, calls FUN_00415380, optionally
 * frees this. __thiscall (ECX = this), RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00775a70;

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004f9340(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], offset g_00775a70
        mov     eax, dword ptr [esi+0x1c]
        test    eax, eax
        jz      L9363
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L9363
        push    eax
        call    FUN_004084e0
        add     esp, 4
L9363:
        mov     ecx, esi
        call    FUN_00415380
        test    byte ptr [esp+0x8], 0x1
        jz      L937a
        push    esi
        call    FUN_004084e0
        add     esp, 4
L937a:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
