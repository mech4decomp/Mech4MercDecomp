/*
 * FUN_00529770 (476 B) — Joystick calibration data processor.
 *
 * Processes calibration data from a global XOR-encrypted table, iterates
 * through entries, calls helper functions, and returns a count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_0052e150(int a);
extern void __stdcall FUN_006f8f80(int a, int b, int c);
extern int __stdcall FUN_005475f0(int a);
extern int __stdcall FUN_00547640(int a);
extern int __stdcall FUN_00529ed0(int a);
extern int __stdcall FUN_00529950(int a, int b, int c, int d, int e, int f, int g);
extern int __stdcall FUN_005436f0(int a);
extern int __stdcall FUN_00543ec0(int a);
extern void __stdcall FUN_004084e0(void *ptr);

extern void *g_007dab44;   /* 0x007DAB44 */
extern void *g_007dab40;   /* 0x007DAB40 */
extern void *g_007db090;   /* 0x007DB090 */

__declspec(naked) int __stdcall FUN_00529770(int param_1, int param_2)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        sub     esp, 0x14
        push    edi
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0x0c]
        lea     eax, [ecx + 0x0c]
        xor     edx, 0x85739531
        mov     cl, byte ptr [edx + 0x16]
        test    cl, cl
        jnz     l_continue
        xor     eax, eax
        pop     edi
        add     esp, 0x14
        ret

    l_continue:
        push    ebx
        mov     ebx, dword ptr [eax]
        xor     ebx, 0x85739531
        push    ebp
        mov     ebp, dword ptr [ebx + 0x50]
        xor     eax, eax
        push    esi
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x10], eax
        jmp     l_outer_loop_entry

    l_outer_loop_top:
        mov     ebx, dword ptr [esp + 0x14]

    l_outer_loop_entry:
        xor     edi, edi
        lea     esi, [ebx + 0x205f35]

    l_inner_loop:
        mov     al, byte ptr [esi - 1]
        test    al, al
        jz      l_inner_next
        cmp     byte ptr [esi], 0
        jnz     l_inner_next
        lea     ecx, [esi - 0x211]
        call    FUN_0052e150
        push    1
        push    0
        lea     eax, [edi + 0x100]
        push    eax
        call    FUN_006f8f80

    l_inner_next:
        inc     edi
        add     esi, 0x22ac
        cmp     edi, 0x18
        jl      l_inner_loop

        mov     ecx, ebx
        call    FUN_005475f0
        mov     ecx, ebx
        call    FUN_00547640
        mov     eax, dword ptr [esp + 0x18]
        inc     eax
        cmp     eax, 0x14
        mov     dword ptr [esp + 0x18], eax
        jge     l_done

        xor     eax, eax
        lea     ecx, [ebx + 0x205f34]
        mov     edx, 0x18

    l_count_loop:
        cmp     byte ptr [ecx], 0
        jz      l_count_next
        inc     eax

    l_count_next:
        add     ecx, 0x22ac
        dec     edx
        jnz     l_count_loop

        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     edi, dword ptr [g_007dab40]
        mov     ebx, dword ptr [ebp + 0x370]
        xor     edx, edi
        mov     ecx, dword ptr [edx + 0x14]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x1800]
        mov     ecx, dword ptr [ebp + 0x10]
        add     eax, edx
        test    ecx, ecx
        jz      l_sub_only
        sub     ebx, eax
        inc     ebx
        jmp     l_check_ebx

    l_sub_only:
        sub     ebx, eax

    l_check_ebx:
        test    ebx, ebx
        jle     l_done_reload

        mov     eax, dword ptr [esp + 0x28]
        mov     edx, dword ptr [ebp + 0xe4]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x1c], 0
        mov     dword ptr [esp + 0x20], edx
        lea     esi, [eax + ecx * 4]
        sub     edi, eax

    l_process_loop:
        mov     ecx, dword ptr [esp + 0x20]
        or      eax, 0xffffffff
        test    ecx, ecx
        jz      l_no_lookup
        call    FUN_00529ed0
        test    eax, eax
        jl      l_done_reload
        lea     edx, [eax + eax * 4 + 15]
        shl     edx, 4
        mov     ecx, dword ptr [edx + ebp]
        lea     edx, [eax + eax * 4]
        shl     edx, 4
        mov     edx, dword ptr [edx + ebp + 0xf4]
        jmp     l_call_helper

    l_no_lookup:
        mov     ecx, dword ptr [ebp + 0x88]
        mov     edx, dword ptr [ebp + 0x8c]

    l_call_helper:
        push    9
        push    0
        push    edx
        push    ecx
        push    eax
        lea     eax, [edi + esi]
        push    eax
        push    esi
        call    FUN_00529950
        add     esp, 0x1c
        test    eax, eax
        jl      l_process_next
        inc     dword ptr [esp + 0x10]
        add     esi, 4

    l_process_next:
        cmp     dword ptr [esp + 0x10], 0x100
        jge     l_done_reload
        mov     eax, dword ptr [esp + 0x1c]
        inc     eax
        cmp     eax, ebx
        mov     dword ptr [esp + 0x1c], eax
        jl      l_process_loop
        jmp     l_outer_loop_top

    l_done_reload:
        mov     ebx, dword ptr [esp + 0x14]

    l_done:
        mov     ecx, ebx
        call    FUN_005436f0
        mov     ecx, ebx
        call    FUN_00543ec0
        mov     esi, eax
        test    esi, esi
        jz      l_return
        mov     eax, dword ptr [g_007db090]
        mov     edx, dword ptr [ebx]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x28]
        push    esi
        push    0
        push    0
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x30]
        push    esi
        call    FUN_004084e0
        add     esp, 4

    l_return:
        mov     eax, dword ptr [esp + 0x10]
        pop     esi
        pop     ebp
        pop     ebx
        pop     edi
        add     esp, 0x14
        ret
    }
}
