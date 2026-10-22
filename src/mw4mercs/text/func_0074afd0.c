/*
 * FUN_0074AFD0 (284 B) — List-processing routine.
 *
 * Walks a linked list at 0x8b7a20, and for each node (when two global
 * flags are clear) calls FUN_007355D0 with data from the node and global
 * config values. Frees each node via FUN_006F4230. Then handles a
 * secondary flush path.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_85895c;
extern int  g_8b7a20;
extern char g_85a1dc;
extern char g_87bc08;
extern int  g_85a214;
extern int  g_85a23c;
extern int  g_85a240;
extern int  g_85a234;

extern void __cdecl FUN_007355D0(void);
extern void __cdecl FUN_006F4230(void);

__declspec(naked) void __stdcall FUN_0074AFD0(void)
{
    __asm {
        mov     eax, [g_85895c]
        sub     esp, 0x10
        test    eax, eax
        jz      L_74b0e8
        push    esi
        mov     esi, dword ptr [g_8b7a20]
        test    esi, esi
        jz      L_74b087
L_74afef:
        mov     eax, dword ptr [esi]
        mov     [g_8b7a20], eax
        mov     al, [g_85a1dc]
        test    al, al
        jnz     L_74b073
        mov     al, [g_87bc08]
        test    al, al
        jnz     L_74b073
        mov     edx, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [esi + 0xc]
        push    0x0
        push    0x1000000
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [esp + 0xc], ecx
        mov     ecx, dword ptr [esi + 0x8]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_85a214]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, [g_85a23c]
        mov     dword ptr [esp + 0x14], ecx
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        call    FUN_007355D0
        test    byte ptr [g_85895c], 0x2
        jz      L_74b073
        mov     ecx, dword ptr [g_85a240]
        push    0x0
        push    0x1000000
        lea     eax, [esp + 0xc]
        push    eax
        mov     eax, [g_85a234]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        call    FUN_007355D0
L_74b073:
        push    esi
        call    FUN_006F4230
        mov     esi, dword ptr [g_8b7a20]
        test    esi, esi
        jnz     L_74afef
L_74b087:
        mov     al, [g_85a1dc]
        test    al, al
        mov     dword ptr [g_8b7a20], 0x0
        pop     esi
        jnz     L_74b0e8
        mov     al, [g_87bc08]
        test    al, al
        jz      L_74b0e8
        mov     ecx, dword ptr [g_85a23c]
        mov     edx, dword ptr [g_85a214]
        push    0x0
        push    0x1000000
        push    0x0
        push    ecx
        push    0x0
        push    edx
        call    FUN_007355D0
        test    byte ptr [g_85895c], 0x2
        jz      L_74b0e8
        mov     eax, [g_85a240]
        mov     ecx, dword ptr [g_85a234]
        push    0x0
        push    0x1000000
        push    0x0
        push    eax
        push    0x0
        push    ecx
        call    FUN_007355D0
L_74b0e8:
        add     esp, 0x10
        ret
    }
}
