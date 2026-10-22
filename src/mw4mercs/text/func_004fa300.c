/*
 * FUN_004fa300 (833 B) — Adept::Mover object-registration constructor.
 * Allocates the Adept::Mover core object (FUN_00501a20) and registers a
 * series of named member objects (LocalSpaceVelocity, LocalSpaceAcceleration,
 * WorldSpaceVelocity, WorldSpaceAcceleration, ExecutionState, MoverMass,
 * MomentOfInertia, LinearDragCoefficients, AngularDragCoefficients,
 * FrictionCoefficient, ElasticityCoefficient, MinimumBounceSpeed) into the
 * object's member slots at +0x44 and +0x74.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_005013f0(void);
extern void __cdecl FUN_005016b0(void);
extern void __cdecl FUN_00501500(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_004fa680(void);

extern int  g_007dc8c4;   /* DAT_007dc8c4 */
extern int  g_007dc690;   /* DAT_007dc690 */
extern int  g_007dc8c8;   /* DAT_007dc8c8 */

extern char g_00502c60[]; /* string @ 0x502c60 */
extern char g_005028b0[]; /* string @ 0x5028b0 */
extern char g_00507b30[]; /* string @ 0x507b30 */
extern char g_00507b10[]; /* string @ 0x507b10 */
extern char g_00507aa0[]; /* string @ 0x507aa0 */
extern char g_00775d90[]; /* "Adept::Mover" @ 0x775d90 */
extern char g_00775d7c[]; /* "LocalSpaceVelocity" @ 0x775d7c */
extern char g_00775d54[]; /* "LocalSpaceAcceleration" @ 0x775d54 */
extern char g_00775d40[]; /* "WorldSpaceVelocity" @ 0x775d40 */
extern char g_00775d28[]; /* "WorldSpaceAcceleration" @ 0x775d28 */
extern char g_00773250[]; /* "ExecutionState" @ 0x773250 */
extern char g_00775d1c[]; /* "MoverMass" @ 0x775d1c */
extern char g_00775d0c[]; /* "MomentOfInertia" @ 0x775d0c */
extern char g_00775ce4[]; /* "LinearDragCoefficients" @ 0x775ce4 */
extern char g_00775ccc[]; /* "AngularDragCoefficients" @ 0x775ccc */
extern char g_00775cb8[]; /* "FrictionCoefficient" @ 0x775cb8 */
extern char g_00775ca0[]; /* "ElasticityCoefficient" @ 0x775ca0 */
extern char g_00775c8c[]; /* "MinimumBounceSpeed" @ 0x775c8c */

extern char g_00775d6c[]; /* vtable PTR_FUN_00775d6c */
extern char g_00775948[]; /* vtable PTR_FUN_00775948 */
extern char g_00775cfc[]; /* vtable PTR_FUN_00775cfc */

__declspec(naked) void FUN_004fa300(void)
{
    __asm {
        push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L35B
        mov     ecx, dword ptr [g_007dc8c4]
        mov     edx, dword ptr [g_007dc690]
        push    offset g_00502c60
        push    offset g_005028b0
        push    offset g_00507b30
        push    0x0
        push    offset g_00507b10
        push    ecx
        push    offset g_00507aa0
        push    offset FUN_004fa680
        push    0x0
        push    0x0
        push    edx
        push    offset g_00775d90
        push    0x1cb
        mov     ecx, eax
        call    FUN_00501a20
        mov     dword ptr [g_007dc8c8], eax
        jmp     L365
L35B:
        mov     dword ptr [g_007dc8c8], 0x0
L365:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L393
        push    0x168
        push    0x8
        push    offset g_00775d7c
        push    0x6
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], offset g_00775d6c
        jmp     L395
L393:
        xor     esi, esi
L395:
        mov     eax, dword ptr [g_007dc8c8]
        push    esi
        lea     ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L3D0
        push    0x180
        push    0x8
        push    offset g_00775d54
        push    0x7
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], offset g_00775d6c
        jmp     L3D2
L3D0:
        xor     esi, esi
L3D2:
        mov     ecx, dword ptr [g_007dc8c8]
        push    esi
        add     ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L40E
        push    0x198
        push    0x8
        push    offset g_00775d40
        push    0x8
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], offset g_00775d6c
        jmp     L410
L40E:
        xor     esi, esi
L410:
        mov     edx, dword ptr [g_007dc8c8]
        push    esi
        lea     ecx, [edx + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L44C
        push    0x1b0
        push    0x8
        push    offset g_00775d28
        push    0x9
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], offset g_00775d6c
        jmp     L44E
L44C:
        xor     esi, esi
L44E:
        mov     eax, dword ptr [g_007dc8c8]
        push    esi
        lea     ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L484
        push    0xe0
        push    0x1ca
        push    offset g_00773250
        push    0x1
        mov     ecx, eax
        call    FUN_00501500
        jmp     L486
L484:
        xor     eax, eax
L486:
        mov     ecx, dword ptr [g_007dc8c8]
        push    eax
        add     ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L4BF
        push    0x1c
        push    0x2
        push    offset g_00775d1c
        push    0x6
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], offset g_00775948
        jmp     L4C1
L4BF:
        xor     esi, esi
L4C1:
        mov     edx, dword ptr [g_007dc8c8]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L4FA
        push    0x20
        push    0x4
        push    offset g_00775d0c
        push    0x7
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], offset g_00775cfc
        jmp     L4FC
L4FA:
        xor     esi, esi
L4FC:
        mov     eax, dword ptr [g_007dc8c8]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L534
        push    0x2c
        push    0x4
        push    offset g_00775ce4
        push    0x8
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], offset g_00775cfc
        jmp     L536
L534:
        xor     esi, esi
L536:
        mov     ecx, dword ptr [g_007dc8c8]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L56F
        push    0x38
        push    0x4
        push    offset g_00775ccc
        push    0x9
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], offset g_00775cfc
        jmp     L571
L56F:
        xor     esi, esi
L571:
        mov     edx, dword ptr [g_007dc8c8]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5AA
        push    0x44
        push    0x2
        push    offset g_00775cb8
        push    0xa
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], offset g_00775948
        jmp     L5AC
L5AA:
        xor     esi, esi
L5AC:
        mov     eax, dword ptr [g_007dc8c8]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5E4
        push    0x48
        push    0x2
        push    offset g_00775ca0
        push    0xb
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], offset g_00775948
        jmp     L5E6
L5E4:
        xor     esi, esi
L5E6:
        mov     ecx, dword ptr [g_007dc8c8]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L62E
        push    0x4c
        push    0x2
        push    offset g_00775c8c
        push    0xc
        mov     ecx, esi
        call    FUN_005008e0
        mov     edx, dword ptr [g_007dc8c8]
        push    esi
        lea     ecx, [edx + 0x74]
        mov     dword ptr [esi], offset g_00775948
        call    FUN_00500ec0
        pop     esi
        ret
L62E:
        mov     edx, dword ptr [g_007dc8c8]
        xor     esi, esi
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }
}
