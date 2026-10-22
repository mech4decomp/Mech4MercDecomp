/*
 * FUN_00545880 (387 B) — __thiscall, no return value.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __stdcall FUN_004084e0(int ptr);
extern int __fastcall FUN_004d6660(int param_1);
extern void __fastcall FUN_004ce190(int a, int b, int c, int d);
extern void __stdcall FUN_00548140(int a, int b, int c, int d, int e);
extern int __fastcall FUN_0041fd80(int param_1);
extern void __fastcall FUN_004da550(int param_1);
extern void __fastcall FUN_00545a40(int a, int b);
extern void __fastcall FUN_005462a0(int a, int b);

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db094;

__declspec(naked) void __fastcall FUN_00545880(void *this)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [DAT_007dab40]
        push    esi
        xor     eax, ebp
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax]
        mov     byte ptr [ecx + 0xb0], 1
        mov     ecx, eax
        call    dword ptr [edx + 0xa8]
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx]
        xor     ecx, 0x85739531
        call    FUN_004d6660
        lea     eax, [edi + 0x353c]
        xor     esi, esi
        mov     ebx, eax
    l_loop1:
        cmp     byte ptr [ebx], 0
        jz      l_loop1_next
        mov     eax, dword ptr [DAT_007db094]
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x28]
        cmp     esi, edx
        jz      l_loop1_next
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [DAT_007dab40]
        push    1
        push    0
        xor     edx, ecx
        mov     ecx, dword ptr [edx + 0x14]
        push    0x3b
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004ce190
    l_loop1_next:
        inc     esi
        add     ebx, 0x2038
        cmp     esi, 0xff
        jl      l_loop1
        mov     al, byte ptr [edi + 0x16]
        test    al, al
        jz      l_done
        mov     ebx, dword ptr [edi + 0x3064]
        cmp     ebx, dword ptr [edi + 0x3068]
        jz      l_check_flag2
        lea     ebp, [ebx + 4]
    l_loop2:
        mov     esi, dword ptr [edi + 0x3068]
        cmp     ebp, esi
        mov     eax, dword ptr [ebx]
        mov     dword ptr [esp + 0x10], eax
        jz      l_skip_call1
        mov     ecx, dword ptr [esp + 0x10]
        push    0
        push    ecx
        push    ebx
        push    esi
        push    ebp
        call    FUN_00548140
        add     esp, 0x14
    l_skip_call1:
        mov     edx, dword ptr [esp + 0x10]
        add     esi, -4
        push    edx
        mov     dword ptr [edi + 0x3068], esi
        call    FUN_004084e0
        mov     eax, esi
        add     esp, 4
        cmp     ebx, eax
        jnz     l_loop2
    l_check_flag2:
        mov     al, byte ptr [edi + 0x17]
        test    al, al
        jz      l_no_flag2
        xor     esi, esi
        lea     ebx, [edi + 0x353c]
    l_loop3:
        cmp     byte ptr [ebx], 0
        jz      l_loop3_next
        push    1
        push    esi
        mov     ecx, edi
        call    FUN_00545a40
    l_loop3_next:
        inc     esi
        add     ebx, 0x2038
        cmp     esi, 0xff
        jl      l_loop3
        xor     esi, esi
    l_loop4:
        push    1
        push    esi
        mov     ecx, edi
        call    FUN_005462a0
        inc     esi
        cmp     esi, 0x18
        jl      l_loop4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    l_no_flag2:
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ecx + 0x10]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        test    ecx, ecx
        jle     l_done
        mov     esi, dword ptr [eax + 0x18]
        add     esi, 0x14
        mov     edi, ecx
    l_loop5:
        mov     ecx, dword ptr [esi]
        call    FUN_0041fd80
        test    eax, eax
        jz      l_loop5_next
        mov     ecx, eax
        call    FUN_004da550
    l_loop5_next:
        add     esi, 0x1c
        dec     edi
        jnz     l_loop5
    l_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
