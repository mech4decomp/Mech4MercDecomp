/*
 * FUN_00701b70 (551 B) — __cdecl shutdown/cleanup routine. Tears down worker
 * threads (SetEvent/WaitForSingleObject/CloseHandle/DeleteCriticalSection),
 * frees several global linked lists, and clears a set of byte flags.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00701970(void);
extern int  __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006f6760(void);
extern void __cdecl FUN_006f8b20(void);
extern void __cdecl FUN_006f9050(void);
extern void __cdecl FUN_006f8af0(void);
extern void __cdecl FUN_00700640(void);
extern void __cdecl FUN_00701de0(void);
extern void __cdecl FUN_006f4230(void *p);
extern void __cdecl FUN_00740db0(void *p);

extern void *g_76b168;   /* IAT: SetEvent */
extern void *g_76b0f4;   /* IAT: WaitForSingleObject */
extern void *g_76b0ec;   /* IAT: CloseHandle */
extern void *g_76b10c;   /* IAT: DeleteCriticalSection */
extern void *g_76b2d0;   /* IAT: free */

extern int g_8aaa60;
extern int g_8aaa3c;
extern int g_8aaa40;
extern int g_8aaa48;
extern int g_8aaa38;
extern int g_8aaa14;
extern int g_8aaa20;
extern int g_8aaa18;
extern int g_8aab08;
extern int g_8aaa10;
extern int g_8aaa0c;
extern int g_8aaafc;
extern int g_8aab00;
extern int g_8aaae0;
extern int g_8aaad0;
extern int g_8aaae8;
extern int g_8aaae4;
extern int g_8aab10;
extern int g_8aab14;
extern int g_8aaa08;
extern char g_8aaaec;
extern char g_8aaaed;
extern char g_8aaaee;
extern char g_8aaaef;
extern char g_8aaaf0;

__declspec(naked) void __cdecl FUN_00701b70(void)
{
    __asm {
        call    FUN_00701970
        call    FUN_006f89f0
        test    eax, eax
        jz      L_88
        call    FUN_006f89f0
        call    FUN_006f6760
L_88:
        call    FUN_006f8b20
        call    FUN_006f9050
        call    FUN_006f89f0
        test    eax, eax
        jz      L_a0
        call    FUN_006f8af0
L_a0:
        push    ebx
        push    ebp
        push    esi
        push    edi
        call    FUN_00700640
        call    FUN_00701de0
        mov     eax, dword ptr [g_8aaa60]
        mov     edi, dword ptr [g_76b168]
        mov     ebp, dword ptr [g_76b0f4]
        mov     esi, dword ptr [g_76b0ec]
        xor     ebx, ebx
        cmp     eax, ebx
        jz      L_09
        mov     eax, dword ptr [g_8aaa3c]
        push    eax
        call    edi
        mov     ecx, dword ptr [g_8aaa60]
        push    -1
        push    ecx
        call    ebp
        mov     edx, dword ptr [g_8aaa60]
        push    edx
        call    esi
        push    offset g_8aaa48
        call    dword ptr [g_76b10c]
        mov     eax, dword ptr [g_8aaa40]
        push    eax
        call    esi
        mov     ecx, dword ptr [g_8aaa3c]
        push    ecx
        call    esi
        mov     dword ptr [g_8aaa60], ebx
L_09:
        cmp     dword ptr [g_8aaa38], ebx
        jz      L_4f
        mov     edx, dword ptr [g_8aaa14]
        push    edx
        call    edi
        mov     eax, dword ptr [g_8aaa38]
        push    -1
        push    eax
        call    ebp
        mov     ecx, dword ptr [g_8aaa38]
        push    ecx
        call    esi
        push    offset g_8aaa20
        call    dword ptr [g_76b10c]
        mov     edx, dword ptr [g_8aaa18]
        push    edx
        call    esi
        mov     eax, dword ptr [g_8aaa14]
        push    eax
        call    esi
        mov     dword ptr [g_8aaa38], ebx
L_4f:
        mov     eax, dword ptr [g_8aab08]
        cmp     eax, ebx
        mov     edi, dword ptr [g_76b2d0]
        jz      L_91
L_5e:
        mov     ebp, eax
        mov     esi, dword ptr [ebp + 0x54]
        cmp     esi, ebx
        jz      L_7a
L_67:
        mov     eax, esi
        mov     esi, dword ptr [esi]
        push    eax
        call    edi
        add     esp, 0x4
        cmp     esi, ebx
        jnz     L_67
        mov     eax, dword ptr [g_8aab08]
L_7a:
        mov     ecx, dword ptr [eax]
        push    ebp
        mov     dword ptr [g_8aab08], ecx
        call    edi
        mov     eax, dword ptr [g_8aab08]
        add     esp, 0x4
        cmp     eax, ebx
        jnz     L_5e
L_91:
        mov     eax, dword ptr [g_8aaa10]
        cmp     eax, ebx
        jz      L_ad
L_9a:
        mov     esi, dword ptr [eax]
        push    eax
        call    edi
        add     esp, 0x4
        cmp     esi, ebx
        mov     eax, esi
        mov     dword ptr [g_8aaa10], eax
        jnz     L_9a
L_ad:
        mov     eax, dword ptr [g_8aaa0c]
        cmp     eax, ebx
        jz      L_c9
L_b6:
        mov     esi, dword ptr [eax]
        push    eax
        call    edi
        add     esp, 0x4
        cmp     esi, ebx
        mov     eax, esi
        mov     dword ptr [g_8aaa0c], eax
        jnz     L_b6
L_c9:
        mov     esi, dword ptr [g_8aaafc]
        cmp     esi, ebx
        mov     dword ptr [g_8aaa08], ebx
        jz      L_e7
L_d9:
        mov     eax, esi
        mov     esi, dword ptr [esi]
        push    eax
        call    FUN_006f4230
        cmp     esi, ebx
        jnz     L_d9
L_e7:
        mov     esi, dword ptr [g_8aab00]
        cmp     esi, ebx
        mov     dword ptr [g_8aaafc], ebx
        jz      L_05
L_f7:
        mov     eax, esi
        mov     esi, dword ptr [esi]
        push    eax
        call    FUN_006f4230
        cmp     esi, ebx
        jnz     L_f7
L_05:
        mov     esi, dword ptr [g_8aaae0]
        cmp     esi, ebx
        mov     dword ptr [g_8aab00], ebx
        jz      L_23
L_15:
        mov     eax, esi
        mov     esi, dword ptr [esi]
        push    eax
        call    FUN_006f4230
        cmp     esi, ebx
        jnz     L_15
L_23:
        mov     eax, dword ptr [g_8aaae8]
        cmp     eax, ebx
        mov     dword ptr [g_8aaae0], ebx
        mov     dword ptr [g_8aaad0], ebx
        jz      L_44
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_8aaae8], ebx
L_44:
        mov     eax, dword ptr [g_8aaae4]
        cmp     eax, ebx
        jz      L_59
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_8aaae4], ebx
L_59:
        mov     eax, dword ptr [g_8aab10]
        cmp     eax, ebx
        jz      L_74
        push    eax
        call    edi
        add     esp, 0x4
        mov     dword ptr [g_8aab10], ebx
        mov     dword ptr [g_8aab14], ebx
L_74:
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [g_8aaaec], bl
        mov     byte ptr [g_8aaaed], bl
        mov     byte ptr [g_8aaaee], bl
        mov     byte ptr [g_8aaaef], bl
        mov     byte ptr [g_8aaaf0], bl
        pop     ebx
        ret
    }
}
