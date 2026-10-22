/*
 * FUN_004effa0 (94 B) — Adept::CameraComponent factory. Looks up an
 * existing camera via FUN_00416110 (thiscall on g_007daa38); if found
 * initializes it via FUN_00491280 and zeroes field 0x18. Then allocates
 * a 0x2ec-byte object and constructs it via FUN_004c32d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004c32d0(void);
extern void __cdecl FUN_006f49a0(void);

extern int g_007da9ec;   /* DAT_007da9ec */
extern int g_007daa38;   /* DAT_007daa38 */

__declspec(naked) void FUN_004effa0(void)
{
    __asm {
        mov     eax, dword ptr [g_007da9ec]
        push    esi
        push    eax
        call    FUN_006f4950
        mov     ecx, dword ptr [g_007daa38]
        call    FUN_00416110
        mov     esi, eax
        test    esi, esi
        jz      Lefcd
        mov     ecx, esi
        call    FUN_00491280
        mov     dword ptr [esi + 0x18], 0x0
        jmp     Leffcf
Lefcd:
        xor     esi, esi
Leffcf:
        push    0x2ec
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      Leff3
        push    esi
        mov     ecx, eax
        call    FUN_004c32d0
        mov     esi, eax
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
Leff3:
        xor     esi, esi
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
    }
}
