/*
 * FUN_005a5a20 (256 B) — Initialization function that allocates and sets up
 * multiple objects.
 *
 * __cdecl (no params, no return).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_00501a20(int msgId, const char *name, int param3, int param4,
                                 int param5, void *param6, void *param7, int param8,
                                 void *param9, void *param10, void *param11,
                                 void *param12, void *param13);
extern void __cdecl FUN_005008e0(int a, const char *b, int c, int d);
extern void __cdecl FUN_00500ec0(void *obj);

extern int DAT_007f25bc;   /* 0x007f25bc */
extern int DAT_007f25c0;   /* 0x007f25c0 */
extern void *DAT_007f2060; /* 0x007f2060 */

__declspec(naked) void FUN_005a5a20(void)
{
    __asm {
        push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      alloc1_failed
        mov     eax, dword ptr [DAT_007f25bc]
        mov     ecx, dword ptr [DAT_007f25c0]
        push    0x502c60
        push    0x5028b0
        push    0x677260
        push    0x62ec80
        push    0x677240
        push    eax
        push    0x62df30
        push    0x5a5b50
        push    0x0
        push    0x0
        push    ecx
        push    0x7847e4
        push    0x42c
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x6039e0
        mov     dword ptr [DAT_007f2060], esi
        jmp     alloc2
alloc1_failed:
        mov     dword ptr [DAT_007f2060], 0x0
alloc2:
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      alloc2_failed
        push    0x2f8
        push    0x2
        push    0x7847d0
        push    0x33
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     setup1
alloc2_failed:
        xor     esi, esi
setup1:
        mov     edx, dword ptr [DAT_007f2060]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      alloc3_failed
        push    0x2fc
        push    0x2
        push    0x7847b8
        push    0x34
        mov     ecx, esi
        call    FUN_005008e0
        mov     eax, dword ptr [DAT_007f2060]
        push    esi
        lea     ecx, [eax + 0x74]
        mov     dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop     esi
        ret
alloc3_failed:
        mov     eax, dword ptr [DAT_007f2060]
        xor     esi, esi
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }
}
