/*
 * FUN_004e5160 (96 B) — MLR/Adept object constructor (__thiscall, RET 4).
 * Sets vtable 0x773fb0, initializes a local buffer, calls FUN_004e5200,
 * and conditionally calls FUN_004e51e0 based on an FPU compare.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern void  FUN_004e4d30(void);
extern void  FUN_004e5200(void);
extern void  FUN_004e51e0(void);

__declspec(naked) void FUN_004e5160(void)
{
    __asm {
        sub     esp, 0x4c
        mov     eax, dword ptr [esp+0x50]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004e4d30
        lea     ecx, [esp+0x4]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esi], 0x773fb0
        mov     dword ptr [esp+0x10], 0xbf800000
        mov     dword ptr [esp+0xc], 0xbf800000
        mov     dword ptr [esp+0x8], 0xbf800000
        call    FUN_004e5200
        fld     dword ptr [esp+0x48]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_4e51b7
        lea     edx, [esp+0x4]
        push    edx
        mov     ecx, esi
        call    FUN_004e51e0
    L_4e51b7:
        mov     eax, esi
        pop     esi
        add     esp, 0x4c
        ret     0x4
    }
}
