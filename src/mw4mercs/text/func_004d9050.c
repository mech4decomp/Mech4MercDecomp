/*
 * FUN_004d9050 (750 B) — Adept application-core init: registers "Entities"
 * and "Collision" groups, allocates the Adept::Entity object (0xa4 bytes)
 * and a series of 0x20-byte property/component objects, wiring each into
 * the entity via FUN_005016b0/FUN_00500ec0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006f4710(void);
extern int __cdecl FUN_004084d0(int);
extern int __cdecl FUN_00501a20(void);   /* __thiscall; ecx set manually */
extern int __cdecl FUN_00501500(void);
extern int __cdecl FUN_005016b0(void);
extern int __cdecl FUN_005013f0(void);
extern int __cdecl FUN_005008e0(void);
extern int __cdecl FUN_00500ec0(void);
extern int __cdecl FUN_00501310(void);

extern int g_007dc130;
extern int g_007dc688;
extern int g_007dc68c;
extern int g_007dc690;
extern int g_007dc8cc;
extern int g_007dc698;

__declspec(naked) void FUN_004d9050(void)
{
    __asm {
        mov     eax, dword ptr [g_007dc130]
        push    eax
        push    0x0
        push    0x77327c                    /* "Entities" */
        call    FUN_006f4710
        mov     ecx, dword ptr [g_007dc130]
        push    ecx
        push    0x0
        push    0x773270                    /* "Collision" */
        mov     dword ptr [g_007dc688], eax
        call    FUN_006f4710
        push    0xa4
        mov     dword ptr [g_007dc68c], eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_90e0
        mov     edx, dword ptr [g_007dc8cc]
        mov     ecx, dword ptr [g_007dc698]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0x502240
        push    0x501eb0
        push    edx
        push    0x501b70
        push    0x4d93b0
        push    0x773138
        push    0x4
        push    ecx
        push    0x773260                    /* "Adept::Entity" */
        push    0x1c9
        mov     ecx, eax
        call    FUN_00501a20
        mov     dword ptr [g_007dc690], eax
        jmp     L_90ea
L_90e0:
        mov     dword ptr [g_007dc690], 0x0
L_90ea:
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_9112
        push    0xe0
        push    0x1c8
        push    0x773250                    /* "ExecutionState" */
        push    0x1
        mov     ecx, eax
        call    FUN_00501500
        jmp     L_9114
L_9112:
        xor     eax, eax
L_9114:
        mov     edx, dword ptr [g_007dc690]
        push    esi
        push    eax
        lea     ecx, [edx+0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_9151
        push    0x154
        push    0x1
        push    0x773244                    /* "IsDestroyed" */
        push    0x3
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x773234
        jmp     L_9153
L_9151:
        xor     esi, esi
L_9153:
        mov     eax, dword ptr [g_007dc690]
        push    esi
        lea     ecx, [eax+0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_918e
        push    0x158
        push    0x1
        push    0x77321c                    /* "VisualRepresentation" */
        push    0x4
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x773234
        jmp     L_9190
L_918e:
        xor     esi, esi
L_9190:
        mov     ecx, dword ptr [g_007dc690]
        push    esi
        add     ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_91c9
        push    0x28
        push    0x2
        push    0x77320c                    /* "LightIntensity" */
        push    0x5
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x7731fc
        jmp     L_91cb
L_91c9:
        xor     esi, esi
L_91cb:
        mov     edx, dword ptr [g_007dc690]
        push    esi
        lea     ecx, [edx+0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_9204
        push    0x0
        push    0xe
        push    0x7731f0                    /* "Collider" */
        push    0x1
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x7731e0
        jmp     L_9206
L_9204:
        xor     esi, esi
L_9206:
        mov     eax, dword ptr [g_007dc690]
        push    esi
        lea     ecx, [eax+0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_923e
        push    0x1
        push    0xe
        push    0x7731d0                    /* "CanBeWalkedOn" */
        push    0x2
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x7731e0
        jmp     L_9240
L_923e:
        xor     esi, esi
L_9240:
        mov     ecx, dword ptr [g_007dc690]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_9279
        push    0x2
        push    0xe
        push    0x7731c4                    /* "CanBeShot" */
        push    0x3
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x7731e0
        jmp     L_927b
L_9279:
        xor     esi, esi
L_927b:
        mov     edx, dword ptr [g_007dc690]
        push    esi
        lea     ecx, [edx+0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_92b4
        push    0x3
        push    0xe
        push    0x7731b4                    /* "WaterSurface" */
        push    0x4
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x7731e0
        jmp     L_92b6
L_92b4:
        xor     esi, esi
L_92b6:
        mov     eax, dword ptr [g_007dc690]
        push    esi
        lea     ecx, [eax+0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_92ee
        push    0x4
        push    0xe
        push    0x7731a8                    /* "OBBCollides" */
        push    0x5
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x7731e0
        jmp     L_92f0
L_92ee:
        xor     esi, esi
L_92f0:
        mov     ecx, dword ptr [g_007dc690]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        pop     esi
        jz      L_932c
        push    0x773198                    /* "LocalToWorld" */
        push    0x2
        mov     ecx, eax
        call    FUN_00501310
        mov     edx, dword ptr [g_007dc690]
        push    eax
        lea     ecx, [edx+0x44]
        call    FUN_005016b0
        ret
L_932c:
        mov     edx, dword ptr [g_007dc690]
        xor     eax, eax
        push    eax
        lea     ecx, [edx+0x44]
        call    FUN_005016b0
        ret
    }
}
