/*
 * FUN_00640FA0 (96 B) — __thiscall (ECX = this), RET 4.
 *
 * Looks up an entry via FUN_00561DF0, compares against this, and if
 * needed builds a small stack frame and calls FUN_00561A30 /
 * FUN_005619F0. Returns the resolved pointer + 0x14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00561df0(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_005619f0(void);

__declspec(naked) int __fastcall FUN_00640fa0(void *this, int param)
{
    __asm {
        sub     esp, 0xc
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        push    edi
        lea     eax, [esp + 0xc]
        mov     esi, ecx
        push    eax
        call    FUN_00561df0
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [esi]
        mov     dword ptr [esp + 0x18], eax
        jz      l_skip
        mov     ecx, dword ptr [edi]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     l_done
    l_skip:
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x14], edx
        lea     edx, [esp + 0x20]
        mov     ecx, esp
        push    edx
        mov     dword ptr [esp + 0x1c], 0
        call    FUN_00561a30
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, esi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
    l_done:
        pop     edi
        add     eax, 0x14
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
