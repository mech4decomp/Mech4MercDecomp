/*
 * FUN_004f1210 (91 B) — MLR/Adept component update. __thiscall.
 * Compares |value - prev| against a float threshold (g_007b220c) and
 * picks a matcher index (0x38/0x3c) to store in 0x2c, calling
 * FUN_004f14c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_007b220c;
extern void __cdecl FUN_004f14c0(void);

__declspec(naked) void FUN_004f1210(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x8]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax+0x14]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esi+0x34]
        mov     dword ptr [esi+0x30], eax
        sub     eax, ecx
        mov     dword ptr [esp+0x8], eax
        fild    dword ptr [esp+0x8]
        fabs
        fld     dword ptr [g_007b220c]
        fcompp
        fnstsw  ax
        __emit 0xF6   /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L_1255
        mov     eax, dword ptr [esi+0x38]
        cmp     eax, -1
        jz      L_1267
        mov     ecx, esi
        mov     dword ptr [esi+0x2c], eax
        call    FUN_004f14c0
        pop     esi
        ret     0x4
L_1255:
        mov     eax, dword ptr [esi+0x3c]
        cmp     eax, -1
        jz      L_1267
        mov     ecx, esi
        mov     dword ptr [esi+0x2c], eax
        call    FUN_004f14c0
L_1267:
        pop     esi
        ret     0x4
    }
}
