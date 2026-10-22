/*
 * FUN_00696320 (183 B) — formats a string via a sprintf-style IAT function
 * and calls into a string routine.
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

__declspec(naked) void FUN_00696320(void)
{
    __asm {
        sub     esp, 0x78
        push    esi
        mov     esi, ecx
        call    FUN_00696b20
        test    al, al
        je      L_63d0
        mov     eax, dword ptr [esp+0x84]
        mov     ecx, dword ptr [eax]
        push    edi
        push    ecx
        lea     edx, [esp+0x20]
        push    0x76b9a8
        push    edx
        call    dword ptr [g_76b420]
        add     esp, 0xc
        lea     eax, [esp+0xc]
        push    eax
        lea     ecx, [esp+0xf]
        push    ecx
        lea     ecx, [esp+0x20]
        mov     dword ptr [esp+0x18], 0
        mov     dword ptr [esp+0x1c], 0
        mov     dword ptr [esp+0x14], 0
        call    FUN_00547ba0
        mov     edx, dword ptr [esp+0xc]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp+0x1c]
        repne scasb
        not     ecx
        dec     ecx
        lea     eax, [esp+ecx+0x1c]
        push    edx
        push    eax
        lea     ecx, [esp+0x24]
        push    ecx
        lea     ecx, [esp+0x1c]
        call    FUN_00563480
        mov     edx, dword ptr [esp+0x8c]
        mov     ecx, dword ptr [esp+0x84]
        push    edx
        lea     eax, [esp+0x14]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00695a20
        mov     eax, dword ptr [esp+0x10]
        test    eax, eax
        pop     edi
        je      L_63d0
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_63d0:
        pop     esi
        add     esp, 0x78
        ret     0xc
    }
}
