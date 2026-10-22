/*
 * FUN_004C28D0 (255 B) - MLR node sphere-intersection gather (thiscall, RET 0x8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_00415230(void *p);

extern int g_7daa0c;
extern float g_7b220c;
extern int g_7da6a4;
extern int g_7b37f8;

__declspec(naked) void __fastcall FUN_004c28d0(void)
{
    __asm {
        sub     esp, 0x20
        mov     eax, dword ptr [g_7daa0c]
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x8], ecx
        jz      l_continue
        xor     eax, eax
        pop     ebx
        add     esp, 0x20
        ret     0x8
    l_continue:
        mov     eax, dword ptr [ecx + 0xfc]
        mov     edx, dword ptr [ecx + 0x10c]
        push    ebp
        mov     ebp, dword ptr [esp + 0x30]
        push    esi
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [ecx + 0x11c]
        push    edi
        mov     edi, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x10], ebx
    l_loop:
        mov     esi, dword ptr [ebp]
        test    esi, esi
        jz      l_done
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [g_7b220c]
        fnstsw  ax
        __emit  0xF6        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit  0xC4
        __emit  0x01
        jnz     l_next
        mov     eax, dword ptr [g_7da6a4]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      l_store
        fld     dword ptr [esi + 0x24]
        mov     ecx, dword ptr [esi + 0x34]
        fsubr   dword ptr [esp + 0x18]
        mov     edx, dword ptr [esi + 0x44]
        fld     dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x28], ecx
        fsub    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x2c], edx
        fsub    dword ptr [esp + 0x2c]
        fld     dword ptr [esi + 0x84]
        fadd    dword ptr [eax + 0x12c]
        fld     st(1)
        fmul    st(0), st(2)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fld     st(4)
        fmul    st(0), st(5)
        faddp   st(1), st(0)
        fld     st(1)
        fmul    st(0), st(2)
        fcompp
        fstp    st(0)
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        __emit  0xF6        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit  0xC4
        __emit  0x41
        fstp    st(0)
        jnz     l_check
    l_store:
        mov     dword ptr [edi], esi
        inc     ebx
        add     edi, 0x4
    l_check:
        cmp     ebx, dword ptr [g_7b37f8]
        jge     l_done
    l_next:
        mov     eax, dword ptr [esp + 0x10]
        inc     eax
        add     ebp, 0x4
        cmp     eax, 0x8
        mov     dword ptr [esp + 0x10], eax
        jl      l_loop
    l_done:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x20
        ret     0x8
    }
}
