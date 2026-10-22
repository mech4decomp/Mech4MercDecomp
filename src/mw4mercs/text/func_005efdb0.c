/*
 * FUN_005efdb0 (366 B) - Engine/upgrade-table initialization.
 *
 * Allocates a 0xa8-byte engine object, initializes it via FUN_00501a20,
 * stores it in DAT_007f25ac, then registers four upgrade tables
 * (TonsPerUpgrade, MPSPerUpgrade, NumHeatSinks, HeatSinkEfficiency)
 * by allocating 0x20-byte objects, calling FUN_005008e0 (thiscall) and
 * FUN_00500ec0 (thiscall) to register them.
 *
 * CFLAGS: /O1
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);

__declspec(naked) void FUN_005efdb0(void)
{
    

extern int DAT_007f25b0;
extern int DAT_007f25b4;
extern int DAT_007f25ac;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_005efe18

        mov eax, dword ptr [DAT_007f25b0]
        mov ecx, dword ptr [DAT_007f25b4]
        push    0x502c60
        push    0x5028b0
        push    0x692dc0
        push    0x0
        push    0x692da0
        push    eax
        push    0x692d50
        push    0x5eff50
        push    0x0
        push    0x0
        push    ecx
        push    0x789fd8
        push    0x431
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x5f02f0
        mov dword ptr [DAT_007f25ac], esi
        jmp     L_005efe22

L_005efe18:
        mov dword ptr [DAT_007f25ac], 0x0

L_005efe22:
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_005efe4c

        push    0x38
        push    0x2
        push    0x789fc8
        push    0xb
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L_005efe4e

L_005efe4c:
        xor     esi, esi

L_005efe4e:
        mov edx, dword ptr [DAT_007f25ac]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_005efe87

        push    0x3c
        push    0x2
        push    0x789fb8
        push    0xc
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L_005efe89

L_005efe87:
        xor     esi, esi

L_005efe89:
        mov eax, dword ptr [DAT_007f25ac]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_005efec1

        push    0x34
        push    0x1
        push    0x789fa8
        push    0xd
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775588
        jmp     L_005efec3

L_005efec1:
        xor     esi, esi

L_005efec3:
        mov ecx, dword ptr [DAT_007f25ac]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0

        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_005eff0b

        push    0x40
        push    0x2
        push    0x7755f8
        push    0xe
        mov     ecx, esi
        call    FUN_005008e0
        mov edx, dword ptr [DAT_007f25ac]
        push    esi
        lea     ecx, [edx + 0x74]
        mov     dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop     esi
        ret

L_005eff0b:
        mov edx, dword ptr [DAT_007f25ac]
        xor     esi, esi
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
