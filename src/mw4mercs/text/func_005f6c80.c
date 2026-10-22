/*
 * FUN_005f6c80 (329 B) — Cultural resource subsystem initializer.
 *
 * Allocates a 0xA4-byte object, initializes it via FUN_00501a20 (thiscall),
 * then allocates/registers three resource objects (DeathEntityResource,
 * DestroyedEffectResource, RammingDestroyedEffectResource) and registers a
 * "Culturals" database.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void *__cdecl FUN_00501a20(void);
extern void *__cdecl FUN_005008e0(void);
extern void *__cdecl FUN_00500ec0(void);
extern void *__cdecl FUN_00733340(void);

extern int DAT_007dc8cc;
extern int DAT_007dc690;
extern int DAT_007f25c8;
extern int DAT_007f25cc;

__declspec(naked) void FUN_005f6c80(void)
{
    __asm {
        push    0xA4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L1
        mov     ecx, dword ptr [DAT_007dc8cc]
        mov     edx, dword ptr [DAT_007dc690]
        push    0x502C60
        push    0x5028B0
        push    0x675550
        push    0x502240
        push    0x6754A0
        push    ecx
        push    0x6754C0
        push    0x5F6E00
        push    0x78A7E0
        push    1
        push    edx
        push    0x78A844
        push    0x491
        mov     ecx, eax
        call    FUN_00501a20
        mov     dword ptr [DAT_007f25c8], eax
        jmp     L2
L1:
        mov     dword ptr [DAT_007f25c8], 0
L2:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L3
        push    0x1C
        push    0x231
        push    0x78A830
        push    6
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773CD0
        jmp     L4
L3:
        xor     esi, esi
L4:
        mov     eax, dword ptr [DAT_007f25c8]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L5
        push    0x20
        push    0x231
        push    0x78A818
        push    7
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773CD0
        jmp     L6
L5:
        xor     esi, esi
L6:
        mov     ecx, dword ptr [DAT_007f25c8]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L7
        push    0x24
        push    0x231
        push    0x78A7F8
        push    8
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773CD0
        jmp     L8
L7:
        xor     esi, esi
L8:
        mov     edx, dword ptr [DAT_007f25c8]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0
        push    0x7F25CC
        push    1
        push    0x78A7EC
        push    0x76D9B4
        mov     dword ptr [DAT_007f25cc], 0
        call    FUN_00733340
        pop     esi
        ret
    }
}
