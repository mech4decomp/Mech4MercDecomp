/*
 * FUN_005c25a0 (492 B) — __thiscall (ECX = this), RET 0x8 (2 stack args).
 * Vector/array management loop with FPU double-arg calls and several
 * helper calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005cbe00(int a, int b, int c, int d, int e);
extern void __cdecl FUN_004084d0(int a);
extern void __cdecl FUN_005cc0c0(int a, int b, int c, int d);
extern void __cdecl FUN_005cbbc0(int a, void *b);
extern void __cdecl FUN_005cb460(int a, int b);
extern void __cdecl FUN_005c8f30(int a, int b, double c, double d);
extern char __cdecl FUN_00683050(void *a, int b, double c, double d);
extern void __cdecl FUN_005fbb00(void *a);
extern char __cdecl FUN_00683120(void *a, void *b);
extern void __cdecl FUN_005c8610(int a);
extern void __cdecl FUN_00683240(void *a, int b);

__declspec(naked) void func_005c25a0(void)
{
    __asm {
        sub     esp, 0x30
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x44]
        mov     edx, dword ptr [esi + 0x688]
        mov     eax, dword ptr [esi + 0x68c]
        push    0x0
        push    ecx
        push    edx
        push    eax
        push    eax
        mov     dword ptr [esp + 0x2c], esi
        call    FUN_005cbe00
        mov     dword ptr [esi + 0x68c], eax
        mov     eax, dword ptr [esi + 0x170]
        mov     ebp, dword ptr [eax + 0x3f8]
        add     esp, 0x14
        add     eax, 0x3f8
        mov     dword ptr [esp + 0x30], ebp
        mov     dword ptr [esp + 0x14], 0x0
    l_25ee:
        test    ebp, ebp
        jz      l_2600
        mov     eax, dword ptr [ebp + 0x4]
        mov     edx, dword ptr [ebp]
        mov     dword ptr [esp + 0x30], eax
        mov     ebp, eax
        jmp     l_2602
    l_2600:
        xor     edx, edx
    l_2602:
        test    edx, edx
        mov     dword ptr [esp + 0x14], edx
        jz      l_26ed
        mov     edi, dword ptr [esi + 0x68c]
        lea     eax, [esi + 0x688]
        mov     ebx, dword ptr [eax + 0x8]
        cmp     edi, ebx
        lea     ecx, [eax + 0x8]
        mov     dword ptr [esp + 0x20], ecx
        jz      l_2636
        test    edi, edi
        jz      l_262e
        mov     dword ptr [edi], edx
    l_262e:
        add     edi, 0x4
        mov     dword ptr [eax + 0x4], edi
        jmp     l_25ee
    l_2636:
        mov     esi, dword ptr [eax]
        mov     eax, edi
        sub     eax, esi
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x10], 0x1
        mov     dword ptr [esp + 0x1c], eax
        lea     ecx, [esp + 0x10]
        jc      l_2658
        lea     ecx, [esp + 0x1c]
    l_2658:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x1c], ecx
        jz      l_2674
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], eax
        jmp     l_267c
    l_2674:
        mov     dword ptr [esp + 0x10], 0x0
    l_267c:
        mov     edx, dword ptr [esp + 0x44]
        mov     eax, dword ptr [esp + 0x10]
        push    edx
        push    eax
        push    edi
        push    esi
        call    FUN_005cc0c0
        lea     ecx, [esp + 0x24]
        mov     ebp, eax
        push    ecx
        push    ebp
        call    FUN_005cbbc0
        mov     edx, dword ptr [esp + 0x5c]
        push    edx
        add     ebp, 0x4
        push    ebp
        push    edi
        push    edi
        call    FUN_005cc0c0
        sub     ebx, esi
        add     esp, 0x28
        sar     ebx, 0x2
        push    ebx
        push    esi
        mov     dword ptr [esp + 0x2c], esi
        mov     esi, dword ptr [esp + 0x28]
        mov     ecx, esi
        mov     edi, eax
        call    FUN_005cb460
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [esp + 0x30]
        add     eax, 0x688
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 0x4], edi
        lea     eax, [ecx + edx*4]
        mov     dword ptr [esi], eax
        mov     esi, dword ptr [esp + 0x18]
        jmp     l_25ee
    l_26ed:
        fld     dword ptr [esi + 0x52c]
        mov     ecx, dword ptr [esp + 0x44]
        mov     ebx, dword ptr [esp + 0x48]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [esi + 0x528]
        fstp    qword ptr [esp]
        push    ecx
        push    ebx
        mov     ecx, esi
        call    FUN_005c8f30
        lea     edi, [esi + 0x688]
        push    eax
        push    edi
        call    FUN_00683050
        add     esp, 0x18
        test    al, al
        jnz     l_2734
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret     0x8
    l_2734:
        lea     edx, [esp + 0x28]
        push    edx
        mov     ecx, ebx
        call    FUN_005fbb00
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x34], ecx
        mov     edx, dword ptr [eax + 0x4]
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0x38], edx
        mov     eax, dword ptr [eax + 0x8]
        push    ecx
        push    edi
        mov     dword ptr [esp + 0x44], eax
        call    FUN_00683120
        add     esp, 0x8
        test    al, al
        jnz     l_2770
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret     0x8
    l_2770:
        push    ebx
        mov     ecx, esi
        call    FUN_005c8610
        push    eax
        push    edi
        call    FUN_00683240
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret     0x8
    }
}
