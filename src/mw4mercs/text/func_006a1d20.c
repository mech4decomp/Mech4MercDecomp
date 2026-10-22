/*
 * FUN_006a1d20 (160 B) — __thiscall (ECX = this), RET 4.
 *
 * Builds a local list via FUN_00580580/FUN_0064dfc0, iterates it
 * invoking a virtual method on qualifying entries, then frees the
 * list buffer via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007f23b0;
extern void __fastcall FUN_00580580(void *this, void *a, void *b);
extern void __fastcall FUN_0064dfc0(void *this, void *a);
extern char __fastcall FUN_00415230(void *this, int arg);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_006a1d20(void *param)
{
    __asm {
        sub     esp, 0x14
        push    edi
        lea     eax, [esp + 0x8]
        push    eax
        lea     ecx, [esp + 0xb]
        push    ecx
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x18], 0
        mov     dword ptr [esp + 0x10], 0
        call    FUN_00580580
        mov     ecx, dword ptr [esp + 0x1c]
        lea     edx, [esp + 0xc]
        push    edx
        call    FUN_0064dfc0
        mov     edi, dword ptr [esp + 0xc]
        cmp     edi, dword ptr [esp + 0x10]
        jz      l_done
        push    esi
    l_loop:
        mov     eax, dword ptr [edi]
        mov     esi, dword ptr [eax + 0x2fc]
        test    esi, esi
        jz      l_cont
        mov     eax, dword ptr [DAT_007f23b0]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     l_cont
        mov     ecx, dword ptr [esi + 0x5f4]
        test    ecx, 0xfffffffc
        jz      l_cont
        and     ecx, 0xfffffffc
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
    l_cont:
        mov     eax, dword ptr [esp + 0x14]
        add     edi, 0x4
        cmp     edi, eax
        jnz     l_loop
        mov     edi, dword ptr [esp + 0x10]
        pop     esi
    l_done:
        test    edi, edi
        jz      l_ret
        push    edi
        call    FUN_004084e0
        add     esp, 4
    l_ret:
        pop     edi
        add     esp, 0x14
        ret     4
    }
}
