/*
 * FUN_004f3360 (86 B) — MLR/Adept component-class factory dispatcher
 * (__stdcall, RET 0x10, 4 params). Dispatches on a component class ID:
 * 0x1fc -> FUN_004f1310, 0x20e -> FUN_004f1170, else assert-fail.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_004f1170(void);
extern void __cdecl FUN_004f1310(void);

__declspec(naked) void FUN_004f3360(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x8]
        sub     eax, 0x1fc
        jz      L339E
        sub     eax, 0x12
        jz      L338A
        push    0x7750cc
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L3384
        int     3
L3384:
        xor     eax, eax
        pop     ebp
        ret     0x10
L338A:
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0xc]
        push    eax
        push    ecx
        call    FUN_004f1170
        add     esp, 0x8
        pop     ebp
        ret     0x10
L339E:
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0xc]
        push    edx
        push    eax
        push    ecx
        call    FUN_004f1310
        add     esp, 0xc
        pop     ebp
        ret     0x10
    }
}
