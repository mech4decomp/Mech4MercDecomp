/*
 * FUN_005f2bf0 (77 B) — construct Vehicle::ExecutionStateEngine singleton.
 *
 * Allocates 0x24 bytes; if non-NULL, calls FUN_004dd270 (thiscall, ECX=ESI)
 * with a batch of args, then stores the pointer in DAT_007f25bc.
 * On alloc failure stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(int size);
extern void FUN_004dd270(void);

extern int DAT_007f26a0;
extern int DAT_007f25bc;

__declspec(naked) void FUN_005f2bf0(void)
{
    __asm {
        push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      l_alloc_fail
        mov     eax, dword ptr [DAT_007f26a0]
        push    0x005052a0
        push    0x005f2c70
        push    0x0078a328
        push    0x8
        push    eax
        push    0x0078a3e4
        push    0x424
        mov     ecx, esi
        call    FUN_004dd270
        mov     dword ptr [DAT_007f25bc], esi
        pop     esi
        ret
    l_alloc_fail:
        mov     dword ptr [DAT_007f25bc], 0x00000000
        pop     esi
        ret
    }
}
