/*
 * FUN_006486D0 (259 B @ 0x6486d0) - __cdecl, RET. Initializes a set of global
 * tables (rep stosd fills), allocates a string buffer, copies via strncpy IAT,
 * and registers a handler via FUN_006faca0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006faca0(void);
extern void __cdecl FUN_00648fe0(void);
extern void *g_0076b320;   /* strncpy IAT */
extern int  g_7f2d38[];
extern int  g_7f2df8[];
extern int  g_7f2e3c[];
extern int  g_7f2ebc[];
extern int  g_7f2dc0;
extern int  g_7f2f34;
extern int  g_8058d0;
extern char g_7f4254[];
extern int  g_7b5a1c;

__declspec(naked) void FUN_006486D0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    esi
        push    edi
        mov     eax, 3
        mov     ecx, 0x100
        mov     edi, OFFSET g_7f2d38
        rep     stosd
        mov     eax, 1
        mov     ecx, 0xa
        mov     edi, OFFSET g_7f2df8
        rep     stosd
        xor     eax, eax
        mov     ecx, 0x1a
        mov     edi, OFFSET g_7f2e3c
        rep     stosd
        mov     ecx, 0x1a
        mov     edi, OFFSET g_7f2ebc
        xor     esi, esi
        cmp     ebx, esi
        rep     stosd
        mov     dword ptr [g_7f2dc0], 2
        mov     dword ptr [g_7f2f34], 4
        je      L_6487cf
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, esi
        je      L_648753
        mov     dword ptr [eax], 0x792900
        mov     dword ptr [eax + 4], esi
        mov     dword ptr [eax + 0x10], esi
        mov     dword ptr [eax + 0xc], esi
        mov     dword ptr [eax + 8], esi
        jmp     L_648755
L_648753:
        xor     eax, eax
L_648755:
        push    ebp
        or      ecx, 0xffffffff
        mov     dword ptr [g_8058d0], eax
        mov     ebp, eax
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        dec     ecx
        lea     edi, [ecx + 1]
        push    edi
        call    FUN_004084d0
        push    edi
        mov     esi, eax
        push    ebx
        push    esi
        mov     dword ptr [ebp + 0x10], esi
        call    dword ptr [g_0076b320]
        mov     eax, dword ptr [ebp + 4]
        lea     edi, [ebp + 4]
        add     esp, 0x10
        test    eax, eax
        je      L_6487ad
        push    eax
        call    FUN_006f4230
        test    esi, esi
        mov     dword ptr [edi], 0
        je      L_6487ad
        push    esi
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp + 0x10], 0
L_6487ad:
        add     ebp, 8
        push    ebp
        push    edi
        push    ebx
        call    FUN_006faca0
        mov     byte ptr [g_7f4254], 0
        mov     dword ptr [g_7b5a1c], OFFSET g_7f4254
        call    FUN_00648fe0
        pop     ebp
L_6487cf:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
