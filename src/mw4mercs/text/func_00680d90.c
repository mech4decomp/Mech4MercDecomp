/*
 * FUN_00680d90 (85 B) — __thiscall destructor-ish helper.
 *
 * Calls FUN_004169c0(); if (param & 1) calls FUN_00416130(this),
 * decrements a global refcount, and when it hits 0 releases a global
 * object (FUN_00415e30 + FUN_004084e0) and nulls it.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004169c0(void);
extern void __fastcall FUN_00416130(void *this);
extern void __fastcall FUN_00415e30(void *this);
extern void __cdecl FUN_004084e0(void *ptr);

extern void *g_0080db00;
extern int g_0080dafc;

__declspec(naked) void __stdcall FUN_00680d90(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_ddf
        mov     ecx, dword ptr [g_0080db00]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_0080dafc]
        jnz     L_ddf
        push    edi
        mov     edi, dword ptr [g_0080db00]
        test    edi, edi
        jz      L_dce
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_dce:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_0080db00], 0x0
        pop     esi
        ret     0x4
L_ddf:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
