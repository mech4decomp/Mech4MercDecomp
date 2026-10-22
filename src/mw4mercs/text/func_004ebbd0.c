/*
 * FUN_004ebbd0 (121 B) — two-arg init. Allocates a 0x2c object; on success
 * constructs it via FUN_00415d70 (0x34, arg0, arg1, "Adept::...", g_007dc130)
 * and stores it in g_007dc7d4; on failure stores 0. Then allocates a 0x14
 * object and constructs an "Adept::..." (0x22a) via FUN_004151c0 into
 * g_007dc7d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004084d0(int);
extern int __cdecl FUN_00415d70(int, int, int, char *, int);
extern int __cdecl FUN_004151c0(int, char *, int);

extern int g_007dc130;
extern int g_007dc7d4;
extern int g_007b8c10;
extern int g_007dc7d0;

__declspec(naked) void FUN_004ebbd0(void)
{
    __asm {
        push    esi
        push    0x2c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_fail1
        mov     eax, dword ptr [g_007dc130]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x8]
        push    eax
        push    0x77470c
        push    ecx
        push    edx
        push    0x34
        mov     ecx, esi
        call    FUN_00415d70
        mov     dword ptr [g_007dc7d4], esi
        jmp     L_second
L_fail1:
        mov     dword ptr [g_007dc7d4], 0
L_second:
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        pop     esi
        jz      L_fail2
        mov     ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x7746f8
        push    0x22a
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007dc7d0], eax
        ret
L_fail2:
        mov     dword ptr [g_007dc7d0], 0
        ret
    }
}
