/*
 * FUN_005ecbd0 (598 B) — static initializer for the WeaponMover subsystem.
 *
 * Allocates a WeaponMover object (FUN_00501a20) and stores it in global
 * 0x007f25a0, then registers a series of property objects (FUN_005008e0)
 * into a list at [0x007f25a0]+0x74 via FUN_00500ec0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void *__cdecl FUN_00501a20(void);
extern void *__cdecl FUN_00501500(void);
extern void __fastcall FUN_005016b0(void);
extern void __fastcall FUN_005008e0(void);
extern void __fastcall FUN_00500ec0(void);

__declspec(naked) void __cdecl FUN_005ecbd0(void)
{
    

extern int DAT_007dc8c4;
extern int DAT_007dc8c8;
extern int DAT_007f25a0;
__asm {
push    0xA4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_5ecc2b
        mov ecx, dword ptr [DAT_007dc8c4]
        mov edx, dword ptr [DAT_007dc8c8]
        push    0x502C60
        push    0x5028B0
        push    0x675850
        push    0
        push    0x675620
        push    ecx
        push    0x507AA0
        push    0x5ECE60
        push    0
        push    0
        push    edx
        push    0x789CF0
        push    0x439
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f25a0], eax
        jmp     L_5ecc35
L_5ecc2b:
        mov dword ptr [DAT_007f25a0], 0x0
L_5ecc35:
        push    0x20
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_5ecc5d
        push    0xE0
        push    0x43A
        push    0x773250
        push    1
        mov     ecx, eax
        call    FUN_00501500
        jmp     L_5ecc5f
L_5ecc5d:
        xor     eax, eax
L_5ecc5f:
        push    esi
        push    eax
        mov eax, dword ptr [DAT_007f25a0]
        lea     ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_5ecc98
        push    0x64
        push    2
        push    0x789CE4
        push    0xD
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L_5ecc9a
L_5ecc98:
        xor     esi, esi
L_5ecc9a:
        mov ecx, dword ptr [DAT_007f25a0]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_5eccd6
        push    0x68
        push    0x231
        push    0x789CD4
        push    0xE
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773CD0
        jmp     L_5eccd8
L_5eccd6:
        xor     esi, esi
L_5eccd8:
        mov edx, dword ptr [DAT_007f25a0]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_5ecd11
        push    0x6C
        push    0xE
        push    0x789CC4
        push    0xF
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x7731E0
        jmp     L_5ecd13
L_5ecd11:
        xor     esi, esi
L_5ecd13:
        mov eax, dword ptr [DAT_007f25a0]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_5ecd4e
        push    0x5C
        push    0x231
        push    0x789734
        push    0x10
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773CD0
        jmp     L_5ecd50
L_5ecd4e:
        xor     esi, esi
L_5ecd50:
        mov ecx, dword ptr [DAT_007f25a0]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_5ecd8c
        push    0x58
        push    0x231
        push    0x789CA8
        push    0x11
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773CD0
        jmp     L_5ecd8e
L_5ecd8c:
        xor     esi, esi
L_5ecd8e:
        mov edx, dword ptr [DAT_007f25a0]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_5ecdca
        push    0x60
        push    0x231
        push    0x789720
        push    0x12
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773CD0
        jmp     L_5ecdcc
L_5ecdca:
        xor     esi, esi
L_5ecdcc:
        mov eax, dword ptr [DAT_007f25a0]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_5ece13
        push    0x74
        push    2
        push    0x789C94
        push    0x13
        mov     ecx, esi
        call    FUN_005008e0
        mov ecx, dword ptr [DAT_007f25a0]
        push    esi
        add     ecx, 0x74
        mov     dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop     esi
        ret
L_5ece13:
        mov ecx, dword ptr [DAT_007f25a0]
        xor     esi, esi
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
