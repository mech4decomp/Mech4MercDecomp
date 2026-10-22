/*
 * FUN_004e50e0 (96 B) — MLR/Adept object constructor (__thiscall, RET 4).
 * Sets vtable 0x773fa4, initializes a local buffer, calls FUN_004e50b0,
 * and conditionally calls FUN_004e4e00 based on an FPU compare.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern void  FUN_004e4d30(void);
extern void  FUN_004e50b0(void);
extern void  FUN_004e4e00(void);

__declspec(naked) void FUN_004e50e0(void)
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
        mov     dword ptr [esi], 0x773fa4
        mov     dword ptr [esp+0x10], 0xbf800000
        mov     dword ptr [esp+0xc], 0xbf800000
        mov     dword ptr [esp+0x8], 0xbf800000
        call    FUN_004e50b0
        fld     dword ptr [esp+0x48]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_4e5137
        lea     edx, [esp+0x4]
        push    edx
        mov     ecx, esi
        call    FUN_004e4e00
    L_4e5137:
        mov     eax, esi
        pop     esi
        add     esp, 0x4c
        ret     0x4
    }
}
