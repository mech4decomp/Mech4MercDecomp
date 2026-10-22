/*
 * FUN_005e3da0 (39 B) — Singleton destructor.
 *
 * Loads global 0x7f254c; if non-null, calls FUN_004dd340
 * (__thiscall) then frees it via FUN_004084e0 (__cdecl).
 * Stores 0 back to 0x7f254c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004dd340(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005e3da0(void)
{
    

extern int DAT_007f254c;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f254c]
        test    esi, esi
        jz      store_zero
        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
store_zero:
        mov dword ptr [DAT_007f254c], 0x0
        pop     esi
        ret
    }


}
