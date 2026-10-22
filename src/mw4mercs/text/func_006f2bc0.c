/*
 * FUN_006f2bc0 (462 B) — __thiscall settings-save routine. Opens a config
 * object (FUN_0040eda0) and writes a series of camera/spectator settings
 * (key/value pairs) into it via FUN_00411c40 / FUN_00411d10 / FUN_00411dc0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7b6cc4[];         /* 0x007b6cc4 "MSR_Spectator" */
extern char g_7b6cd4[];         /* 0x007b6cd4 "testMSR" */
extern char g_7b6cdc[];         /* 0x007b6cdc "allowHudNameDisplay" */
extern char g_7b6cf0[];         /* 0x007b6cf0 "allowHudChatDisplay" */
extern char g_7b6d04[];         /* 0x007b6d04 "overShoulderHeroOffset_x" */
extern char g_7b6d20[];         /* 0x007b6d20 "overShoulderHeroOffset_y" */
extern char g_7b6d3c[];         /* 0x007b6d3c "overShoulderHeroOffset_z" */
extern char g_7b6d58[];         /* 0x007b6d58 "overShoulderEnemyOffset_x" */
extern char g_7b6d74[];         /* 0x007b6d74 "overShoulderEnemyOffset_y" */
extern char g_7b6d90[];         /* 0x007b6d90 "overShoulderEnemyOffset_z" */
extern char g_7b6dac[];         /* 0x007b6dac "sideShotDelta_X" */
extern char g_7b6dbc[];         /* 0x007b6dbc "sideShotDelta_Y" */
extern char g_7b6dcc[];         /* 0x007b6dcc "sideShotHead_Y" */
extern char g_7b6ddc[];         /* 0x007b6ddc "FrtShot_HeadY" */
extern char g_7b6dec[];         /* 0x007b6dec "FrtShot_CamY" */
extern char g_7b6dfc[];         /* 0x007b6dfc "FrtShot_Dist" */
extern char g_7b6e0c[];         /* 0x007b6e0c "FixedTrack_X" */
extern char g_7b6e1c[];         /* 0x007b6e1c "FixedTrack_Y" */
extern char g_7b6e2c[];         /* 0x007b6e2c "FixedTrack_Z" */
extern char g_7b6e3c[];         /* 0x007b6e3c "DeathSeq_X" */
extern char g_7b6e48[];         /* 0x007b6e48 "DeathSeq_Y" */
extern char g_7b6e54[];         /* 0x007b6e54 "DeathSeq_Z" */
extern char g_7b6e60[];         /* 0x007b6e60 "DeathAnimDelay" */
extern char g_7b6e70[];         /* 0x007b6e70 "DeathAnimDur" */

extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_00411dc0(void);

__declspec(naked) void __fastcall FUN_006f2bc0(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    offset g_7b6cc4
        call    FUN_0040eda0
        mov     edi, eax
        mov     eax, dword ptr [esi + 0x134]
        push    eax
        push    offset g_7b6cd4
        mov     ecx, edi
        call    FUN_00411c40
        mov     ecx, dword ptr [esi + 0x138]
        push    ecx
        push    offset g_7b6cdc
        mov     ecx, edi
        call    FUN_00411d10
        mov     edx, dword ptr [esi + 0x13c]
        push    edx
        push    offset g_7b6cf0
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x140]
        push    eax
        push    offset g_7b6d04
        mov     ecx, edi
        call    FUN_00411dc0
        mov     ecx, dword ptr [esi + 0x144]
        push    ecx
        push    offset g_7b6d20
        mov     ecx, edi
        call    FUN_00411dc0
        mov     edx, dword ptr [esi + 0x148]
        push    edx
        push    offset g_7b6d3c
        mov     ecx, edi
        call    FUN_00411dc0
        mov     eax, dword ptr [esi + 0x14c]
        push    eax
        push    offset g_7b6d58
        mov     ecx, edi
        call    FUN_00411dc0
        mov     ecx, dword ptr [esi + 0x150]
        push    ecx
        push    offset g_7b6d74
        mov     ecx, edi
        call    FUN_00411dc0
        mov     edx, dword ptr [esi + 0x154]
        push    edx
        push    offset g_7b6d90
        mov     ecx, edi
        call    FUN_00411dc0
        mov     eax, dword ptr [esi + 0x158]
        push    eax
        push    offset g_7b6dac
        mov     ecx, edi
        call    FUN_00411dc0
        mov     ecx, dword ptr [esi + 0x15c]
        push    ecx
        push    offset g_7b6dbc
        mov     ecx, edi
        call    FUN_00411dc0
        mov     edx, dword ptr [esi + 0x160]
        push    edx
        push    offset g_7b6dcc
        mov     ecx, edi
        call    FUN_00411dc0
        mov     eax, dword ptr [esi + 0x164]
        push    eax
        push    offset g_7b6ddc
        mov     ecx, edi
        call    FUN_00411dc0
        mov     ecx, dword ptr [esi + 0x168]
        push    ecx
        push    offset g_7b6dec
        mov     ecx, edi
        call    FUN_00411dc0
        mov     edx, dword ptr [esi + 0x16c]
        push    edx
        push    offset g_7b6dfc
        mov     ecx, edi
        call    FUN_00411dc0
        mov     eax, dword ptr [esi + 0x170]
        push    eax
        push    offset g_7b6e0c
        mov     ecx, edi
        call    FUN_00411dc0
        mov     ecx, dword ptr [esi + 0x174]
        push    ecx
        push    offset g_7b6e1c
        mov     ecx, edi
        call    FUN_00411dc0
        mov     edx, dword ptr [esi + 0x178]
        push    edx
        push    offset g_7b6e2c
        mov     ecx, edi
        call    FUN_00411dc0
        mov     eax, dword ptr [esi + 0x17c]
        push    eax
        push    offset g_7b6e3c
        mov     ecx, edi
        call    FUN_00411dc0
        mov     ecx, dword ptr [esi + 0x180]
        push    ecx
        push    offset g_7b6e48
        mov     ecx, edi
        call    FUN_00411dc0
        mov     edx, dword ptr [esi + 0x184]
        push    edx
        push    offset g_7b6e54
        mov     ecx, edi
        call    FUN_00411dc0
        mov     eax, dword ptr [esi + 0x188]
        push    eax
        push    offset g_7b6e60
        mov     ecx, edi
        call    FUN_00411dc0
        mov     ecx, dword ptr [esi + 0x18c]
        push    ecx
        push    offset g_7b6e70
        mov     ecx, edi
        call    FUN_00411dc0
        pop     edi
        pop     esi
        ret     4
    }
}
