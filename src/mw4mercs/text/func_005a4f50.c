/*
 * FUN_005a4f50 (119 B) — Allocates and initializes a "Tank" object.
 *
 * Similar to FUN_005a4ba0 but stores to a different global (0x007f2058)
 * and uses different init params (0x42f, "MechWarrior4::Tank", etc.).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(int size);
extern void __stdcall FUN_00501a20(int a1, char *a2, int a3, int a4, int a5, void *a6, void *a7, void *a8, void *a9, void *a10, void *a11, void *a12, void *a13);

void __declspec(naked) __stdcall FUN_005a4f50(void)
{
    

extern int DAT_007f25bc;
extern int DAT_007f25c0;
extern int DAT_007f2058;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      alloc_failed
        mov eax, dword ptr [DAT_007f25bc]
        mov ecx, dword ptr [DAT_007f25c0]
        push    0x502c60
        push    0x5028b0
        push    0x66a3c0
        push    0x62ec80
        push    0x66a150
        push    eax
        push    0x62df30
        push    0x5a5000
        push    0x0
        push    0x0
        push    ecx
        push    0x78463c
        push    0x42f
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x6039e0
        mov dword ptr [DAT_007f2058], esi
        pop     esi
        ret
alloc_failed:
        mov dword ptr [DAT_007f2058], 0x0
        pop     esi
        ret
    }


}
