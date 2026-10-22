/*
 * FUN_005e65d0 (119 B) — allocates a 0xA8-byte object, initializes it via
 * FUN_00501a20 with a big argument list, stores a vtable pointer at +0xA4,
 * and caches the result in global 0x007f2558.
 *
 * __cdecl, no params, RET (plain).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void FUN_00501a20(void);

__declspec(naked) void __cdecl FUN_005e65d0(void)
{
    

extern int DAT_007f26a0;
extern int DAT_007f2568;
extern int DAT_007f2558;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L1
        mov eax, dword ptr [DAT_007f26a0]
        mov ecx, dword ptr [DAT_007f2568]
        push    0x502c60
        push    0x5028b0
        push    0x62efa0
        push    0x62ec80
        push    0x62e8e0
        push    eax
        push    0x62df30
        push    0x5e6680
        push    0x0
        push    0x0
        push    ecx
        push    0x7890b0
        push    0x471
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x6039e0
        mov dword ptr [DAT_007f2558], esi
        pop     esi
        ret
L1:
        mov dword ptr [DAT_007f2558], 0x0
        pop     esi
        ret
    }


}
