/*
 * FUN_0068e8f0 (142 B) — __thiscall (ECX = this), RET 0x10 (4 stack params).
 * Allocates a buffer sized by (this+0x20 - this+0x1c)>>2, dereferences each
 * source pointer into it (0xffffffff for null), then calls FUN_0068d8a0 if
 * any non-null was found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f2464;              /* 0x007f2464 */

extern void __cdecl FUN_005d80b0(void);
extern void __cdecl FUN_006f4950(int a);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0068d8a0(int a, int b, int c, int d, int e, int f);

__declspec(naked) void __stdcall FUN_0068e8f0(int p1, int p2, int p3, int p4)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_005d80b0
        mov     eax, dword ptr [g_7f2464]
        push    eax
        xor     bl, bl
        call    FUN_006f4950
        mov     ecx, dword ptr [esi + 0x20]
        sub     ecx, dword ptr [esi + 0x1c]
        sar     ecx, 0x2
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebp, eax
        call    FUN_006f49a0
        mov     ecx, dword ptr [esi + 0x20]
        mov     edi, dword ptr [esi + 0x1c]
        sub     ecx, edi
        sar     ecx, 0x2
        test    ecx, ecx
        jle     l_done
        mov     eax, ebp
        sub     edi, ebp
        mov     edx, ecx
    l_loop:
        cmp     dword ptr [edi + eax], 0x0
        jz      l_null
        mov     ebx, dword ptr [edi + eax]
        mov     ebx, dword ptr [ebx]
        mov     dword ptr [eax], ebx
        mov     bl, 0x1
        jmp     l_next
    l_null:
        mov     dword ptr [eax], 0xffffffff
    l_next:
        add     eax, 0x4
        dec     edx
        jnz     l_loop
        test    bl, bl
        jz      l_done
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        push    edx
        mov     edx, dword ptr [esp + 0x1c]
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        push    ecx
        push    ebp
        mov     ecx, esi
        call    FUN_0068d8a0
    l_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    }
}
