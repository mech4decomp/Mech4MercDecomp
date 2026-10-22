/*
 * FUN_004e1210 (147 B) — MLR/Adept renderer update/iterate (__thiscall).
 * Walks a list of render objects, invoking virtual methods, and iterates
 * a sub-object list via FUN_00416cc0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f3420(void);
extern void __cdecl FUN_004e5bb0(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00416c60(void);

extern int g_007dc740;

__declspec(naked) void FUN_004e1210(void)
{
    __asm {
        mov     eax, dword ptr [esp+8]
        sub     esp, 0x14
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [esp+0x20]
        push    eax
        push    ecx
        mov     ecx, edi
        call    FUN_004f3420
        mov     esi, dword ptr [edi+0x4c]
        test    esi, esi
        jz      L_129b
        mov     edx, dword ptr [esi+0x24]
        mov     eax, dword ptr [g_007dc740]
        mov     ecx, dword ptr [eax]
        push    edx
        call    FUN_004e5bb0
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+0xc]
        add     edi, 0x50
        push    edi
        lea     ecx, [esp+0xc]
        call    FUN_00416bc0
        lea     ecx, [esp+0x8]
        mov     dword ptr [esp+0x8], 0x773c58
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jz      L_1292
L_126a:
        mov     ecx, dword ptr [esi+0x24]
        add     ecx, 0x27c
        call    FUN_0041fd80
        test    eax, eax
        jz      L_1283
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+0xc]
L_1283:
        lea     ecx, [esp+0x8]
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jnz     L_126a
L_1292:
        lea     ecx, [esp+0x8]
        call    FUN_00416c60
L_129b:
        pop     edi
        pop     esi
        add     esp, 0x14
        ret     8
    }
}
