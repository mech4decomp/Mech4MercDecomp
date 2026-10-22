/*
 * FUN_005a0a80 (77 B) — Allocate and initialize execution state engine.
 * Calls FUN_004084d0 (alloc) and FUN_004dd270 (init).
 *
 * __stdcall, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004dd270(int a1, int a2, int a3, int a4, int a5, int a6, int a7);

__declspec(naked) void __stdcall FUN_005a0a80(void)
{
    

extern int DAT_007f25bc;
extern int DAT_007f2028;
__asm {
push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      set_null

        mov eax, dword ptr [DAT_007f25bc]

        push    0x005052a0
        push    0x005a0b00
        push    0x783ca0
        push    2
        push    eax
        push    0x783cd0
        push    0x4b5
        mov     ecx, esi
        call    FUN_004dd270

        mov dword ptr [DAT_007f2028], esi

        pop     esi
        ret

set_null:
        mov dword ptr [DAT_007f2028], 0x0

        pop     esi
        ret
    }


}
