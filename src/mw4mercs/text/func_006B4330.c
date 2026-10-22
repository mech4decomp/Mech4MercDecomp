/*
 * FUN_006B4330 (377 B) — data block 0x6B3D55. Contains a small helper
 * (0x4330, returns [..+0x52c]+0xf) followed by a larger __thiscall-style
 * routine (0x4350) that walks the XOR-obfuscated globals [0x7dab44]/
 * [0x7dab40] (key 0x85739531), indexes a table, and calls several helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern int g_7dc728;
extern float g_799ff4;
extern int g_7b6024;
extern int g_7b6020;

extern void __cdecl FUN_004B6CA0(void);
extern void __cdecl FUN_006B36F0(void);
extern void __cdecl FUN_006B3580(void);
extern void __cdecl FUN_0041EC50(void);
extern void __cdecl FUN_006B39C0(void);

__declspec(naked) void FUN_006B4330(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x52c]
        add     eax, 0xf
        ret
        nop
        sub     esp, 0x1c
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [g_7dab44]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x14]
        mov     ecx, dword ptr [g_7dab40]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, eax
        shl     esi, 7
        add     esi, eax
        shl     esi, 3
        sub     esi, eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        shl     esi, 3
        mov     edx, dword ptr [ecx + esi + 0x3560]
        lea     eax, [ecx + esi + 0x3560]
        mov     eax, dword ptr [eax + 8]
        mov     ecx, edx
        mov     dword ptr [esp + 0x20], edx
        push    ecx
        mov     ecx, dword ptr [g_7dc728]
        mov     edx, eax
        push    edx
        mov     dword ptr [esp + 0x30], eax
        call    FUN_004B6CA0
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        push    eax
        mov     dword ptr [esp + 0x20], eax
        call    FUN_006B36F0
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        fld     dword ptr [edx + esi + 0x356c]
        lea     eax, [edx + esi + 0x356c]
        fld     dword ptr [g_799ff4]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        fstp    st(0)
        call    FUN_006B3580
        mov     edi, dword ptr [esp + 0x44]
        add     esp, 0x10
        push    0xb
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x38], eax
        call    FUN_0041EC50
        push    4
        lea     edx, [esp + 0x34]
        push    edx
        mov     ecx, edi
        call    FUN_0041EC50
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [g_7dab40]
        mov     ebx, dword ptr [esp + 0x38]
        xor     ecx, eax
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x1814]
        mov     esi, dword ptr [eax + ebx*4 + 0x9098]
        add     eax, 0x9090
        mov     ecx, 0xe
        add     esi, ecx
        mov     dword ptr [eax + ebx*4 + 8], esi
        add     dword ptr [eax + 0xc00], ecx
        mov     esi, dword ptr [esp + 0x30]
        mov     ebp, 9
L_4470:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esi*8 + g_7b6024]
        mov     ecx, dword ptr [esi*8 + g_7b6020]
        push    ebx
        add     eax, edx
        mov     edx, dword ptr [esp + 0x20]
        push    edi
        push    eax
        add     ecx, edx
        push    ecx
        call    FUN_006B39C0
        add     esp, 0x10
        inc     esi
        cmp     esi, 0xf
        jle     L_449e
        xor     esi, esi
L_449e:
        dec     ebp
        jne     L_4470
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret
    }
}
