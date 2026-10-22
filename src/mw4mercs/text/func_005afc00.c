/*
 * FUN_005afc00 (119 B) — Allocates a 0xA8-byte object, initializes it via
 * FUN_00501a20 (thiscall) with a large argument list, sets its vtable
 * pointer at +0xA4, and stores it in the global 0x007f20ec.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(int size);
extern void FUN_00501a20(void *this, int a, int b, int c, int d, int e,
                         int f, int g, int h, int i, int j, int k, int l);

__declspec(naked) void __cdecl FUN_005afc00(void)
{
    

extern int DAT_007f20e8;
extern int DAT_007f20f0;
extern int DAT_007f20ec;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      fail
        mov eax, dword ptr [DAT_007f20e8]
        mov ecx, dword ptr [DAT_007f20f0]
        push    0x502c60
        push    0x5028b0
        push    0x678670
        push    0x62ec80
        push    0x678650
        push    eax
        push    0x678600
        push    0x5afcb0
        push    0
        push    0
        push    ecx
        push    0x785d9c
        push    0x42b
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x6039e0
        mov dword ptr [DAT_007f20ec], esi
        pop     esi
        ret
fail:
        mov dword ptr [DAT_007f20ec], 0x0
        pop     esi
        ret
    }


}
