/*
 * FUN_005b8f20 (77 B) — Sensor::ExecutionStateEngine singleton init.
 *
 * Allocates 0x24 bytes; if non-null, constructs an object via
 * FUN_004dd270 (thiscall) and stores it in global 0x007f213c.
 * Otherwise stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __stdcall FUN_004dd270(void *param);

__declspec(naked) void __stdcall FUN_005b8f20(void)
{
    

extern int DAT_007f25b0;
extern int DAT_007f213c;
__asm {
push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_zero
        mov eax, dword ptr [DAT_007f25b0]
        push    0x5052a0
        push    0x5b8fa0
        push    0x786c70
        push    0x3
        push    eax
        push    0x786ccc
        push    0x484
        mov     ecx, esi
        call    FUN_004dd270
        mov dword ptr [DAT_007f213c], esi
        pop     esi
        ret
L_zero:
        mov dword ptr [DAT_007f213c], 0x0
        pop     esi
        ret
    }


}
