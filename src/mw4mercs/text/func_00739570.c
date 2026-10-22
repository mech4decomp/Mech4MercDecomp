/*
 * FUN_00739570 (564 B) — __fastcall worker-thread loop. Enters a critical
 * section, processes a queue (malloc/free + rep movsd), sends events via
 * custom function pointers, waits on multiple objects, and manages a worker
 * thread (CreateThread / WaitForSingleObject / CloseHandle).
 *
 * __fastcall (ECX = param_1), RET (C3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_8aaca4)(int);                   /* DAT_008aaca4 fn ptr */
extern void (__stdcall *g_76b110)(void *);             /* EnterCriticalSection IAT */
extern void (__stdcall *g_76b100)(void *);             /* LeaveCriticalSection IAT */
extern void * (__cdecl *g_76b294)(unsigned int);       /* malloc IAT */
extern void (__cdecl *g_76b2d0)(void *);               /* free IAT */
extern int (__cdecl *g_8aaca8)(int);                   /* DAT_008aaca8 fn ptr */
extern unsigned int (__stdcall *g_76b0e0)(void);       /* GetTickCount IAT */
extern int (__cdecl *g_8aacb8)(int, void *, int, int, void *, int); /* DAT_008aacb8 fn ptr */
extern unsigned int (__stdcall *g_76b170)(unsigned int, void *, int, unsigned int); /* WaitForMultipleObjects IAT */
extern int (__stdcall *g_76b1d0)(void *);              /* ResetEvent IAT */
extern int (__cdecl *g_8aacc8)(int);                   /* DAT_008aacc8 fn ptr */
extern unsigned int (__stdcall *g_76b0f4)(void *, unsigned int); /* WaitForSingleObject IAT */
extern int (__stdcall *g_76b0ec)(void *);              /* CloseHandle IAT */
extern void * (__stdcall *g_76b218)(void *, unsigned int, void *, void *, unsigned int, void *); /* CreateThread IAT */

extern void __cdecl FUN_00739510(void);                /* __thiscall */
extern void __cdecl FUN_00738d20(void);                /* __thiscall */

__declspec(naked) void __fastcall FUN_00739570(void *param_1)
{
    __asm {
        sub     esp, 0x34
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x2c]
        mov     ecx, dword ptr [ebp + 0x28]
        push    edi
        push    0x7080
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [esp + 0x34], ecx
        call    dword ptr [g_8aaca4]
        mov     word ptr [esp + 0x36], ax
        mov     word ptr [esp + 0x34], 0x2
        mov     byte ptr [esp + 0x13], 0x0
L_5a3:
        lea     esi, [ebp + 0x30]
        push    esi
        call    dword ptr [g_76b110]
        mov     eax, dword ptr [ebp + 0xc]
        xor     edi, edi
        test    eax, eax
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x20], eax
        jnz     L_5ca
        push    esi
        call    dword ptr [g_76b100]
        jmp     L_6e2
L_5ca:
        mov     ecx, dword ptr [ebp + 0x18]
        test    ecx, ecx
        jz      L_5f2
        mov     eax, dword ptr [ebp + 0x8]
        shr     ecx, 0x1
        xor     edx, edx
        div     ecx
        cmp     eax, 0x1e
        mov     dword ptr [esp + 0x14], eax
        jbe     L_5ed
        mov     dword ptr [esp + 0x14], 0x1e
        jmp     L_5fa
L_5ed:
        cmp     eax, 0x5
        jnc     L_5fa
L_5f2:
        mov     dword ptr [esp + 0x14], 0x5
L_5fa:
        mov     eax, dword ptr [ebp + 0xc]
        cmp     dword ptr [eax + 0x18], 0x2
        jz      L_659
        mov     ebx, dword ptr [ebp + 0x14]
        cmp     edi, ebx
        jc      L_649
        lea     edx, [ebx*0x4 + 0x64]
        push    edx
        call    dword ptr [g_76b294]
        mov     edx, eax
        mov     eax, dword ptr [ebp + 0x10]
        add     esp, 0x4
        test    eax, eax
        mov     dword ptr [esp + 0x1c], edx
        jz      L_642
        mov     esi, eax
        mov     edi, edx
        mov     ecx, ebx
        push    eax
        rep     movsd
        call    dword ptr [g_76b2d0]
        mov     edx, dword ptr [esp + 0x20]
        mov     edi, dword ptr [esp + 0x1c]
        add     esp, 0x4
L_642:
        inc     ebx
        mov     dword ptr [ebp + 0x10], edx
        mov     dword ptr [ebp + 0x14], ebx
L_649:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx + edi*0x4], edx
        inc     edi
        mov     dword ptr [esp + 0x18], edi
L_659:
        lea     ecx, [esp + 0x13]
        push    ecx
        push    eax
        mov     ecx, ebp
        call    FUN_00739510
        mov     cl, byte ptr [esp + 0x13]
        test    cl, cl
        mov     dword ptr [ebp + 0xc], eax
        jnz     L_685
        test    eax, eax
        jz      L_685
        cmp     dword ptr [esp + 0x20], eax
        jz      L_685
        cmp     edi, dword ptr [esp + 0x14]
        jc      L_5fa
L_685:
        lea     eax, [ebp + 0x30]
        push    eax
        call    dword ptr [g_76b100]
        test    edi, edi
        jz      L_6e2
        mov     edx, dword ptr [ebp + 0x10]
        mov     ebx, dword ptr [ebp + 0x20]
        lea     esi, [edx + edi*0x4]
L_69c:
        mov     eax, dword ptr [esi + -0x4]
        sub     esi, 0x4
        push    eax
        dec     edi
        call    dword ptr [g_8aaca8]
        mov     dword ptr [esp + 0x38], eax
        call    dword ptr [g_76b0e0]
        push    0x10
        lea     ecx, [esp + 0x38]
        push    ecx
        push    0x0
        push    0x4
        lea     edx, [esp + 0x34]
        and     eax, 0x1fff
        push    edx
        or      eax, 0x90000000
        push    ebx
        mov     dword ptr [esp + 0x3c], eax
        call    dword ptr [g_8aacb8]
        cmp     eax, -0x1
        jz      L_6e2
        test    edi, edi
        jnz     L_69c
L_6e2:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      L_705
        push    0x1770
        push    0x0
        lea     eax, [esp + 0x34]
        push    eax
        push    0x2
        call    dword ptr [g_76b170]
        mov     byte ptr [esp + 0x13], 0x0
        jmp     L_719
L_705:
        push    0x7d0
        push    0x0
        lea     ecx, [esp + 0x34]
        push    ecx
        push    0x2
        call    dword ptr [g_76b170]
L_719:
        cmp     eax, 0x102
        jz      L_5a3
        mov     ecx, dword ptr [ebp + 0x24]
        test    ecx, ecx
        jnz     L_79c
        cmp     eax, 0x1
        jnz     L_79c
        mov     edx, dword ptr [ebp + 0x28]
        push    edx
        call    dword ptr [g_76b1d0]
        mov     eax, dword ptr [ebp + 0x20]
        push    eax
        call    dword ptr [g_8aacc8]
        mov     esi, dword ptr [ebp + 0x4c]
        test    esi, esi
        mov     dword ptr [ebp + 0x20], 0xffffffff
        jz      L_76c
        push    0x1388
        push    esi
        call    dword ptr [g_76b0f4]
        push    esi
        call    dword ptr [g_76b0ec]
        mov     dword ptr [ebp + 0x4c], 0x0
L_76c:
        mov     ecx, ebp
        call    FUN_00738d20
        test    eax, eax
        jz      L_79c
        lea     ecx, [esp + 0x28]
        push    ecx
        push    0x0
        push    ebp
        push    0x7397b0
        push    0x1000
        push    0x0
        call    dword ptr [g_76b218]
        test    eax, eax
        mov     dword ptr [ebp + 0x4c], eax
        jnz     L_5a3
L_79c:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret
    }
}
