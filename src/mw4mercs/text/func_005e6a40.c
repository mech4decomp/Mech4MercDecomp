/*
 * FUN_005e6a40 (555 B) — "MechWarrior4::ProjectileWeapon" subsystem
 * constructor. Allocates a 0xA8-byte object and initializes it via
 * FUN_00501a20, then allocates/registers a series of 0x20-byte
 * sub-objects (ExecutionState, ProjectileStartSFX, FireRate,
 * InitialLinearVelocity, InitialLinearAcceleration, ProjectileModelResource,
 * TargetLockTime) into the parent object at +0x44/+0x74.
 *
 * __cdecl, no params, RET (plain).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void FUN_00501a20(void);
extern void FUN_00501500(void);
extern void FUN_005016b0(void);
extern void FUN_005013f0(void);
extern void FUN_005008e0(void);
extern void FUN_00500ec0(void);

__declspec(naked) void __cdecl FUN_005e6a40(void)
{
    

extern int DAT_007f255c;
extern int DAT_007f25a8;
extern int DAT_007f2560;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L1
        mov eax, dword ptr [DAT_007f255c]
        mov ecx, dword ptr [DAT_007f25a8]
        push    0x502c60
        push    0x5028b0
        push    0x6775b0
        push    0x0
        push    0x677590
        push    eax
        push    0x674b00
        push    0x5e6ca0
        push    0x0
        push    0x0
        push    ecx
        push    0x78927c
        push    0x46e
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x5ef970
        mov dword ptr [DAT_007f2560], esi
        jmp     L2
L1:
        mov dword ptr [DAT_007f2560], 0x0
L2:
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L3
        push    0xe0
        push    0x46f
        push    0x773250
        push    0x1
        mov     ecx, eax
        call    FUN_00501500
        jmp     L4
L3:
        xor     eax, eax
L4:
        mov edx, dword ptr [DAT_007f2560]
        push    eax
        lea     ecx, [edx + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5
        push    0x1c8
        push    0x1
        push    0x789268
        push    0x6
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x773234
        jmp     L6
L5:
        xor     esi, esi
L6:
        mov eax, dword ptr [DAT_007f2560]
        push    esi
        lea     ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L7
        push    0x74
        push    0x2
        push    0x78925c
        push    0x1b
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L8
L7:
        xor     esi, esi
L8:
        mov ecx, dword ptr [DAT_007f2560]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L9
        push    0x78
        push    0x4
        push    0x7852f4
        push    0x1c
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775cfc
        jmp     L10
L9:
        xor     esi, esi
L10:
        mov edx, dword ptr [DAT_007f2560]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L11
        push    0x84
        push    0x4
        push    0x7852d8
        push    0x1d
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775cfc
        jmp     L12
L11:
        xor     esi, esi
L12:
        mov eax, dword ptr [DAT_007f2560]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L13
        push    0x90
        push    0x231
        push    0x789244
        push    0x1e
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773cd0
        jmp     L14
L13:
        xor     esi, esi
L14:
        mov ecx, dword ptr [DAT_007f2560]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L15
        push    0x94
        push    0x2
        push    0x789234
        push    0x1f
        mov     ecx, esi
        call    FUN_005008e0
        mov edx, dword ptr [DAT_007f2560]
        push    esi
        lea     ecx, [edx + 0x74]
        mov     dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop     esi
        ret
L15:
        mov edx, dword ptr [DAT_007f2560]
        xor     esi, esi
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
