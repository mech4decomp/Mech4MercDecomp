/*
 * FUN_00430d80 (250 B) — MLR look-up-light save/serialize. __thiscall
 * (RET 0x4). Formats fields via sprintf (function ptr 0x76b420) and
 * writes config via FUN_00411c40/FUN_00411dc0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_76d860;
extern char g_76e2b0;
extern char g_76e2a0;
extern char g_76e2a8;
extern char g_76e28c;
extern char g_76e294;
extern char g_76e27c;
extern char g_76e274;
extern int g_76b420;
extern void FUN_00490370(void);
extern void FUN_00411c40(void);
extern void FUN_00411dc0(void);

__declspec(naked) void FUN_00430d80(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x104
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp+0x8]
        mov     esi, ecx
        push    edi
        call    FUN_00490370
        fld     dword ptr [esi+0x88]
        mov     ebx, dword ptr [g_76b420]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [esi+0x84]
        sub     esp, 0x8
        fstp    qword ptr [esp+0x8]
        lea     eax, [esp+0x28]
        fld     dword ptr [esi+0x80]
        fstp    qword ptr [esp]
        push    offset g_76d860
        push    eax
        call    ebx
        add     esp, 0x20
        lea     ecx, [esp+0x10]
        push    ecx
        push    offset g_76e2b0
        mov     ecx, edi
        call    FUN_00411c40
        mov     edx, dword ptr [esi+0xa0]
        mov     eax, dword ptr [esi+0x9c]
        push    edx
        push    eax
        lea     ecx, [esp+0x18]
        push    offset g_76e2a0
        push    ecx
        call    ebx
        add     esp, 0x10
        lea     edx, [esp+0x10]
        push    edx
        push    offset g_76e2a8
        mov     ecx, edi
        call    FUN_00411c40
        fld     dword ptr [esi+0x90]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [esi+0x8c]
        lea     eax, [esp+0x20]
        fstp    qword ptr [esp]
        push    offset g_76e28c
        push    eax
        call    ebx
        add     esp, 0x18
        lea     ecx, [esp+0x10]
        push    ecx
        push    offset g_76e294
        mov     ecx, edi
        call    FUN_00411c40
        mov     edx, dword ptr [esi+0xa8]
        push    edx
        push    offset g_76e27c
        mov     ecx, edi
        call    FUN_00411dc0
        mov     eax, dword ptr [esi+0xa4]
        push    eax
        push    offset g_76e274
        mov     ecx, edi
        call    FUN_00411c40
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
