/*
 * FUN_004044e0 (157 B) — GetZMStatus-style dispatcher. __stdcall (RET 0xc).
 * Validates arg count, then dispatches on a status sub-command (1/2/3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b7e70;
extern int *g_0076b320;   /* IAT: strncpy */

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_006fcb30(void);
extern void __cdecl FUN_006fcb40(void);
extern void __cdecl FUN_006fcb20(void);
extern void __cdecl FUN_006fcb00(void);

__declspec(naked) void FUN_004044e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp+0xc]
        cmp     eax, 0x1
        jz      L1
        push    eax
        push    0x76babc
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L2
        int     3
L2:
        xor     eax, eax
        pop     ebp
        ret     0xc
L1:
        mov     eax, dword ptr [ebp+0x10]
        mov     eax, dword ptr [eax]
        dec     eax
        jz      L5
        dec     eax
        jz      L4
        dec     eax
        jz      L3
        or      eax, 0xffffffff
        pop     ebp
        ret     0xc
L3:
        push    esi
        call    FUN_006fcb30
        mov     esi, eax
        call    FUN_006fcb40
        test    eax, eax
        jz      L6
        mov     ecx, dword ptr [g_007b7e70]
        test    ecx, ecx
        jz      L7
        push    0xfe
        push    eax
        push    ecx
        call    dword ptr [g_0076b320]
        mov     ecx, dword ptr [g_007b7e70]
        add     esp, 0xc
        mov     eax, esi
        mov     byte ptr [ecx+0xff], 0x0
        pop     esi
        pop     ebp
        ret     0xc
L6:
        mov     eax, dword ptr [g_007b7e70]
        test    eax, eax
        jz      L7
        mov     byte ptr [eax], 0x0
L7:
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     0xc
L4:
        call    FUN_006fcb20
        pop     ebp
        ret     0xc
L5:
        call    FUN_006fcb00
        pop     ebp
        ret     0xc
    }
}
