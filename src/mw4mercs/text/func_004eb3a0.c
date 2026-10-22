/*
 * FUN_004eb3a0 (121 B) — __cdecl: allocates a 0x2c-byte object and
 * constructs a "SpatializedCommand" component via FUN_00415d70, storing
 * it in DAT_007dc7c8; then allocates a 0x14-byte object and constructs
 * an "Adept::SpatializedCommand" via FUN_004151c0 into DAT_007dc7c4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int FUN_004084d0(int);
extern void FUN_00415d70(void);
extern void FUN_004151c0(void);
extern int g_007dc130;
extern int g_007dc7c8;
extern int g_007dc7d0;
extern int g_007dc7c4;
extern char g_007746a8;
extern char g_0077468c;

__declspec(naked) void FUN_004eb3a0(void)
{
    __asm {
        push    esi
        push    0x2c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_allocfail1
        mov     eax, dword ptr [g_007dc130]
        mov     ecx, dword ptr [esp+0xc]
        mov     edx, dword ptr [esp+0x8]
        push    eax
        push    offset g_007746a8
        push    ecx
        push    edx
        push    0x6c
        mov     ecx, esi
        call    FUN_00415d70
        mov     dword ptr [g_007dc7c8], esi
        jmp     L_cont
L_allocfail1:
        mov     dword ptr [g_007dc7c8], 0
L_cont:
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        pop     esi
        jz      L_allocfail2
        mov     ecx, dword ptr [g_007dc7d0]
        push    ecx
        push    offset g_0077468c
        push    0x22c
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007dc7c4], eax
        ret
L_allocfail2:
        mov     dword ptr [g_007dc7c4], 0
        ret
    }
}
