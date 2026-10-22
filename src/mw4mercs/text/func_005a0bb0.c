/*
 * FUN_005a0bb0 (350 B) — Initialization function that allocates and sets up
 * several global objects: a main object at 0x007f2030, three sub-objects
 * added to it, and a small struct at 0x007f202c.
 *
 * __cdecl, no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_005a0bb0(void);

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_00501a20(int a1, const char *a2, int a3, int a4, int a5,
    void *a6, void *a7, int a8, void *a9, void *a10, void *a11, void *a12);
extern void __cdecl FUN_005008e0(int a1, const char *a2, int a3, int a4);
extern void __cdecl FUN_00500ec0(void *obj);

void __declspec(naked) __cdecl FUN_005a0bb0(void)
{
    

extern int DAT_007f2028;
extern int DAT_007f25c0;
extern int DAT_007f2030;
extern int DAT_007f202c;
__asm {
push    esi

        ; Allocate 0xa8 bytes
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      alloc1_fail

        mov eax, dword ptr [DAT_007f2028]
        mov ecx, dword ptr [DAT_007f25c0]

        push    0x502c60
        push    0x5028b0
        push    0x675db0
        push    0x62ec80
        push    0x675d90
        push    eax
        push    0x62df30
        push    0x5a0d60
        push    0x0
        push    0x0
        push    ecx
        push    0x783d30
        push    0x4b6
        mov     ecx, esi
        call    FUN_00501a20

        mov     dword ptr [esi + 0xa4], 0x6039e0
        mov dword ptr [DAT_007f2030], esi
        jmp     alloc1_done

alloc1_fail:
        mov dword ptr [DAT_007f2030], 0x0

alloc1_done:
        ; Allocate 0x20 bytes for sub-object 1
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      alloc2_fail

        push    0x2f8
        push    0x231
        push    0x783d18
        push    0x33
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773cd0
        jmp     alloc2_done

alloc2_fail:
        xor     esi, esi

alloc2_done:
        mov edx, dword ptr [DAT_007f2030]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0

        ; Allocate 0x20 bytes for sub-object 2
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      alloc3_fail

        push    0x2fc
        push    0x4
        push    0x783d04
        push    0x34
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775cfc
        jmp     alloc3_done

alloc3_fail:
        xor     esi, esi

alloc3_done:
        mov eax, dword ptr [DAT_007f2030]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0

        ; Allocate 0x20 bytes for sub-object 3
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      alloc4_fail

        push    0x308
        push    0x2
        push    0x783cf4
        push    0x35
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     alloc4_done

alloc4_fail:
        xor     esi, esi

alloc4_done:
        mov ecx, dword ptr [DAT_007f2030]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0

        ; Allocate 8 bytes for the final struct
        push    0x8
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        pop     esi
        jz      alloc5_fail

        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [eax], 0x0
        mov dword ptr [DAT_007f202c], eax
        ret

alloc5_fail:
        mov dword ptr [DAT_007f202c], 0x0
        ret
    }


}
