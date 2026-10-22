/*
 * FUN_00545DD0 (1232 B) — __thiscall, RET 4.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern int __stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004084e0(int ptr);
extern double __stdcall FUN_00707e70(int a);
extern int __stdcall FUN_0075db4a(void);
extern void __stdcall FUN_005481a0(int a, int b, int c, int d);
extern void __fastcall FUN_00547c00(int param_1);
extern void __fastcall FUN_00548120(int a, int b);
extern void __fastcall FUN_00547ee0(int a, int b, int c);

extern double DAT_0077b648;

__declspec(naked) void __fastcall FUN_00545dd0(void *this, int param_1)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x302c]
        mov     eax, dword ptr [esi + 0x50]
        xor     ebp, ebp
        sub     ecx, ebp
        push    edi
        jz      l_case0
        dec     ecx
        jnz     l_return
        mov     ecx, dword ptr [esp + 0x28]
        cmp     ecx, 3
        jl      l_low_prio
        mov     eax, dword ptr [esi + 0x3044]
        mov     dword ptr [esi + eax*4 + 0x3054], ecx
        mov     edx, dword ptr [esi + 0x3044]
        inc     edx
        mov     eax, edx
        mov     dword ptr [esi + 0x3044], edx
        mov     edx, dword ptr [esi + 0x3038]
        cmp     eax, edx
        jl      l_return
        mov     ebx, dword ptr [esi + 0x3034]
        mov     eax, dword ptr [esi + 0x3030]
        inc     ebx
        mov     ecx, ebx
        cmp     ecx, eax
        mov     dword ptr [esi + 0x3034], ebx
        jl      l_check_loop
        cmp     eax, -1
        jz      l_check_loop
        mov     al, byte ptr [esi + 0xc1]
        test    al, al
        jnz     l_return
        mov     edx, dword ptr [esi]
        push    ebp
        mov     ecx, esi
        mov     dword ptr [esi + 0xac], 2
        call    dword ptr [edx + 0x2c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     4
    l_check_loop:
        cmp     edx, ebp
        mov     dword ptr [esp + 0x14], ebp
        jle     l_done1
        lea     edi, [esi + 0x3054]
        mov     dword ptr [esp + 0x18], edi
    l_loop1:
        mov     ebp, dword ptr [edi]
        cmp     ebp, -1
        jle     l_loop1_cont
        push    8
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        test    ebx, ebx
        jz      l_alloc1_fail
        push    0
        mov     dword ptr [ebx], ebp
        call    FUN_00707e70
        fmul    qword ptr [DAT_0077b648]
        call    FUN_0075db4a
        mov     dword ptr [ebx + 4], eax
        mov     eax, ebx
        jmp     l_alloc1_done
    l_alloc1_fail:
        xor     eax, eax
    l_alloc1_done:
        mov     ebp, dword ptr [esi + 0x3068]
        mov     ebx, dword ptr [esi + 0x306c]
        cmp     ebp, ebx
        mov     dword ptr [esp + 0x10], eax
        jz      l_grow1
        test    ebp, ebp
        jz      l_skip_store1
        mov     dword ptr [ebp], eax
    l_skip_store1:
        add     ebp, 4
        mov     dword ptr [esi + 0x3068], ebp
        jmp     l_loop1_next
    l_grow1:
        mov     edi, dword ptr [esi + 0x3064]
        mov     eax, ebp
        sub     eax, edi
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x28], 1
        mov     dword ptr [esp + 0x1c], eax
        lea     ecx, [esp + 0x28]
        jc      l_choose1
        lea     ecx, [esp + 0x1c]
    l_choose1:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x1c], ecx
        jz      l_alloc_zero1
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esp + 0x28], eax
        jmp     l_alloc_done1
    l_alloc_zero1:
        mov     dword ptr [esp + 0x28], 0
    l_alloc_done1:
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x28]
        push    ecx
        push    edx
        push    ebp
        push    edi
        call    FUN_005481a0
        add     esp, 0x10
        test    eax, eax
        jz      l_skip_copy1
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax], ecx
    l_skip_copy1:
        mov     edx, dword ptr [esp + 0x28]
        push    edx
        add     eax, 4
        push    eax
        push    ebp
        push    ebp
        call    FUN_005481a0
        sub     ebx, edi
        add     esp, 0x10
        sar     ebx, 2
        push    ebx
        push    edi
        mov     dword ptr [esp + 0x28], edi
        lea     edi, [esi + 0x306c]
        mov     ecx, edi
        mov     ebp, eax
        call    FUN_00547c00
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x1c]
        lea     edx, [eax + ecx*4]
        mov     dword ptr [edi], edx
        mov     edi, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x3064], eax
        mov     dword ptr [esi + 0x3068], ebp
    l_loop1_next:
        mov     dword ptr [edi], 0xffffffff
    l_loop1_cont:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esi + 0x3038]
        inc     eax
        add     edi, 4
        cmp     eax, ecx
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], edi
        jl      l_loop1
        xor     ebp, ebp
    l_done1:
        pop     edi
        mov     dword ptr [esi + 0x3044], ebp
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     4
    l_low_prio:
        cmp     dword ptr [eax + 0x38], ebp
        jz      l_return
        mov     edi, dword ptr [eax + 0x3c]
        mov     edx, ecx
        imul    edx, edx, 0x22ac
        mov     edx, dword ptr [edx + esi + 0x205d30]
        mov     edx, dword ptr [edx + 0x4c8]
        cmp     edx, edi
        jge     l_return
        mov     eax, dword ptr [esi + 0x3040]
        mov     dword ptr [esi + eax*4 + 0x3048], ecx
        mov     edi, dword ptr [esi + 0x3040]
        mov     eax, dword ptr [esi + 0x303c]
        inc     edi
        mov     ecx, edi
        cmp     ecx, eax
        mov     dword ptr [esi + 0x3040], edi
        jl      l_return
        cmp     eax, ebp
        mov     dword ptr [esp + 0x14], ebp
        jle     l_done2
        lea     ebp, [esi + 0x3048]
        mov     dword ptr [esp + 0x10], ebp
    l_loop2:
        mov     ebx, dword ptr [ebp]
        cmp     ebx, -1
        jle     l_loop2_cont
        push    8
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        jz      l_alloc2_fail
        push    0
        mov     dword ptr [edi], ebx
        call    FUN_00707e70
        fmul    qword ptr [DAT_0077b648]
        call    FUN_0075db4a
        mov     dword ptr [edi + 4], eax
        mov     eax, edi
        jmp     l_alloc2_done
    l_alloc2_fail:
        xor     eax, eax
    l_alloc2_done:
        mov     edi, dword ptr [esi + 0x3068]
        cmp     edi, dword ptr [esi + 0x306c]
        mov     dword ptr [esp + 0x18], eax
        jz      l_grow2
        test    edi, edi
        jz      l_skip_store2
        mov     dword ptr [edi], eax
    l_skip_store2:
        add     edi, 4
        mov     dword ptr [esi + 0x3068], edi
        jmp     l_loop2_next
    l_grow2:
        mov     ebp, dword ptr [esi + 0x3064]
        mov     eax, edi
        sub     eax, ebp
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x28], 1
        mov     dword ptr [esp + 0x1c], eax
        lea     ecx, [esp + 0x28]
        jc      l_choose2
        lea     ecx, [esp + 0x1c]
    l_choose2:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x1c], ecx
        jz      l_alloc_zero2
        shl     ecx, 2
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esp + 0x28], eax
        jmp     l_alloc_done2
    l_alloc_zero2:
        mov     dword ptr [esp + 0x28], 0
    l_alloc_done2:
        cmp     ebp, edi
        mov     ebx, dword ptr [esp + 0x28]
        jz      l_skip_copy2a
    l_copy2_loop:
        push    ebp
        push    ebx
        call    FUN_00548120
        add     ebp, 4
        add     esp, 8
        add     ebx, 4
        cmp     ebp, edi
        jnz     l_copy2_loop
    l_skip_copy2a:
        test    ebx, ebx
        jz      l_skip_store2a
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [ebx], edx
    l_skip_store2a:
        add     ebx, 4
        cmp     edi, edi
        mov     ebp, ebx
        jz      l_skip_copy2b
        mov     ebx, edi
    l_copy2b_loop:
        push    ebx
        push    ebp
        call    FUN_00548120
        add     ebx, 4
        add     esp, 8
        add     ebp, 4
        cmp     ebx, edi
        jnz     l_copy2b_loop
    l_skip_copy2b:
        mov     eax, dword ptr [esi + 0x3064]
        test    eax, eax
        mov     dword ptr [esp + 0x20], eax
        jz      l_free_old2
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_free_old2:
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x1c]
        lea     edx, [eax + ecx*4]
        mov     dword ptr [esi + 0x3068], ebp
        mov     ebp, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x3064], eax
        mov     dword ptr [esi + 0x306c], edx
    l_loop2_next:
        mov     dword ptr [ebp], 0xffffffff
    l_loop2_cont:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esi + 0x303c]
        inc     eax
        add     ebp, 4
        cmp     eax, ecx
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], ebp
        jl      l_loop2
        xor     ebp, ebp
    l_done2:
        pop     edi
        mov     dword ptr [esi + 0x3040], ebp
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     4
    l_case0:
        mov     ecx, dword ptr [eax + 0x38]
        cmp     ecx, ebp
        mov     ebx, dword ptr [esp + 0x28]
        jz      l_skip_alloc3
        mov     edi, dword ptr [eax + 0x3c]
        mov     edx, ebx
        imul    edx, edx, 0x22ac
        mov     edx, dword ptr [edx + esi + 0x205d30]
        mov     edx, dword ptr [edx + 0x4c8]
        cmp     edx, edi
        jge     l_skip_alloc3
        push    8
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        cmp     edi, ebp
        jz      l_alloc3_fail
        push    ebp
        mov     dword ptr [edi], ebx
        call    FUN_00707e70
        fmul    qword ptr [DAT_0077b648]
        call    FUN_0075db4a
        mov     dword ptr [edi + 4], eax
        jmp     l_alloc3_done
    l_alloc3_fail:
        xor     edi, edi
    l_alloc3_done:
        mov     eax, dword ptr [esi + 0x3068]
        mov     ecx, dword ptr [esi + 0x306c]
        add     esi, 0x3064
        cmp     eax, ecx
        mov     dword ptr [esp + 0x28], edi
        jz      l_grow3
    l_shared_store:
        cmp     eax, ebp
        jz      l_skip_store3
        mov     dword ptr [eax], edi
    l_skip_store3:
        pop     edi
        add     eax, 4
        mov     dword ptr [esi + 4], eax
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     4
    l_grow3:
        push    1
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    eax
        mov     ecx, esi
        call    FUN_00547ee0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     4
    l_skip_alloc3:
        cmp     ecx, ebp
        jnz     l_return
        cmp     byte ptr [esi + 0x17], 1
        jnz     l_return
        push    8
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        cmp     edi, ebp
        jz      l_alloc4_fail
        push    ebp
        mov     dword ptr [edi], ebx
        call    FUN_00707e70
        fmul    qword ptr [DAT_0077b648]
        call    FUN_0075db4a
        mov     dword ptr [edi + 4], eax
        jmp     l_alloc4_done
    l_alloc4_fail:
        xor     edi, edi
    l_alloc4_done:
        mov     eax, dword ptr [esi + 0x3068]
        mov     ecx, dword ptr [esi + 0x306c]
        add     esi, 0x3064
        cmp     eax, ecx
        mov     dword ptr [esp + 0x28], edi
        jnz     l_shared_store
        push    1
        lea     edx, [esp + 0x2c]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00547ee0
    l_return:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     4
    }
}
