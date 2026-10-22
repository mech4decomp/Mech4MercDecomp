/*
 * FUN_00439c50 (150 B) — MLR static init. Creates the MLR_I_L_DT_TMesh
 * class object and a 0x100-entry buffer, stores them in globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_006f4710(const char *, int, int);
extern void * __cdecl FUN_004084d0(int);
extern void __cdecl FUN_004151c0(int, const char *, int);

extern int g_7b958c; /* 0x007b958c */
extern int g_7b9840; /* 0x007b9840 */
extern int g_7b9850; /* 0x007b9850 */
extern int g_7b9838; /* 0x007b9838 */
extern int g_7b983c; /* 0x007b983c */

__declspec(naked) void FUN_00439c50(void)
{
    __asm {
        mov     eax, dword ptr [g_7b958c]
        push    esi
        push    eax
        push    0
        push    0x76e508
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [g_7b9840], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_439c9c
        mov     ecx, dword ptr [g_7b9850]
        push    ecx
        push    0x76e4e4
        push    0x6d
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi+0x14], 0x439e80
        mov     dword ptr [g_7b9838], esi
        jmp     L_439ca6
L_439c9c:
        mov     dword ptr [g_7b9838], 0
L_439ca6:
        push    8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_439cda
        push    0x400
        mov     dword ptr [esi], 0
        mov     dword ptr [esi+4], 0x100
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esi], eax
        mov     dword ptr [g_7b983c], esi
        pop     esi
        ret
L_439cda:
        mov     dword ptr [g_7b983c], 0
        pop     esi
        ret
    }
}
