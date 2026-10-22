/*
 * FUN_0072be60 (422 B) — DirectInput device property setter with a
 * switch dispatch through a jump table (DAT_008825c8 case value).
 *
 * __stdcall, RET 4 (1 stack param). Calls through a set of function
 * pointers in .data (DAT_008aad3c/40/50/54/58/64/68) and the
 * assert/error-log helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0072c090(void *param);
extern void __cdecl FUN_00708450(void);
extern void __cdecl FUN_0072c970(void);
extern void __cdecl FUN_0072d050(void);

extern int  g_858bf8;
extern int  g_8825c0;
extern int  g_8825c8;
extern char g_8825e4;
extern char g_881854;
extern char g_8825dc;

extern char g_72c018[];   /* switch byte table */
extern int  g_72c008[];   /* switch jump table (data) */

extern void *g_8aad68;    /* fn ptr */
extern void *g_8aad3c;    /* fn ptr */
extern void *g_8aad50;    /* fn ptr */
extern void *g_8aad40;    /* fn ptr */
extern void *g_8aad54;    /* fn ptr */
extern void *g_8aad58;    /* fn ptr */
extern void *g_8aad64;    /* fn ptr */

__declspec(naked) void FUN_0072be60(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     bl, byte ptr [esp + 0xc]
        test    bl, bl
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        jz      L_be76
        push    esi
        call    FUN_0072c090
L_be76:
        mov     eax, dword ptr [g_858bf8]
        push    eax
        call    dword ptr [g_8aad68]
        mov     edi, eax
        test    edi, edi
        jz      L_bfff
        mov     eax, dword ptr [g_8825c0]
        test    eax, eax
        jz      L_be9f
        xor     bl, bl
        mov     byte ptr [esp + 0x14], bl
        mov     esi, dword ptr [esp + 0x14]
L_be9f:
        mov     ecx, dword ptr [g_8825c8]
        lea     eax, [ecx - 0x3a4]
        cmp     eax, 0x12
        ja      L_bfda
        xor     edx, edx
        mov     dl, byte ptr [eax + g_72c018]
        jmp     dword ptr [edx*4 + g_72c008]
L_bec3:
        mov     al, byte ptr [g_8825e4]
        test    al, al
        jnz     L_befa
        mov     eax, dword ptr [g_858bf8]
        push    0x70
        push    eax
        mov     byte ptr [g_8825e4], 1
        call    dword ptr [g_8aad3c]
        call    FUN_00708450
        mov     ecx, dword ptr [g_858bf8]
        push    0x70
        push    ecx
        call    dword ptr [g_8aad3c]
        call    FUN_00708450
L_befa:
        test    bl, bl
        mov     al, byte ptr [g_881854]
        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 0x14], 0
        jz      L_bf5f
        test    al, al
        jnz     L_bf2b
        mov     edx, dword ptr [g_858bf8]
        push    0x70
        push    edx
        call    dword ptr [g_8aad3c]
        call    FUN_00708450
L_bf2b:
        call    FUN_0072c970
        test    eax, eax
        jz      L_bfda
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        push    edi
        call    dword ptr [g_8aad50]
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0xc]
        push    edx
        or      eax, 1
        push    eax
        push    edi
        call    dword ptr [g_8aad40]
        jmp     L_bfda
L_bf5f:
        test    al, al
        jz      L_bfda
        call    FUN_0072c970
        test    eax, eax
        jnz     L_bf82
        mov     ecx, dword ptr [g_858bf8]
        push    0x70
        push    ecx
        call    dword ptr [g_8aad3c]
        call    FUN_00708450
        jmp     L_bfda
L_bf82:
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        call    dword ptr [g_8aad50]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0xc]
        push    ecx
        and     edx, 0xfffffffe
        push    edx
        push    edi
        call    dword ptr [g_8aad40]
        jmp     L_bfda
L_bfa9:
        test    bl, bl
        mov     al, byte ptr [g_8825dc]
        jz      L_bfb8
        test    al, al
        jz      L_bfbc
        jmp     L_bfda
L_bfb8:
        test    al, al
        jz      L_bfda
L_bfbc:
        mov     eax, dword ptr [g_858bf8]
        push    0x52
        push    eax
        call    dword ptr [g_8aad3c]
        jmp     L_bfda
L_bfcc:
        and     esi, 0xff
        push    esi
        push    edi
        call    dword ptr [g_8aad54]
L_bfda:
        push    edi
        call    dword ptr [g_8aad58]
        mov     edx, dword ptr [g_858bf8]
        test    eax, eax
        push    edi
        setnz   cl
        push    edx
        mov     byte ptr [g_8825dc], cl
        call    dword ptr [g_8aad64]
        call    FUN_0072d050
L_bfff:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
    }
}
