/*
 * FUN_00696260 (179 B) — formats a double value through a helper and a
 * sprintf-style IAT function, then calls into a string routine.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b420;
extern void __cdecl FUN_00696b20(void);
extern void __cdecl FUN_00547ba0(void);
extern void __cdecl FUN_00563480(void);
extern void __cdecl FUN_00695a20(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00696260(void)
{
    __asm {
        sub     esp, 0x38
        push    esi
        mov     esi, ecx
        call    FUN_00696b20
        test    al, al
        je      L_630c
        mov     eax, dword ptr [esp+0x44]
        fld     qword ptr [eax]
        push    edi
        sub     esp, 8
        fstp    qword ptr [esp]
        lea     ecx, [esp+0x20]
        push    0x788524
        push    ecx
        call    dword ptr [g_76b420]
        add     esp, 0x10
        lea     edx, [esp+8]
        push    edx
        lea     eax, [esp+0x4c]
        push    eax
        lea     ecx, [esp+0x1c]
        mov     dword ptr [esp+0x14], 0
        mov     dword ptr [esp+0x18], 0
        mov     dword ptr [esp+0x10], 0
        call    FUN_00547ba0
        mov     ecx, dword ptr [esp+0x48]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp+0x1c]
        repne scasb
        not     ecx
        dec     ecx
        lea     edx, [esp+ecx+0x1c]
        push    edx
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x18]
        call    FUN_00563480
        mov     ecx, dword ptr [esp+0x4c]
        mov     eax, dword ptr [esp+0x44]
        push    ecx
        lea     edx, [esp+0x10]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00695a20
        mov     eax, dword ptr [esp+0xc]
        test    eax, eax
        pop     edi
        je      L_630c
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_630c:
        pop     esi
        add     esp, 0x38
        ret     0xc
    }
}
