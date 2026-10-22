/*
 * FUN_007008e0 (681 B) — __thiscall (ECX = this, RET 0x10, 4 stack params).
 *
 * Registers a game session: enters a critical section, writes session
 * properties (MaxPlayers, PasswordProtected, Instance, GameVersion,
 * MapType, Flags, GameType) through a vtable-dispatched object, and
 * adds a player. Uses IAT imports and absolute data globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007006a0(void);
extern double __cdecl FUN_00707e90(void);
extern void *__cdecl FUN_0073e160(int);
extern int  __cdecl FUN_006fabf0(const char *fmt, ...);

extern void *g_76b110;   /* EnterCriticalSection IAT */
extern void *g_76b294;   /* malloc               IAT */
extern void *g_76b3e8;   /* mbstowcs             IAT */
extern void *g_76b2d0;   /* free                 IAT */
extern void *g_76b374;   /* _itow                IAT */
extern void *g_76b420;   /* sprintf              IAT */
extern void *g_76b318;   /* atoi                 IAT */
extern void *g_76b100;   /* LeaveCriticalSection IAT */

extern int g_856838;
extern int g_856860;
extern int g_858924;
extern int g_8aaabc;
extern int g_8589cc;
extern int g_856844;

__declspec(naked) char __stdcall FUN_007008e0(void *a, void *b, void *c, void *d)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x350
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        call    FUN_007006a0
        push    0x8aaa20
        call    dword ptr [g_76b110]
        mov     dword ptr [g_856838], 0x1
        call    FUN_00707e90
        fstp    qword ptr [ebx + 0x218]
        mov     edi, dword ptr [ebp + 0x8]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        lea     esi, [ecx + 0x1]
        lea     eax, [esi + esi*0x1]
        push    eax
        call    dword ptr [g_76b294]
        mov     ecx, dword ptr [ebp + 0x8]
        push    esi
        mov     esi, dword ptr [g_76b3e8]
        mov     edi, eax
        push    ecx
        push    edi
        call    esi
        mov     edx, dword ptr [g_856860]
        mov     eax, dword ptr [edx + 0x1c]
        mov     ecx, dword ptr [eax]
        add     esp, 0x10
        push    edi
        push    eax
        call    dword ptr [ecx + 0xc]
        push    edi
        call    dword ptr [g_76b2d0]
        mov     eax, dword ptr [ebp + 0xc]
        push    0xa
        lea     edx, [ebp + -0x50]
        push    edx
        push    eax
        call    dword ptr [g_76b374]
        mov     ecx, dword ptr [g_856860]
        mov     eax, dword ptr [ecx + 0x1c]
        mov     edx, dword ptr [eax]
        add     esp, 0x10
        lea     ecx, [ebp + -0x50]
        push    ecx
        push    0x79fa60
        push    0x0
        push    eax
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        jz      L_9a2
        cmp     byte ptr [eax], 0x0
        jz      L_9a2
        mov     edx, dword ptr [g_856860]
        mov     eax, dword ptr [edx + 0x1c]
        mov     ecx, dword ptr [eax]
        push    0x7a115c
        jmp     L_9b2
L_9a2:
        mov     edx, dword ptr [g_856860]
        mov     eax, dword ptr [edx + 0x1c]
        mov     ecx, dword ptr [eax]
        push    0x7a1154
L_9b2:
        push    0x79fa34
        push    0x0
        push    eax
        call    dword ptr [ecx + 0x24]
        mov     eax, dword ptr [ebp + 0x14]
        xor     edx, edx
        mov     dl, byte ptr [eax + 0xf]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0xe]
        push    edx
        xor     edx, edx
        mov     dl, byte ptr [eax + 0xd]
        push    ecx
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0xc]
        push    edx
        xor     edx, edx
        mov     dl, byte ptr [eax + 0xb]
        push    ecx
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0xa]
        push    edx
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x9]
        push    ecx
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x8]
        push    edx
        xor     edx, edx
        mov     dx, word ptr [eax + 0x6]
        push    ecx
        xor     ecx, ecx
        mov     cx, word ptr [eax + 0x4]
        push    edx
        mov     edx, dword ptr [eax]
        lea     eax, [ebp + 0xfffffeb0]
        push    ecx
        push    edx
        push    0x7a1120
        push    eax
        call    dword ptr [g_76b420]
        push    0x100
        lea     ecx, [ebp + 0xfffffeb0]
        push    ecx
        lea     edx, [ebp + 0xfffffcb0]
        push    edx
        call    esi
        mov     eax, dword ptr [g_856860]
        mov     eax, dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [eax]
        add     esp, 0x40
        lea     edx, [ebp + 0xfffffcb0]
        push    edx
        push    0x79fa78
        push    0x0
        push    eax
        call    dword ptr [ecx + 0x24]
        mov     eax, dword ptr [g_858924]
        push    0x14
        push    eax
        lea     ecx, [ebp + -0x28]
        push    ecx
        call    esi
        mov     edx, dword ptr [g_856860]
        mov     eax, dword ptr [edx + 0x1c]
        mov     ecx, dword ptr [eax]
        add     esp, 0xc
        lea     edx, [ebp + -0x28]
        push    edx
        push    0x79fa48
        push    0x0
        push    eax
        call    dword ptr [ecx + 0x24]
        mov     eax, dword ptr [g_856860]
        mov     eax, dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [eax]
        push    0x7a111c
        push    0x79fa2c
        push    0x0
        push    eax
        call    dword ptr [ecx + 0x24]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     esi, [ebx + 0x229]
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        lea     eax, [ecx + 0x1]
        lea     edx, [eax + eax*0x1]
        push    edx
        mov     dword ptr [ebp + 0x8], eax
        call    dword ptr [g_76b294]
        mov     edi, eax
        mov     eax, dword ptr [ebp + 0x8]
        push    eax
        push    esi
        push    edi
        call    dword ptr [g_76b3e8]
        mov     ecx, dword ptr [g_856860]
        mov     eax, dword ptr [ecx + 0x1c]
        mov     edx, dword ptr [eax]
        add     esp, 0x10
        push    edi
        push    0x79fae0
        push    0x0
        push    eax
        call    dword ptr [edx + 0x24]
        push    edi
        call    dword ptr [g_76b2d0]
        mov     eax, dword ptr [g_856860]
        mov     eax, dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [eax]
        add     esp, 0x4
        push    0x7a1118
        push    0x79fa6c
        push    0x0
        push    eax
        call    dword ptr [ecx + 0x24]
        push    esi
        call    dword ptr [g_76b318]
        add     esp, 0x4
        test    ah, 0x1
        jnz     L_b43
        mov     edx, dword ptr [g_856860]
        mov     eax, dword ptr [edx + 0x1c]
        mov     edx, dword ptr [g_8aaabc]
        mov     ecx, dword ptr [eax]
        add     ebx, 0x18
        push    ebx
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        test    esi, esi
        jge     L_b43
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a10ec
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_b43
        int     3
L_b43:
        mov     eax, dword ptr [g_856860]
        mov     edx, dword ptr [g_8589cc]
        mov     eax, dword ptr [eax + 0x8]
        mov     ecx, dword ptr [eax]
        push    0x8fc
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        cmp     eax, 0x8000000a
        pop     edi
        pop     esi
        pop     ebx
        jz      L_b76
        mov     dword ptr [g_856838], 0x2
        mov     dword ptr [g_856844], eax
L_b76:
        push    0x8aaa20
        call    dword ptr [g_76b100]
        mov     al, 0x1
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
