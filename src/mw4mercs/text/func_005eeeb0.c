/*
 * FUN_005eeeb0 (126 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 *
 * Calls a virtual method on this+0x78, calls FUN_00707e70, stores a double
 * at this+0x1b8, then computes min() of two values into this+0x1ac/0x1b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00707e70(void *a);
extern void * __stdcall FUN_0050e1a0(void *a);

__declspec(naked) void __stdcall FUN_005eeeb0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 0x4]
        xor     ebx, ebx
        push    ebx
        mov     edi, eax
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x1b8]
        mov     ebp, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ebp + 0x170]
        mov     edi, dword ptr [edi + 0x44]
        cmp     eax, edi
        jle     L1
        push    edi
        jmp     L2
L1:
        push    eax
L2:
        call    FUN_0050e1a0
        mov     dword ptr [esi + 0x1ac], eax
        mov     eax, dword ptr [ebp + 0x174]
        add     esp, 0x4
        cmp     eax, edi
        jle     L3
        mov     dword ptr [esi + 0x1b0], edi
        pop     edi
        mov     dword ptr [esi + 0x17c], ebx
        mov     byte ptr [esi + 0x180], bl
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L3:
        pop     edi
        mov     dword ptr [esi + 0x17c], ebx
        mov     byte ptr [esi + 0x180], bl
        mov     dword ptr [esi + 0x1b0], eax
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
