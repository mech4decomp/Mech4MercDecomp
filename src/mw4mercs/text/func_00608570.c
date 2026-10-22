/*
 * FUN_00608570 (173 B) — Iterates a list of objects, dispatching
 * each entry (0x3ee vs other) to FUN_00609550 / FUN_006094d0, then
 * invokes a virtual method on this+0x28 and stores its result.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void);
extern void *__cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00609550(int p);
extern void __cdecl FUN_006094d0(int p);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) int __fastcall FUN_00608570(int this, int param1, int param2)
{
    __asm {
        sub     esp, 0x1c
        mov     eax, dword ptr [esp + 0x20]
        mov     edx, dword ptr [eax + 8]
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [eax + 4]
        lea     ebx, [edi + 0x28]
        mov     dword ptr [esp + 0x2c], ecx
        push    ebx
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x10], ebx
        call    FUN_00416bc0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], 0x78bf24
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jz      l_after
        push    ebp
    l_outer:
        mov     eax, dword ptr [esi + 0x30]
        test    eax, eax
        jle     l_next
        mov     ecx, dword ptr [esp + 0x30]
        mov     ebx, dword ptr [ecx]
        mov     ebp, eax
    l_inner:
        cmp     ebx, 0x3ee
        jnz     l_else
        mov     edx, dword ptr [esi + 0x10]
        push    edx
        mov     ecx, edi
        call    FUN_00609550
        jmp     l_cont
    l_else:
        mov     eax, dword ptr [esi + 0x10]
        push    eax
        mov     ecx, edi
        call    FUN_006094d0
    l_cont:
        dec     ebp
        jnz     l_inner
        mov     ebx, dword ptr [esp + 0x10]
    l_next:
        lea     ecx, [esp + 0x18]
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jnz     l_outer
        pop     ebp
    l_after:
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x10]
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx], eax
        lea     ecx, [esp + 0x14]
        call    FUN_00416c60
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        add     esp, 0x1c
        ret     8
    }
}
