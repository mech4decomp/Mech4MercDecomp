/*
 * FUN_005aa320 (116 B) — Allocates a 0xa8-byte object, initializes it via
 * FUN_00501a20 (thiscall), installs a vtable pointer at +0xa4, and stores
 * the result in global 0x007f20a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void *param);
extern void FUN_00501a20(void);

__declspec(naked) void FUN_005aa320(void)
{
    

extern int DAT_007f255c;
extern int DAT_007f2560;
extern int DAT_007f20a0;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L388
        mov eax, dword ptr [DAT_007f255c]
        mov ecx, dword ptr [DAT_007f2560]
        push    0x502c60
        push    0x5028b0
        push    0x6775b0
        push    0
        push    0x677590
        push    eax
        push    0x674b00
        push    0x5aa3d0
        push    0
        push    0
        push    ecx
        push    0x7853f4
        push    0x4a0
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x5ef970
        mov dword ptr [DAT_007f20a0], esi
        pop     esi
        ret
L388:
        mov dword ptr [DAT_007f20a0], 0x0
        pop     esi
        ret
    }


}
