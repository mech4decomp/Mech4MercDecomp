/*
 * FUN_0042ab80 (328 B) — __thiscall MLRProjectLight constructor
 * (name-based variant). Sets vtable 0x76e0d8, resolves a light-map
 * material by name via the material manager, allocates/refcounts a
 * 0x24-byte object, and initializes light parameters.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b96cc;
extern int g_007da848;
extern void * __cdecl FUN_004084d0(int);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_00482050(int, int, int);
extern void __cdecl FUN_00412a00(int, char **);
extern void * __cdecl FUN_0048fac0(char *, int);
extern void * __cdecl FUN_0048f380(char *, int);
extern void * __cdecl FUN_00422ea0(void *);
extern void __cdecl FUN_0042b750(void *);
extern void __cdecl FUN_00419ea0(void *);
extern void __cdecl FUN_0042af60(void);

__declspec(naked) void FUN_0042ab80(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_007b96cc]
        push    ebx
        mov     ebx, dword ptr [esp+0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x18]
        push    edi
        push    ebx
        mov     esi, ecx
        push    eax
        call    FUN_00482050
        cmp     edi, 0x7
        mov     dword ptr [esi], 0x76e0d8
        mov     dword ptr [esi+0xa8], 0
        jle     L_skip
        lea     ecx, [esp+0x18]
        push    ecx
        push    ebx
        mov     dword ptr [esp+0x20], 0
        call    FUN_00412a00
        mov     edx, dword ptr [esp+0x20]
        add     esp, 0x8
        test    edx, edx
        jz      L_skip
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp+0xc], ecx
        jz      L_free
        mov     ecx, dword ptr [g_007da848]
        push    eax
        push    edx
        call    FUN_0048fac0
        mov     edi, eax
        test    edi, edi
        jnz     L_alloc
        mov     edx, dword ptr [esp+0x18]
        mov     ecx, dword ptr [g_007da848]
        push    eax
        push    edx
        call    FUN_0048f380
        mov     edi, eax
L_alloc:
        push    0x24
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_zero
        push    edi
        mov     ecx, eax
        call    FUN_00422ea0
        jmp     L_store
L_zero:
        xor     eax, eax
L_store:
        inc     dword ptr [eax+0x8]
        mov     edx, dword ptr [esp+0x18]
        mov     dword ptr [esi+0xa8], eax
        or      dword ptr [esi+0x78], 0x40
L_free:
        test    edx, edx
        jz      L_skip
        mov     cl, byte ptr [edx-1]
        lea     eax, [edx-1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_skip
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_skip:
        mov     eax, dword ptr [ebx]
        push    0x4
        lea     ecx, [esp+0x18]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax+0x20]
        lea     edx, [esp+0x14]
        push    edx
        mov     ecx, esi
        call    FUN_0042b750
        push    0x7b8da8
        lea     ecx, [esi+0xf8]
        call    FUN_00419ea0
        mov     ecx, 0xbd4ccccd
        mov     eax, 0x3d4ccccd
        mov     dword ptr [esi+0x8c], ecx
        mov     dword ptr [esi+0x94], ecx
        mov     ecx, esi
        mov     dword ptr [esi+0x90], eax
        mov     dword ptr [esi+0x98], eax
        mov     dword ptr [esi+0x9c], 0x3dcccccd
        mov     dword ptr [esi+0xa0], 0x3ff33333
        mov     dword ptr [esi+0xa4], 0xbf800000
        call    FUN_0042af60
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x8
    }
}
