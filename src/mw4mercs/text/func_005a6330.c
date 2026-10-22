/*
 * FUN_005a6330 (366 B) — Initialization function for JumpJet system.
 *
 * Allocates multiple objects and initializes them.
 *
 * __stdcall, no params, no return.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __stdcall FUN_004084d0(int size);
extern int __stdcall FUN_00501a20(void *this, int id, const char *name, void *p1, int p2, int p3,
                                   void *fn1, void *fn2, void *fn3, int p4, void *fn4,
                                   void *fn5, void *fn6);
extern int __stdcall FUN_005008e0(void *this, int id, const char *name, int p1, int p2);
extern void __stdcall FUN_00500ec0(void *this, void *p);

__declspec(naked) void __stdcall FUN_005a6330(void)
{
    

extern int DAT_007f2068;
extern int DAT_007f25b4;
extern int DAT_007f206c;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      store_null_206c
        mov eax, dword ptr [DAT_007f2068]
        mov ecx, dword ptr [DAT_007f25b4]
        push    0x502c60
        push    0x5028b0
        push    0x677380
        push    0x00
        push    0x677360
        push    eax
        push    0x6746e0
        push    0x5a66a0
        push    0x00
        push    0x00
        push    ecx
        push    0x784a04
        push    0x44c
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x5f0a60
        mov dword ptr [DAT_007f206c], esi
        jmp     alloc_20_1
store_null_206c:
        mov dword ptr [DAT_007f206c], 0x0
alloc_20_1:
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      xor_esi_1
        push    0x34
        push    0x02
        push    0x7849f4
        push    0x0b
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     after_alloc_1
xor_esi_1:
        xor     esi, esi
after_alloc_1:
        mov edx, dword ptr [DAT_007f206c]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      xor_esi_2
        push    0x38
        push    0x02
        push    0x7849e8
        push    0x0c
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     after_alloc_2
xor_esi_2:
        xor     esi, esi
after_alloc_2:
        mov eax, dword ptr [DAT_007f206c]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      xor_esi_3
        push    0x3c
        push    0x02
        push    0x7849dc
        push    0x0d
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     after_alloc_3
xor_esi_3:
        xor     esi, esi
after_alloc_3:
        mov ecx, dword ptr [DAT_007f206c]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      alloc_4_fail
        push    0x40
        push    0x02
        push    0x7849cc
        push    0x0e
        mov     ecx, esi
        call    FUN_005008e0
        mov edx, dword ptr [DAT_007f206c]
        push    esi
        lea     ecx, [edx + 0x74]
        mov     dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop     esi
        ret
alloc_4_fail:
        mov edx, dword ptr [DAT_007f206c]
        xor     esi, esi
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
