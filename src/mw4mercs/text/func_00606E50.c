/*
 * FUN_00606E50 (164 B @ 0x606E50) - builds a temporary object on the stack,
 * calls a series of __thiscall helpers (0x4D1F10, 0x4DA8D0, 0x4D1F80,
 * 0x4AF200, 0x4C6920), allocates 0x1EC bytes via 0x4084D0, and if non-null
 * dispatches to 0x606F00 with several args (incl. global 0x7F27C4). Returns
 * the resulting handle (or 0). Destructors 0x4D21C0 run on the stack temps.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004D1F10(void);
extern void __cdecl FUN_004DA8D0(void);
extern void __cdecl FUN_004D1F80(void);
extern void __cdecl FUN_004AF200(void);
extern void __cdecl FUN_004C6920(void);
extern void __cdecl FUN_004084D0(void);
extern int  dword_7F27C4;
extern void __cdecl FUN_00606F00(void);
extern void __cdecl FUN_004D21C0(void);

__declspec(naked) void FUN_00606E50(void)
{
    __asm {
        sub     esp, 0x88
        push    esi
        push    edi
        lea     ecx, [esp + 0x4c]
        call    FUN_004D1F10
        mov     esi, dword ptr [esp + 0x94]
        lea     eax, [esi + 0x54]
        push    eax
        lea     ecx, [esp + 0x50]
        push    ecx
        call    FUN_004DA8D0
        mov     edx, dword ptr [esp + 0x68]
        add     esp, 8
        push    1
        add     edx, 0x1c
        push    edx
        lea     ecx, [esp + 0x10]
        call    FUN_004D1F80
        lea     eax, [esp + 8]
        push    0
        push    eax
        call    FUN_004AF200
        add     esp, 4
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        call    FUN_004C6920
        push    0x1ec
        mov     edi, eax
        call    FUN_004084D0
        add     esp, 0x10
        test    eax, eax
        je      L_606ED5
        mov     edx, dword ptr [esp + 0x98]
        mov     ecx, dword ptr [dword_7F27C4]
        push    edi
        push    edx
        push    esi
        push    ecx
        mov     ecx, eax
        call    FUN_00606F00
        mov     esi, eax
        jmp     L_606ED7
L_606ED5:
        xor     esi, esi
L_606ED7:
        lea     ecx, [esp + 8]
        call    FUN_004D21C0
        lea     ecx, [esp + 0x4c]
        call    FUN_004D21C0
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0x88
        ret
    }
}
