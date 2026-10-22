/*
 * FUN_005a3670 (201 B) — Armor processing function with loop.
 *
 * Calls FUN_005f07c0, sets up iterators, loops through armor locations,
 * processes them, then handles a special case.
 *
 * __fastcall (ECX = param_1), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_005f07c0(void);
extern void __stdcall FUN_00416bc0(void *a);
extern int __stdcall FUN_00416b60(void *a);
extern void __stdcall FUN_004e68e0(int a);
extern void __stdcall FUN_004e68f0(int a);
extern int __stdcall FUN_00416cc0(void *a);
extern void __stdcall FUN_004e8060(int a);
extern void __stdcall FUN_00416c60(void *a);

__declspec(naked) void __fastcall FUN_005a3670(void)
{
    
__asm {
sub     esp, 0x2C
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        call    FUN_005f07c0
        mov     esi, eax
        lea     ebx, [esi + 0x370]
        push    ebx
        lea     ecx, [esp + 0x28]
        call    FUN_00416bc0
        add     esi, 0x384
        push    esi
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x28], 0x783EC4
        call    FUN_00416bc0
        mov     dword ptr [esp + 0x10], 0x783F04
        mov     dword ptr [esp + 0xC], 0

L_loop:
        lea     eax, [esp + 0xC]
        push    eax
        mov     ecx, ebx
        call    FUN_00416b60
        mov     esi, eax
        test    esi, esi
        jz      L_skip
        mov     ecx, dword ptr [edi + 0x1A4]
        push    ecx
        mov     ecx, esi
        call    FUN_004e68e0
        mov     edx, dword ptr [esp + 0xC]
        mov     eax, dword ptr [edi + edx*4 + 0x180]
        push    eax
        mov     ecx, esi
        call    FUN_004e68f0
L_skip:
        mov     eax, dword ptr [esp + 0xC]
        inc     eax
        cmp     eax, 8
        mov     dword ptr [esp + 0xC], eax
        jle     L_loop

        lea     ecx, [esp + 0x10]
        call    FUN_00416cc0
        test    eax, eax
        jz      L_outer_done
        mov     edi, dword ptr [edi + 0x1A8]
L_inner_loop:
        push    edi
        mov     ecx, eax
        call    FUN_004e8060
        lea     ecx, [esp + 0x10]
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_inner_loop

L_outer_done:
        lea     ecx, [esp + 0x10]
        call    FUN_00416c60
        lea     ecx, [esp + 0x24]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x2C
        ret
    }


}
