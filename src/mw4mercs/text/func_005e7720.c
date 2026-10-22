/*
 * FUN_005e7720 (119 B) — global Bridge object constructor.
 *
 * Allocates 0xa8 bytes via FUN_004084d0; if non-null, calls
 * FUN_00501a20 with a large argument list, sets vtable at this+0xa4,
 * and stores the object into global 0x007f2564. Otherwise zeroes it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *FUN_004084d0(int size);
extern void FUN_00501a20(void);

__declspec(naked) void FUN_005e7720(void)
{
    

extern int DAT_007f26a0;
extern int DAT_007f2568;
extern int DAT_007f2564;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_8b
        mov eax, dword ptr [DAT_007f26a0]
        mov ecx, dword ptr [DAT_007f2568]
        push    0x502c60
        push    0x5028b0
        push    0x62efa0
        push    0x62ec80
        push    0x62e8e0
        push    eax
        push    0x62df30
        push    0x5e77d0
        push    0x0
        push    0x0
        push    ecx
        push    0x789368
        push    0x4a2
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x6039e0
        mov dword ptr [DAT_007f2564], esi
        pop     esi
        ret
L_8b:
        mov dword ptr [DAT_007f2564], 0x0
        pop     esi
        ret
    }


}
