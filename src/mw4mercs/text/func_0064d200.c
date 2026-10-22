/*
 * FUN_0064d200 (158 B) — __cdecl. Bytecode interpreter loop over a
 * global instruction stream (DAT_00805918), dispatching through
 * FUN_0064db40 and accumulating into a global stack (DAT_0080592c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_00805908;
extern char *DAT_00805918;
extern int *DAT_0080592c;
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_00563060(int);

__declspec(naked) int __cdecl FUN_0064d200(void *param)
{
    __asm {
        cmp     dword ptr [DAT_00805908], 0xb
        jnz     l_ret1
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     ebx, 0x11
    l_loop:
        mov     eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     dword ptr [DAT_00805908], ecx
        mov     dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov     eax, dword ptr [DAT_0080592c]
        mov     esi, dword ptr [eax]
        sub     eax, 4
        test    esi, esi
        mov     dword ptr [DAT_0080592c], eax
        jl      l_alloc
        cmp     esi, dword ptr [edi + 0x18]
        jl      l_skip_alloc
    l_alloc:
        push    4
        call    FUN_00563060
        mov     eax, dword ptr [DAT_0080592c]
        add     esp, 4
    l_skip_alloc:
        mov     ecx, dword ptr [edi + 0x14]
        mov     edx, dword ptr [ecx + 0x8]
        imul    edx, esi
        add     dword ptr [eax], edx
        cmp     dword ptr [DAT_00805908], ebx
        jnz     l_cont
        mov     edi, ecx
        jmp     l_loop
    l_cont:
        mov     ecx, dword ptr [DAT_00805918]
        movsx   eax, byte ptr [ecx]
        inc     ecx
        cmp     eax, 0xb
        mov     dword ptr [DAT_00805908], eax
        mov     dword ptr [DAT_00805918], ecx
        jnz     l_ret2
        mov     edi, dword ptr [edi + 0x14]
        jmp     l_loop
    l_ret1:
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x14]
        ret
    l_ret2:
        mov     eax, dword ptr [edi + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
