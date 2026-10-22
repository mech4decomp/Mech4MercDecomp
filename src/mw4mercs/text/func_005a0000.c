/*
 * FUN_005a0000 (77 B) — Allocate and initialize ExecutionStateEngine singleton.
 *
 * Allocates 0x24 bytes, calls FUN_004dd270 to initialize as
 * "FieldBase::ExecutionStateEngine", stores result in DAT_007f2020.
 *
 * __cdecl (no params, no return).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __stdcall FUN_004dd270(int msgId, const char *name, void *param3, int param4,
                                   void *param5, void *param6, void *ctor);
extern void *DAT_007f2020;  /* 0x007f2020 */
extern void *DAT_007f2028;  /* 0x007f2028 */

__declspec(naked) void FUN_005a0000(void)
{
    __asm {
        push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      alloc_failed
        mov     eax, dword ptr [DAT_007f2028]
        push    0x5052a0
        push    0x5a0080
        push    0x783a70
        push    0x2
        push    eax
        push    0x783aa0
        push    0x4c6
        mov     ecx, esi
        call    FUN_004dd270
        mov     dword ptr [DAT_007f2020], esi
        pop     esi
        ret
alloc_failed:
        mov     dword ptr [DAT_007f2020], 0x0
        pop     esi
        ret
    }
}
