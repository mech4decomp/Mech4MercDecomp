/*
 * FUN_006622e0 (203 B) — __thiscall, RET 0x4 (1 stack arg).
 *
 * Four-stage validation: calls vtable[0x90]/vtable[0x50] to get an int,
 * converts to float, and compares against FUN_00637a20(FUN_00637b40(k))
 * for k = 0x66,0x67,0x68,0x69. Returns 1 if all four comparisons pass,
 * else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_00637a20(void);

__declspec(naked) int __cdecl FUN_006622e0(int *param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x90]
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        push    0x66
        fstp    dword ptr [esp + 0xc]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      l_fail
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x90]
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        push    0x67
        fstp    dword ptr [esp + 0xc]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     l_fail
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x50]
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        push    0x68
        fstp    dword ptr [esp + 0xc]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      l_fail
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x50]
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        push    0x69
        fstp    dword ptr [esp + 0xc]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     l_fail
        mov     al, 1
        pop     esi
        ret     0x4
    l_fail:
        xor     al, al
        pop     esi
        ret     0x4
    }
}
