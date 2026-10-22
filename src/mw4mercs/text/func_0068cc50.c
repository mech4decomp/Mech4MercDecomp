/*
 * FUN_0068cc50 (458 B) — __thiscall HUD element list builder. Calls a
 * virtual method (offset 0x20) on a container, grows a 0x18-byte-element
 * array (realloc via FUN_004084d0), and copies elements with rep movsd.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2464;

extern void FUN_0068d530(void *a, void *b);
extern void FUN_006f4950(int a);
extern int FUN_0068d590(int a, int b, int c, int d, int e);
extern void *__cdecl FUN_004084d0(int n);
extern int FUN_0068d5d0(int a, int b, int c, int d);
extern void FUN_0068d570(int a, void *b);
extern void FUN_0068d550(int a, int b);
extern void FUN_006f49a0(void);

__declspec(naked) void FUN_0068cc50(void)
{
    __asm {
        sub     esp, 0x34
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        lea     eax, [esp + 0x14]
        xor     edi, edi
        push    eax
        lea     edx, [esp + 0x13]
        lea     ecx, [ebx + 0x8]
        push    edx
        mov     dword ptr [ebx], edi
        mov     dword ptr [ebx + 0x4], edi
        mov     dword ptr [esp + 0x1c], edi
        call    FUN_0068d530
        mov     eax, dword ptr [g_007f2464]
        push    eax
        call    FUN_006f4950
        mov     ecx, dword ptr [esp + 0x44]
        mov     edx, dword ptr [ebx]
        mov     eax, dword ptr [ebx + 0x4]
        push    edi
        push    ecx
        push    edx
        push    eax
        push    eax
        call    FUN_0068d590
        mov     esi, dword ptr [esp + 0x58]
        add     esp, 0x14
        push    0x4
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [ebx + 0x4], eax
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        cmp     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x14], edi
        jle     L_end
        push    ebp
        jmp     L_loop
L_xor:
        xor     edi, edi
L_loop:
        mov     edx, dword ptr [esi]
        push    0x18
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x40], 0x0
        mov     dword ptr [esp + 0x3c], 0x0
        mov     dword ptr [esp + 0x38], 0x0
        mov     dword ptr [esp + 0x34], 0x0
        mov     dword ptr [esp + 0x44], 0xffffffff
        mov     byte ptr [esp + 0x48], 0x0
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebx + 0x8]
        mov     ebp, dword ptr [ebx + 0x4]
        cmp     ebp, eax
        mov     byte ptr [esp + 0x40], 0x1
        mov     dword ptr [esp + 0x24], eax
        jz      L_grow
        cmp     ebp, edi
        jz      L_skipcopy
        mov     ecx, 0x6
        lea     esi, [esp + 0x2c]
        mov     edi, ebp
        rep movsd
        mov     esi, dword ptr [esp + 0x48]
L_skipcopy:
        add     ebp, 0x18
        mov     dword ptr [ebx + 0x4], ebp
        jmp     L_cont
L_grow:
        mov     esi, dword ptr [ebx]
        mov     ecx, ebp
        sub     ecx, esi
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        cmp     edx, 0x1
        mov     dword ptr [esp + 0x14], 0x1
        mov     dword ptr [esp + 0x20], edx
        lea     eax, [esp + 0x14]
        jc      L_sel
        lea     eax, [esp + 0x20]
L_sel:
        mov     eax, dword ptr [eax]
        add     eax, edx
        mov     dword ptr [esp + 0x20], eax
        jz      L_zero
        lea     edx, [eax + eax*0x2]
        shl     edx, 0x3
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x14], eax
        jmp     L_alloc
L_zero:
        mov     dword ptr [esp + 0x14], edi
L_alloc:
        mov     eax, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    ebp
        push    esi
        call    FUN_0068d5d0
        lea     edx, [esp + 0x3c]
        mov     edi, eax
        push    edx
        push    edi
        call    FUN_0068d570
        mov     eax, dword ptr [esp + 0x60]
        push    eax
        add     edi, 0x18
        push    edi
        push    ebp
        push    ebp
        call    FUN_0068d5d0
        mov     edi, eax
        mov     eax, dword ptr [esp + 0x4c]
        sub     eax, esi
        mov     ecx, eax
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     esp, 0x28
        add     edx, ecx
        push    edx
        push    esi
        mov     dword ptr [esp + 0x30], esi
        lea     esi, [ebx + 0x8]
        mov     ecx, esi
        call    FUN_0068d550
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x20]
        lea     edx, [ecx + ecx*0x2]
        mov     dword ptr [ebx], eax
        lea     eax, [eax + edx*0x8]
        mov     dword ptr [esi], eax
        mov     esi, dword ptr [esp + 0x48]
        mov     dword ptr [ebx + 0x4], edi
L_cont:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        jl      L_xor
        pop     ebp
L_end:
        call    FUN_006f49a0
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 0x34
        ret     0x4
    }
}
