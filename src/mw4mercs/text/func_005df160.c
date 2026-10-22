/*
 * FUN_005df160 (119 B) — allocates 0xA8 bytes via FUN_004084d0, and if
 * non-null, constructs an object at ESI by calling FUN_00501a20 with a
 * large set of vtable/string arguments, sets [ESI+0xA4] = 0x6039e0, and
 * stores ESI into global 0x007f2524. On alloc failure, stores 0 into
 * global 0x007f2524.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(unsigned int size);
extern void __stdcall FUN_00501a20(void *this);

__declspec(naked) void FUN_005df160(void)
{
    

extern int DAT_007f26a0;
extern int DAT_007f2528;
extern int DAT_007f2524;
__asm {
push    esi
        push    0xA8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_cb
        mov eax, dword ptr [DAT_007f26a0]
        mov ecx, dword ptr [DAT_007f2528]
        push    0x502c60
        push    0x5028b0
        push    0x62efa0
        push    0x62ec80
        push    0x62e8e0
        push    eax
        push    0x62df30
        push    0x5df210
        push    0x0
        push    0x0
        push    ecx
        push    0x788770
        push    0x4be
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xA4], 0x6039e0
        mov dword ptr [DAT_007f2524], esi
        pop     esi
        ret
    L_cb:
        mov dword ptr [DAT_007f2524], 0x0
        pop     esi
        ret
    }


}
