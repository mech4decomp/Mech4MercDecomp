/*
 * FUN_00448700 (126 B) — MLR global init: constructs two objects (0x18-byte
 * and 0x8-byte), stores them in globals g_007b98a4 / g_007b98a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b98e0;
extern int g_007b98a4;
extern int g_007b98a0;
extern char g_76e828[];
extern int g_448c70;

extern void *__cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_00448700(void)
{
    __asm {
        push    esi
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L34
        mov     eax, dword ptr [g_007b98e0]
        push    eax
        push    offset g_76e828
        push    0x68
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], offset g_448c70
        mov     dword ptr [g_007b98a4], esi
        jmp     L3e
L34:
        mov     dword ptr [g_007b98a4], 0
L3e:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L72
        push    0x800
        mov     dword ptr [esi], 0
        mov     dword ptr [esi + 0x4], 0x100
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esi], eax
        mov     dword ptr [g_007b98a0], esi
        pop     esi
        ret
L72:
        mov     dword ptr [g_007b98a0], 0
        pop     esi
        ret
    }
}
