/*
 * FUN_005fd730 (309 B) — __thiscall mission/weapon init (RET 4).
 *
 * Calls FUN_005fd700() teardown, FUN_00600960(), FUN_00659b70().
 * If this->[0x1f8] string is empty, zeroes [0x278]/[0x27c] and returns 1.
 * Otherwise copies the string to a stack buffer, calls FUN_0061c960()
 * (6 args), allocates a 0x40-byte object via FUN_004084d0, initializes
 * it, stores it at this->[0x27c], calls FUN_0064aff0() (thiscall), and
 * on failure asserts via FUN_006fab90 + int3. Finally calls
 * FUN_0064b7b0("MW4Mission") and returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005fd700(void);
extern void FUN_00600960(void);
extern void FUN_00659b70(void);
extern int __cdecl FUN_0061c960(void *a, void *b, void *c, void *d, void *e, void *f);
extern void *__cdecl FUN_004084d0(int n);
extern void FUN_0064aff0(void);
extern int __cdecl FUN_006fab90(void *p);
extern void __cdecl FUN_0064b7b0(void *p);
extern char g_788314[];
extern char g_78aee4[];

__declspec(naked) void __stdcall FUN_005fd730(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x84
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        call    FUN_005fd700
        mov     ecx, ebx
        call    FUN_00600960
        call    FUN_00659b70
        mov     al, byte ptr [ebx + 0x1f8]
        lea     edi, [ebx + 0x1f8]
        xor     edx, edx
        test    al, al
        mov     dword ptr [ebx + 0x27c], edx
        mov     byte ptr [ebx + 0x168], 1
        jz      L_84b
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        lea     esi, [ebp - 0x84]
        mov     dword ptr [ebp - 4], esi
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [ebp - 4]
        rep     movsd
        push    edx
        push    edx
        mov     ecx, eax
        push    edx
        and     ecx, 3
        push    edx
        rep     movsb
        mov     ecx, dword ptr [ebp + 8]
        push    ecx
        lea     edx, [ebp - 0x84]
        push    edx
        call    FUN_0061c960
        mov     esi, eax
        xor     edi, edi
        add     esp, 0x18
        cmp     esi, edi
        mov     dword ptr [ebx + 0x278], esi
        jge     L_7c9
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
L_7c9:
        push    0x40
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      L_80a
        mov     dword ptr [eax], 0xffffffff
        mov     byte ptr [eax + 4], 0
        mov     dword ptr [eax + 0x20], 0xffffffff
        mov     dword ptr [eax + 0x24], edi
        mov     byte ptr [eax + 0x2c], 0
        mov     dword ptr [eax + 0x30], edi
        mov     dword ptr [eax + 0x34], edi
        mov     dword ptr [eax + 0x38], edi
        mov     byte ptr [eax + 0x3c], 0
        mov     byte ptr [eax + 0x3d], 0
        mov     byte ptr [eax + 0x3e], 0
        mov     byte ptr [eax + 0x3f], 0
        jmp     L_80c
L_80a:
        xor     eax, eax
L_80c:
        push    esi
        mov     ecx, eax
        mov     dword ptr [ebx + 0x27c], eax
        call    FUN_0064aff0
        test    eax, eax
        jz      L_830
        push    offset g_788314
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_830
        int     3
L_830:
        mov     ecx, dword ptr [ebx + 0x27c]
        push    offset g_78aee4
        call    FUN_0064b7b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
L_84b:
        mov     byte ptr [edi], 0
        pop     edi
        pop     esi
        mov     dword ptr [ebx + 0x278], edx
        mov     dword ptr [ebx + 0x27c], edx
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
