/*
 * FUN_005a60e0 (77 B) — Allocates and initializes an execution state engine.
 *
 * Allocates 0x24 bytes, if successful calls FUN_004dd270 to initialize,
 * stores result in DAT_007f2068. Otherwise stores NULL.
 *
 * __stdcall, no params, no return.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __stdcall FUN_004084d0(int size);
extern int __stdcall FUN_004dd270(void *this, int id, const char *name, void *unk1, int unk2,
                                   void *fn1, void *fn2);

__declspec(naked) void __stdcall FUN_005a60e0(void)
{
    

extern int DAT_007f25b0;
extern int DAT_007f2068;
__asm {
push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      null_store
        mov eax, dword ptr [DAT_007f25b0]
        push    0x5052a0
        push    0x5a6160
        push    0x784970
        push    0x02
        push    eax
        push    0x784990
        push    0x451
        mov     ecx, esi
        call    FUN_004dd270
        mov dword ptr [DAT_007f2068], esi
        pop     esi
        ret
null_store:
        mov dword ptr [DAT_007f2068], 0x0
        pop     esi
        ret
    }


}
