/*
 * FUN_005490f0 (1875 B) — Camera/input settings initialization.
 *
 * Allocates a main settings object, creates many named sub-objects
 * (Axis, FloatSetting, etc.) and registers them.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void * __stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004084e0(int ptr);
extern int FUN_00501a20(void);
extern int FUN_005013f0(void);
extern int FUN_005016b0(void);
extern int FUN_005008e0(void);
extern int FUN_00500ec0(void);

__declspec(naked) void __stdcall FUN_005490f0(void)
{
    

extern int DAT_007ddd70;
extern int DAT_007dc8c0;
extern int DAT_007ddd74;
extern int DAT_007b2abc;
__asm {
push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_main_alloc_fail

        /* 0x00549101: mov ecx, dword ptr [0x007ddd70] */
        mov ecx, dword ptr [DAT_007ddd70]

        /* 0x00549107: mov edx, dword ptr [0x007dc8c0] */
        mov edx, dword ptr [DAT_007dc8c0]

        push    0x502c60
        push    0x5028b0
        push    0x630030
        push    0x0
        push    0x630010
        push    ecx
        push    0x62fde0
        push    0x549900
        push    0x77b9d8
        push    0x90
        push    edx
        push    0x77cc9c
        push    0x425
        mov     ecx, eax
        call    FUN_00501a20

        /* 0x0054914A: mov [0x007ddd74], eax */
        mov dword ptr [DAT_007ddd74], eax

        jmp     l_main_alloc_done
l_main_alloc_fail:
        /* 0x00549151: mov dword ptr [0x007ddd74], 0x0 */
        mov dword ptr [DAT_007ddd74], 0x0

l_main_alloc_done:
        push    esi

        /* === Sub-object 1: Axis 6 === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj1_fail
        push    0x38c
        push    0x2
        push    0x77cc8c
        push    0x6
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x7731fc
        jmp     l_obj1_done
l_obj1_fail:
        xor     esi, esi
l_obj1_done:
        /* 0x0054918B: mov eax, [0x007ddd74] */
        mov eax, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [eax + 0x44]
        call    FUN_005016b0

        /* === Sub-object 2: Axis 7 === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj2_fail
        push    0x390
        push    0x2
        push    0x77cc7c
        push    0x7
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x7731fc
        jmp     l_obj2_done
l_obj2_fail:
        xor     esi, esi
l_obj2_done:
        /* 0x005491C8: mov ecx, [0x007ddd74] */
        mov ecx, dword ptr [DAT_007ddd74]
        push    esi
        add     ecx, 0x44
        call    FUN_005016b0

        /* === Sub-object 3: Axis 8 === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj3_fail
        push    0x394
        push    0x2
        push    0x77cc6c
        push    0x8
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x7731fc
        jmp     l_obj3_done
l_obj3_fail:
        xor     esi, esi
l_obj3_done:
        /* 0x00549206: mov edx, [0x007ddd74] */
        mov edx, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [edx + 0x44]
        call    FUN_005016b0

        /* === Sub-object 4: Axis 9 === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj4_fail
        push    0x398
        push    0x2
        push    0x77cc58
        push    0x9
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x7731fc
        jmp     l_obj4_done
l_obj4_fail:
        xor     esi, esi
l_obj4_done:
        /* 0x00549244: mov eax, [0x007ddd74] */
        mov eax, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [eax + 0x44]
        call    FUN_005016b0

        /* === Sub-object 5: Axis 10 === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj5_fail
        push    0x39c
        push    0x2
        push    0x77cc4c
        push    0xa
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x7731fc
        jmp     l_obj5_done
l_obj5_fail:
        xor     esi, esi
l_obj5_done:
        /* 0x00549281: mov ecx, [0x007ddd74] */
        mov ecx, dword ptr [DAT_007ddd74]
        push    esi
        add     ecx, 0x44
        call    FUN_005016b0

        /* === Sub-object 6: MousePosX (type 1, offset 0x494) === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj6_fail
        push    0x494
        push    0x1
        push    0x77cc40
        push    0xb
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x773234
        jmp     l_obj6_done
l_obj6_fail:
        xor     esi, esi
l_obj6_done:
        /* 0x005492BF: mov edx, [0x007ddd74] */
        mov edx, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [edx + 0x44]
        call    FUN_005016b0

        /* === Sub-object 7: MousePosY === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj7_fail
        push    0x498
        push    0x2
        push    0x7722d0
        push    0xc
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x7731fc
        jmp     l_obj7_done
l_obj7_fail:
        xor     esi, esi
l_obj7_done:
        /* 0x005492FD: mov eax, [0x007ddd74] */
        mov eax, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [eax + 0x44]
        call    FUN_005016b0

        /* === Sub-object 8: MouseDeltaX === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj8_fail
        push    0x49c
        push    0x2
        push    0x7722c4
        push    0xd
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x7731fc
        jmp     l_obj8_done
l_obj8_fail:
        xor     esi, esi
l_obj8_done:
        /* 0x0054933A: mov ecx, [0x007ddd74] */
        mov ecx, dword ptr [DAT_007ddd74]
        push    esi
        add     ecx, 0x44
        call    FUN_005016b0

        /* === Sub-object 9: MouseDeltaY === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj9_fail
        push    0x4a0
        push    0x2
        push    0x7722b8
        push    0xe
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x7731fc
        jmp     l_obj9_done
l_obj9_fail:
        xor     esi, esi
l_obj9_done:
        /* 0x00549378: mov edx, [0x007ddd74] */
        mov edx, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [edx + 0x44]
        call    FUN_005016b0

        /* === Sub-object 10: MouseDeltaZ === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj10_fail
        push    0x4a4
        push    0x2
        push    0x7722ac
        push    0xf
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x7731fc
        jmp     l_obj10_done
l_obj10_fail:
        xor     esi, esi
l_obj10_done:
        /* 0x005493B6: mov eax, [0x007ddd74] */
        mov eax, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [eax + 0x44]
        call    FUN_005016b0

        /* === Sub-object 11: CameraStartOffset (FUN_005008e0) === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj11_fail
        push    0x24
        push    0x5
        push    0x77cc2c
        push    0x7
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x77543c
        jmp     l_obj11_done
l_obj11_fail:
        xor     esi, esi
l_obj11_done:
        /* 0x005493F0: mov ecx, [0x007ddd74] */
        mov ecx, dword ptr [DAT_007ddd74]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0

        /* === Sub-object 12: CameraStartAngle === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj12_fail
        push    0x54
        push    0x7
        push    0x77cc18
        push    0xb
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775420
        jmp     l_obj12_done
l_obj12_fail:
        xor     esi, esi
l_obj12_done:
        /* 0x0054942B: mov edx, [0x007ddd74] */
        mov edx, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0

        /* === Sub-object 13: CameraExternalTargetStartOffset1 === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj13_fail
        push    0x30
        push    0x5
        push    0x77cbf4
        push    0x8
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x77543c
        jmp     l_obj13_done
l_obj13_fail:
        xor     esi, esi
l_obj13_done:
        /* 0x00549466: mov eax, [0x007ddd74] */
        mov eax, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0

        /* === Sub-object 14: CameraExternalTargetStartOffset2 === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj14_fail
        push    0x3c
        push    0x5
        push    0x77cbd0
        push    0x9
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x77543c
        jmp     l_obj14_done
l_obj14_fail:
        xor     esi, esi
l_obj14_done:
        /* 0x005494A0: mov ecx, [0x007ddd74] */
        mov ecx, dword ptr [DAT_007ddd74]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0

        /* === Sub-object 15: CameraExternalTargetStartOffset3 === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj15_fail
        push    0x48
        push    0x5
        push    0x77cbac
        push    0xa
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x77543c
        jmp     l_obj15_done
l_obj15_fail:
        xor     esi, esi
l_obj15_done:
        /* 0x005494DB: mov edx, [0x007ddd74] */
        mov edx, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0

        /* === Sub-object 16: MaxTargetDistance === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj16_fail
        push    0x64
        push    0x2
        push    0x77cb98
        push    0xc
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     l_obj16_done
l_obj16_fail:
        xor     esi, esi
l_obj16_done:
        /* 0x00549516: mov eax, [0x007ddd74] */
        mov eax, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0

        /* === Sub-object 17: TurnSpeedZoomModifierTorso === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj17_fail
        push    0x68
        push    0x2
        push    0x77cb7c
        push    0xd
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     l_obj17_done
l_obj17_fail:
        xor     esi, esi
l_obj17_done:
        /* 0x00549550: mov ecx, [0x007ddd74] */
        mov ecx, dword ptr [DAT_007ddd74]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0

        /* === Sub-object 18: TurnSpeedZoomModifierYaw === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj18_fail
        push    0x6c
        push    0x2
        push    0x77cb60
        push    0xe
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     l_obj18_done
l_obj18_fail:
        xor     esi, esi
l_obj18_done:
        /* 0x0054958B: mov edx, [0x007ddd74] */
        mov edx, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0

        /* === Sub-object 19: TurnSpeedZoomModifierPitch === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj19_fail
        push    0x70
        push    0x2
        push    0x77cb44
        push    0xf
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     l_obj19_done
l_obj19_fail:
        xor     esi, esi
l_obj19_done:
        /* 0x005495C6: mov eax, [0x007ddd74] */
        mov eax, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0

        /* === Sub-object 20: TurnSpeedEOZoomModifierTorso === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj20_fail
        push    0x94
        push    0x2
        push    0x77cb24
        push    0x16
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     l_obj20_done
l_obj20_fail:
        xor     esi, esi
l_obj20_done:
        /* 0x00549603: mov ecx, [0x007ddd74] */
        mov ecx, dword ptr [DAT_007ddd74]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0

        /* === Sub-object 21: TurnSpeedEOZoomModifierYaw === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj21_fail
        push    0x98
        push    0x2
        push    0x77cb08
        push    0x17
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     l_obj21_done
l_obj21_fail:
        xor     esi, esi
l_obj21_done:
        /* 0x00549641: mov edx, [0x007ddd74] */
        mov edx, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0

        /* === Sub-object 22: TurnSpeedEOZoomModifierPitch === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj22_fail
        push    0x9c
        push    0x2
        push    0x77cae8
        push    0x18
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     l_obj22_done
l_obj22_fail:
        xor     esi, esi
l_obj22_done:
        /* 0x0054967F: mov eax, [0x007ddd74] */
        mov eax, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0

        /* === Sub-object 23: BRBMode === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj23_fail
        push    0x20
        push    0x1
        push    0x77cae0
        push    0x6
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775588
        jmp     l_obj23_done
l_obj23_fail:
        xor     esi, esi
l_obj23_done:
        /* 0x005496B9: mov ecx, [0x007ddd74] */
        mov ecx, dword ptr [DAT_007ddd74]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0

        /* === Sub-object 24: RotationPerSecond === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj24_fail
        push    0x74
        push    0x3
        push    0x77cacc
        push    0x10
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x77cabc
        jmp     l_obj24_done
l_obj24_fail:
        xor     esi, esi
l_obj24_done:
        /* 0x005496F4: mov edx, [0x007ddd74] */
        mov edx, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0

        /* === Sub-object 25: TranslationPerSecond === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj25_fail
        push    0x78
        push    0x5
        push    0x77caa4
        push    0x11
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x77543c
        jmp     l_obj25_done
l_obj25_fail:
        xor     esi, esi
l_obj25_done:
        /* 0x0054972F: mov eax, [0x007ddd74] */
        mov eax, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0

        /* === Sub-object 26: DeathTimer === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj26_fail
        push    0x84
        push    0x2
        push    0x77ca98
        push    0x12
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     l_obj26_done
l_obj26_fail:
        xor     esi, esi
l_obj26_done:
        /* 0x0054976C: mov ecx, [0x007ddd74] */
        mov ecx, dword ptr [DAT_007ddd74]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0

        /* === Sub-object 27: PlayerAIResource === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj27_fail
        push    0x88
        push    0x231
        push    0x77ca84
        push    0x13
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773cd0
        jmp     l_obj27_done
l_obj27_fail:
        xor     esi, esi
l_obj27_done:
        /* 0x005497AD: mov edx, [0x007ddd74] */
        mov edx, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0

        /* === Sub-object 28: DelayTorsoCenter === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj28_fail
        push    0x8c
        push    0x2
        push    0x77ca70
        push    0x14
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     l_obj28_done
l_obj28_fail:
        xor     esi, esi
l_obj28_done:
        /* 0x005497EB: mov eax, [0x007ddd74] */
        mov eax, dword ptr [DAT_007ddd74]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0

        /* === Sub-object 29: MaxSpeedAboveMinTransToTorsoCenterKPH === */
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_obj29_fail
        push    0x90
        push    0x2
        push    0x77ca48
        push    0x15
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     l_obj29_done
l_obj29_fail:
        xor     esi, esi
l_obj29_done:
        /* 0x00549828: mov ecx, [0x007ddd74] */
        mov ecx, dword ptr [DAT_007ddd74]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0

        /* Final: set global function pointer */
        /* 0x00549837: mov dword ptr [0x007b2abc], 0x549850 */
        mov dword ptr [DAT_007b2abc], 0x549850

        pop     esi
        ret
    }


}
