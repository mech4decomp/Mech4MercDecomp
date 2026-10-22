/*
 * FUN_006a2ba0 (143 B) — __thiscall (ECX = this), RET 4 (one stack param).
 * Compares FUN_006a4b70 result against 0x00799d40 to set this+4, then
 * dispatches on FUN_006a22f0 result to FUN_00663900 / FUN_006651d0 and a
 * virtual call through this+8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_799d40;            /* 0x00799d40 */

extern float __cdecl FUN_006a4b70(int a, int b);
extern char __cdecl FUN_006a22f0(int a);
extern float __cdecl FUN_006a4b30(int a, int b);
extern void __cdecl FUN_00663900(int a, int b, int c);
extern void __cdecl FUN_006651d0(int a, int b);

__declspec(naked) void __stdcall FUN_006a2ba0(int param1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        push    0x43960000
        push    esi
        mov     edi, ecx
        call    FUN_006a4b70
        fcomp   dword ptr [g_799d40]
        add     esp, 0x8
        fnstsw  ax
        test    ah, 0x41
        jnz     l_c9
        mov     byte ptr [edi + 0x4], 0x1
        jmp     l_bcd
    l_c9:
        mov     byte ptr [edi + 0x4], 0x0
    l_bcd:
        push    esi
        call    FUN_006a22f0
        add     esp, 0x4
        cmp     al, 0x1
        jnz     l_c21
        push    0x40c00000
        push    esi
        call    FUN_006a4b30
        fcomp   dword ptr [g_799d40]
        add     esp, 0x8
        fnstsw  ax
        test    ah, 0x1
        jnz     l_c13
        push    0x1
        push    0x42c80000
        push    esi
        call    FUN_00663900
        mov     eax, dword ptr [edi + 0x8]
        add     esp, 0xc
        lea     ecx, [edi + 0x8]
        push    esi
        call    dword ptr [eax]
        pop     edi
        pop     esi
        ret     4
    l_c13:
        push    0x41000000
        push    esi
        call    FUN_006651d0
        add     esp, 0x8
    l_c21:
        mov     eax, dword ptr [edi + 0x8]
        lea     ecx, [edi + 0x8]
        push    esi
        call    dword ptr [eax]
        pop     edi
        pop     esi
        ret     4
    }
}
