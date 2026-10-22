/*
 * FUN_005a3140 (599 B) — Initialization function for armor/distributive system.
 *
 * Allocates a main object (0xA8 bytes), initializes it with FUN_00501a20,
 * then creates 8 sub-objects (0x20 bytes each) of various types and adds
 * them to the main object's list at offset 0x74.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_004084d0(int size);
extern void __stdcall FUN_00501a20(int a1, char *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
extern void __stdcall FUN_005008e0(int a1, char *a2, int a3, int a4);
extern void __stdcall FUN_00500ec0(void *ptr);

__declspec(naked) void FUN_005a3140(void)
{
    

extern int DAT_007f25b0;
extern int DAT_007f25b4;
extern int DAT_007f2040;
__asm {
push    esi

        ; Allocate main object (0xA8 bytes)
        push    0xA8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_main_null

        ; Initialize main object

        mov eax, dword ptr [DAT_007f25b0]

        mov ecx, dword ptr [DAT_007f25b4]
        push    0x502C60
        push    0x5028B0
        push    0x676EA0
        push    0
        push    0x676E70
        push    eax
        push    0x676B20
        push    0x5A33D0
        push    0
        push    0
        push    ecx
        push    0x78403C
        push    0x4B1
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xA4], 0x5A3CD0

        mov dword ptr [DAT_007f2040], esi
        jmp     L_main_done

L_main_null:

        mov dword ptr [DAT_007f2040], 0x0

L_main_done:
        ; === Sub-object 1: ArmDistributive ===
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_sub1_null
        push    0x34
        push    2
        push    0x78402C
        push    0xB
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L_sub1_done
L_sub1_null:
        xor     esi, esi
L_sub1_done:

        mov edx, dword ptr [DAT_007f2040]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0

        ; === Sub-object 2: LegDistributive ===
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_sub2_null
        push    0x38
        push    2
        push    0x78401C
        push    0xC
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L_sub2_done
L_sub2_null:
        xor     esi, esi
L_sub2_done:

        mov eax, dword ptr [DAT_007f2040]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0

        ; === Sub-object 3: SideFrontDistributive ===
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_sub3_null
        push    0x3C
        push    2
        push    0x784004
        push    0xD
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L_sub3_done
L_sub3_null:
        xor     esi, esi
L_sub3_done:

        mov ecx, dword ptr [DAT_007f2040]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0

        ; === Sub-object 4: CenterFrontDistributive ===
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_sub4_null
        push    0x40
        push    2
        push    0x783FEC
        push    0xE
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L_sub4_done
L_sub4_null:
        xor     esi, esi
L_sub4_done:

        mov edx, dword ptr [DAT_007f2040]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0

        ; === Sub-object 5: CenterRearDistributive ===
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_sub5_null
        push    0x48
        push    2
        push    0x783FD4
        push    0xF
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L_sub5_done
L_sub5_null:
        xor     esi, esi
L_sub5_done:

        mov eax, dword ptr [DAT_007f2040]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0

        ; === Sub-object 6: PointsPerFerroTon ===
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_sub6_null
        push    0x4C
        push    1
        push    0x783FC0
        push    0x10
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775588
        jmp     L_sub6_done
L_sub6_null:
        xor     esi, esi
L_sub6_done:

        mov ecx, dword ptr [DAT_007f2040]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0

        ; === Sub-object 7: PointsPerReflectiveTon ===
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_sub7_null
        push    0x50
        push    1
        push    0x783FA8
        push    0x11
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775588
        jmp     L_sub7_done
L_sub7_null:
        xor     esi, esi
L_sub7_done:

        mov edx, dword ptr [DAT_007f2040]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0

        ; === Sub-object 8: PointsPerReactiveTon ===
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_sub8_null
        push    0x54
        push    1
        push    0x783F90
        push    0x12
        mov     ecx, esi
        call    FUN_005008e0

        mov eax, dword ptr [DAT_007f2040]
        push    esi
        lea     ecx, [eax + 0x74]
        mov     dword ptr [esi], 0x775588
        call    FUN_00500ec0
        pop     esi
        ret

L_sub8_null:

        mov eax, dword ptr [DAT_007f2040]
        xor     esi, esi
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
