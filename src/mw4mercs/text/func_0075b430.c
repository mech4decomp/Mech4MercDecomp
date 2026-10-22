/*
 * FUN_0075b430 (97 B) — Virtual dispatch wrapper with FPU scaling.
 * Calls vtable method +0x14 of *param0 with 3 args; on negative result,
 * scales two int64 params by double 0x007af400 and calls FUN_0073E160 /
 * FUN_006FABF0, trapping (int 3) on failure.
 *
 * NOTE: Ghidra produced no disassembly; the full body was recovered
 * from the raw reference bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_7af400;   /* 0x007af400 scale factor */

extern void __cdecl FUN_0073E160(void *a, void *b);
extern void __cdecl FUN_006FABF0(void *a, void *b, void *c);

__declspec(naked) void FUN_0075b430(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0xC]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 8]
        mov     eax, dword ptr [edi]
        push    ebx
        push    ecx
        push    edi
        call    dword ptr [eax + 0x14]
        mov     esi, eax
        test    esi, esi
        jge     LB488
        fild    qword ptr [ebx]
        mov     edx, dword ptr [ebp + 0xC]
        sub     esp, 8
        sub     esp, 8
        fmul    qword ptr [g_7af400]
        fstp    qword ptr [esp + 8]
        fild    qword ptr [edx]
        fmul    qword ptr [g_7af400]
        fstp    qword ptr [esp]
        push    edi
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x007af5a4
        call    FUN_006FABF0
        add     esp, 0x20
        test    eax, eax
        jz      LB488
        int     3
LB488:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xC
    }
}
